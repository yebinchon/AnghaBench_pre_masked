
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
struct AdapterControlBlock {scalar_t__ srboutstandingcount; int pci_unit; scalar_t__ vir2phy_offset; int srb_dmamap; int srb_dmat; } ;
struct TYPE_3__ {int target_id; int status; scalar_t__ target_lun; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct AdapterControlBlock*,struct CommandControlBlock*,int ) ;
 int FUNC_3 (struct CommandControlBlock*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void FUNC_6(struct AdapterControlBlock *VAR_12, struct CommandControlBlock *VAR_13)
{
 struct CommandControlBlock *VAR_14;
 u_int32_t VAR_15, VAR_16=0, VAR_17=0;
 u_int16_t VAR_18;

polling_ccb_retry:
 VAR_17++;
 FUNC_4(VAR_12->srb_dmat, VAR_12->srb_dmamap, VAR_4|VAR_5);
 while(1) {
  if(!(FUNC_0(VAR_8, 0, VAR_10) & VAR_0)) {
   if(VAR_16) {
    break;
   } else {
    FUNC_1(25000);
    if ((VAR_17 > 100) && (VAR_13 != ((void*)0))) {
     break;
    }
    if (VAR_12->srboutstandingcount == 0) {
        break;
    }
    goto polling_ccb_retry;
   }
  }
  VAR_15 = FUNC_0(VAR_8, 0, VAR_11);

  VAR_14 = (struct CommandControlBlock *)(VAR_12->vir2phy_offset+(VAR_15 & 0xFFFFFFE0));
  VAR_18 = (VAR_15 & VAR_1)?VAR_9:VAR_7;
  if (VAR_13 != ((void*)0))
   VAR_16 = (VAR_14 == VAR_13) ? 1:0;
  if((VAR_14->acb != VAR_12) || (VAR_14->srb_state != VAR_3)) {
   if(VAR_14->srb_state == VAR_2) {
    FUNC_5("arcmsr%d: scsi id=%d lun=%jx srb='%p'poll command abort successfully \n"
      , VAR_12->pci_unit, VAR_14->pccb->ccb_h.target_id, (uintmax_t)VAR_14->pccb->ccb_h.target_lun, VAR_14);
    VAR_14->pccb->ccb_h.status |= VAR_6;
    FUNC_3(VAR_14, 1);
    continue;
   }
   FUNC_5("arcmsr%d: polling get an illegal srb command done srb='%p'srboutstandingcount=%d \n"
     , VAR_12->pci_unit, VAR_14, VAR_12->srboutstandingcount);
   continue;
  }
  FUNC_2(VAR_12, VAR_14, VAR_18);
 }
}
