
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int32_t ;
typedef size_t u_int16_t ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_3__* pccb; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int doneq_index; scalar_t__ srboutstandingcount; int completionQ_entry; int pci_unit; TYPE_1__* pCompletionQ; struct CommandControlBlock** psrb_pool; int srb_dmamap; int srb_dmat; } ;
struct TYPE_5__ {int target_id; int status; scalar_t__ target_lun; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; } ;
struct TYPE_4__ {size_t cmdSMID; int cmdFlag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct AdapterControlBlock*,struct CommandControlBlock*,size_t) ;
 int FUNC_4 (struct CommandControlBlock*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(struct AdapterControlBlock *VAR_10, struct CommandControlBlock *VAR_11)
{
 struct CommandControlBlock *VAR_12;
 u_int32_t VAR_13=0, VAR_14=0, VAR_15;
 u_int16_t VAR_16, VAR_17;

polling_ccb_retry:
 VAR_14++;
 FUNC_5(VAR_10->srb_dmat, VAR_10->srb_dmamap, VAR_3|VAR_4);
 while(1) {
  VAR_15 = VAR_10->doneq_index;
  if((FUNC_0(VAR_7, 0, VAR_9) & 0xFFFF) == VAR_15) {
   if(VAR_13) {
    break;
   } else {
    FUNC_2(25000);
       if ((VAR_14 > 100) && (VAR_11 != ((void*)0))) {
     break;
    }
       if (VAR_10->srboutstandingcount == 0) {
        break;
       }
    goto polling_ccb_retry;
   }
  }
  VAR_17 = VAR_10->pCompletionQ[VAR_15].cmdSMID;
  VAR_15++;
  if (VAR_15 >= VAR_10->completionQ_entry)
   VAR_15 = 0;
  VAR_10->doneq_index = VAR_15;
  VAR_12 = VAR_10->psrb_pool[VAR_17];
  VAR_16 = (VAR_10->pCompletionQ[VAR_15].cmdFlag & VAR_0) ? VAR_8 : VAR_6;
  if (VAR_11 != ((void*)0))
   VAR_13 = (VAR_12 == VAR_11) ? 1:0;
  if((VAR_12->acb != VAR_10) || (VAR_12->srb_state != VAR_2)) {
   if(VAR_12->srb_state == VAR_1) {
    FUNC_6("arcmsr%d: scsi id=%d lun=%jx srb='%p'poll command abort successfully \n"
      , VAR_10->pci_unit, VAR_12->pccb->ccb_h.target_id, (uintmax_t)VAR_12->pccb->ccb_h.target_lun, VAR_12);
    VAR_12->pccb->ccb_h.status |= VAR_5;
    FUNC_4(VAR_12, 1);
    continue;
   }
   FUNC_6("arcmsr%d: polling get an illegal srb command done srb='%p'srboutstandingcount=%d \n"
     , VAR_10->pci_unit, VAR_12, VAR_10->srboutstandingcount);
   continue;
  }
  FUNC_3(VAR_10, VAR_12, VAR_16);
 }
 FUNC_1(VAR_7, 0, VAR_9, VAR_15);
}
