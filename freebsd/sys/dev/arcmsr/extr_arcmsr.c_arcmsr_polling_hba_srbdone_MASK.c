
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_2__* pccb; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int outbound_int_enable; int pci_unit; int srboutstandingcount; scalar_t__ vir2phy_offset; int srb_dmamap; int srb_dmat; } ;
struct TYPE_3__ {int target_id; int status; scalar_t__ target_lun; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct AdapterControlBlock*,struct CommandControlBlock*,int ) ;
 int FUNC_4 (struct CommandControlBlock*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_6 (char*,int,...) ;

__attribute__((used)) static void FUNC_7(struct AdapterControlBlock *VAR_10, struct CommandControlBlock *VAR_11)
{
 struct CommandControlBlock *VAR_12;
 u_int32_t VAR_13, VAR_14, VAR_15=0, VAR_16=0;
 u_int16_t VAR_17;

polling_ccb_retry:
 VAR_16++;
 VAR_14=FUNC_0(VAR_7, 0, VAR_14) & VAR_10->outbound_int_enable;
 FUNC_1(VAR_7, 0, VAR_14, VAR_14);
 FUNC_5(VAR_10->srb_dmat, VAR_10->srb_dmamap, VAR_3|VAR_4);
 while(1) {
  if((VAR_13 = FUNC_0(VAR_7,
   0, VAR_9)) == 0xFFFFFFFF) {
   if(VAR_15) {
    break;
   } else {
    FUNC_2(25000);
    if ((VAR_16 > 100) && (VAR_11 != ((void*)0))) {
     break;
    }
    goto polling_ccb_retry;
   }
  }

  VAR_12 = (struct CommandControlBlock *)
   (VAR_10->vir2phy_offset+(VAR_13 << 5));
  VAR_17 = (VAR_13 & VAR_0)?VAR_8:VAR_6;
  VAR_15 = (VAR_12 == VAR_11) ? 1:0;
  if((VAR_12->acb != VAR_10) || (VAR_12->srb_state != VAR_2)) {
   if(VAR_12->srb_state == VAR_1) {
    FUNC_6("arcmsr%d: scsi id=%d lun=%jx srb='%p'"
     "poll command abort successfully \n"
     , VAR_10->pci_unit
     , VAR_12->pccb->ccb_h.target_id
     , (uintmax_t)VAR_12->pccb->ccb_h.target_lun, VAR_12);
    VAR_12->pccb->ccb_h.status |= VAR_5;
    FUNC_4(VAR_12, 1);
    continue;
   }
   FUNC_6("arcmsr%d: polling get an illegal srb command done srb='%p'"
    "srboutstandingcount=%d \n"
    , VAR_10->pci_unit
    , VAR_12, VAR_10->srboutstandingcount);
   continue;
  }
  FUNC_3(VAR_10, VAR_12, VAR_17);
 }
}
