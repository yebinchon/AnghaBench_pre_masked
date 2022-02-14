
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct HBB_MessageUnit {int doneq_index; int* done_qbuffer; int iop2drv_doorbell; } ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_2__* pccb; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int pci_unit; int srboutstandingcount; scalar_t__ vir2phy_offset; int srb_dmamap; int srb_dmat; scalar_t__ pmu; } ;
struct TYPE_3__ {int target_id; int status; scalar_t__ target_lun; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct AdapterControlBlock*,struct CommandControlBlock*,int ) ;
 int FUNC_3 (struct CommandControlBlock*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void FUNC_6(struct AdapterControlBlock *VAR_10, struct CommandControlBlock *VAR_11)
{
 struct HBB_MessageUnit *VAR_12 = (struct HBB_MessageUnit *)VAR_10->pmu;
 struct CommandControlBlock *VAR_13;
 u_int32_t VAR_14, VAR_15=0, VAR_16=0;
 int VAR_17;
 u_int16_t VAR_18;

polling_ccb_retry:
 VAR_16++;
 FUNC_1(0, VAR_12->iop2drv_doorbell, VAR_0);
 FUNC_4(VAR_10->srb_dmat, VAR_10->srb_dmamap, VAR_5|VAR_6);
 while(1) {
  VAR_17 = VAR_12->doneq_index;
  if((VAR_14 = VAR_12->done_qbuffer[VAR_17]) == 0) {
   if(VAR_15) {
    break;
   } else {
    FUNC_0(25000);
    if ((VAR_16 > 100) && (VAR_11 != ((void*)0))) {
     break;
    }
    goto polling_ccb_retry;
   }
  }
  VAR_12->done_qbuffer[VAR_17] = 0;
  VAR_17++;
  VAR_17 %= VAR_1;
  VAR_12->doneq_index = VAR_17;

  VAR_13 = (struct CommandControlBlock *)
   (VAR_10->vir2phy_offset+(VAR_14 << 5));
  VAR_18 = (VAR_14 & VAR_2)?VAR_9:VAR_8;
  VAR_15 = (VAR_13 == VAR_11) ? 1:0;
  if((VAR_13->acb != VAR_10) || (VAR_13->srb_state != VAR_4)) {
   if(VAR_13->srb_state == VAR_3) {
    FUNC_5("arcmsr%d: scsi id=%d lun=%jx srb='%p'"
     "poll command abort successfully \n"
     , VAR_10->pci_unit
     , VAR_13->pccb->ccb_h.target_id
     , (uintmax_t)VAR_13->pccb->ccb_h.target_lun, VAR_13);
    VAR_13->pccb->ccb_h.status |= VAR_7;
    FUNC_3(VAR_13, 1);
    continue;
   }
   FUNC_5("arcmsr%d: polling get an illegal srb command done srb='%p'"
    "srboutstandingcount=%d \n"
    , VAR_10->pci_unit
    , VAR_13, VAR_10->srboutstandingcount);
   continue;
  }
  FUNC_2(VAR_10, VAR_13, VAR_18);
 }
}
