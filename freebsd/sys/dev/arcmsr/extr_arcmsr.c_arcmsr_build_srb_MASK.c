
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int target_lun; int target_id; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; scalar_t__ cdb_len; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_scsiio csio; } ;
typedef void* u_int8_t ;
typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct SG64ENTRY {scalar_t__ length; scalar_t__ address; scalar_t__ addresshigh; } ;
struct SG32ENTRY {scalar_t__ length; scalar_t__ address; } ;
struct ARCMSR_CDB {int Function; scalar_t__ msgPages; scalar_t__ DataLength; int Flags; void* sgcount; int Cdb; void* CdbLength; int LUN; int TargetID; scalar_t__ Bus; int u; } ;
struct CommandControlBlock {scalar_t__ arc_cdb_size; int dm_segs_dmamap; int srb_flags; struct AdapterControlBlock* acb; union ccb* pccb; struct ARCMSR_CDB arcmsr_cdb; } ;
struct AdapterControlBlock {int dm_segs_dmat; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_5__ {int ds_addr; int ds_len; } ;
typedef TYPE_2__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ARCMSR_CDB*,int ,int) ;
 int FUNC_6 (struct ccb_scsiio*) ;

__attribute__((used)) static void FUNC_7(struct CommandControlBlock *VAR_8,
  bus_dma_segment_t *VAR_9, u_int32_t VAR_10)
{
 struct ARCMSR_CDB *VAR_11 = &VAR_8->arcmsr_cdb;
 u_int8_t *VAR_12 = (u_int8_t *)&VAR_11->u;
 u_int32_t VAR_13, VAR_14;
 union ccb *VAR_15 = VAR_8->pccb;
 struct ccb_scsiio *VAR_16 = &VAR_15->csio;
 u_int32_t VAR_17 = 0x30;

 FUNC_5(VAR_11, 0, sizeof(struct ARCMSR_CDB));
 VAR_11->Bus = 0;
 VAR_11->TargetID = VAR_15->ccb_h.target_id;
 VAR_11->LUN = VAR_15->ccb_h.target_lun;
 VAR_11->Function = 1;
 VAR_11->CdbLength = (u_int8_t)VAR_16->cdb_len;
 FUNC_1(FUNC_6(VAR_16), VAR_11->Cdb, VAR_16->cdb_len);
 if(VAR_10 != 0) {
  struct AdapterControlBlock *VAR_18 = VAR_8->acb;
  bus_dmasync_op_t VAR_19;
  u_int32_t VAR_20, VAR_21, VAR_22 = 0;

  if((VAR_15->ccb_h.flags & VAR_5) == VAR_4) {
   VAR_19 = VAR_2;
  } else {
   VAR_19 = VAR_3;
   VAR_11->Flags |= VAR_1;
   VAR_8->srb_flags |= VAR_7;
  }
  FUNC_2(VAR_18->dm_segs_dmat, VAR_8->dm_segs_dmamap, VAR_19);
  for(VAR_21=0; VAR_21 < VAR_10; VAR_21++) {

   VAR_20 = FUNC_0(VAR_9[VAR_21].ds_len);
   VAR_13 = FUNC_0(FUNC_4(VAR_9[VAR_21].ds_addr));
   VAR_14 = FUNC_0(FUNC_3(VAR_9[VAR_21].ds_addr));
   if(VAR_14 == 0) {
    struct SG32ENTRY *VAR_23 = (struct SG32ENTRY *)VAR_12;
    VAR_23->address = VAR_13;
    VAR_23->length = VAR_20;
    VAR_12 += sizeof(struct SG32ENTRY);
    VAR_17 += sizeof(struct SG32ENTRY);
   } else {
    u_int32_t VAR_24 = 0, VAR_25 = VAR_20;

    while(1) {
     u_int64_t VAR_26, VAR_27;
     struct SG64ENTRY *VAR_28 = (struct SG64ENTRY *)VAR_12;

     VAR_26 = (u_int64_t)VAR_13 + VAR_25;
     VAR_28->addresshigh = VAR_14;
     VAR_28->address = VAR_13;
     if(VAR_26 > 0x100000000) {

      VAR_27 = 0x100000000-VAR_13;
      VAR_28->length = (u_int32_t)VAR_27 | VAR_6;
      VAR_14 = VAR_14+1;
      VAR_13 = 0;
      VAR_25 = VAR_25 - (u_int32_t)VAR_27;
      VAR_24 += sizeof(struct SG64ENTRY);
      VAR_12 += sizeof(struct SG64ENTRY);
      VAR_22++;
     } else {
      VAR_28->length = VAR_25 | VAR_6;
      VAR_24 += sizeof(struct SG64ENTRY);
      VAR_12 += sizeof(struct SG64ENTRY);
      break;
     }
    }
    VAR_17 += VAR_24;
   }
   VAR_22++;
  }
  VAR_11->sgcount = (u_int8_t)VAR_22;
  VAR_11->DataLength = VAR_16->dxfer_len;
  if( VAR_17 > 256) {
   VAR_11->Flags |= VAR_0;
  }
 } else {
  VAR_11->DataLength = 0;
 }
 VAR_8->arc_cdb_size = VAR_17;
 VAR_11->msgPages = (VAR_17/256) + ((VAR_17 % 256) ? 1 : 0);
}
