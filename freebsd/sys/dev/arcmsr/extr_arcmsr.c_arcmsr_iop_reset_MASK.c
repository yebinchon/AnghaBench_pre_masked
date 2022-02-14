
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef size_t u_int32_t ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_2__* pccb; } ;
struct AdapterControlBlock {scalar_t__ srboutstandingcount; int pci_unit; scalar_t__ pktReturnCount; scalar_t__ pktRequestCount; scalar_t__ workingsrb_startindex; scalar_t__ workingsrb_doneindex; struct CommandControlBlock** psrb_pool; } ;
struct TYPE_3__ {int target_id; scalar_t__ target_lun; int status; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 size_t FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct AdapterControlBlock*,size_t) ;
 int FUNC_4 (struct CommandControlBlock*,int) ;
 int FUNC_5 (char*,int,int,int ,struct CommandControlBlock*) ;

__attribute__((used)) static void FUNC_6(struct AdapterControlBlock *VAR_4)
{
 struct CommandControlBlock *VAR_5;
 u_int32_t VAR_6;
 u_int32_t VAR_7=0;

 if(VAR_4->srboutstandingcount>0) {

  VAR_6 = FUNC_1(VAR_4);

  FUNC_2(VAR_4);

  FUNC_0(VAR_4);
  for(VAR_7=0; VAR_7 < VAR_0; VAR_7++) {
   VAR_5 = VAR_4->psrb_pool[VAR_7];
   if(VAR_5->srb_state == VAR_2) {
    VAR_5->srb_state = VAR_1;
    VAR_5->pccb->ccb_h.status |= VAR_3;
    FUNC_4(VAR_5, 1);
    FUNC_5("arcmsr%d: scsi id=%d lun=%jx srb='%p' aborted\n"
      , VAR_4->pci_unit, VAR_5->pccb->ccb_h.target_id
      , (uintmax_t)VAR_5->pccb->ccb_h.target_lun, VAR_5);
   }
  }

  FUNC_3(VAR_4, VAR_6);
 }
 VAR_4->srboutstandingcount = 0;
 VAR_4->workingsrb_doneindex = 0;
 VAR_4->workingsrb_startindex = 0;
 VAR_4->pktRequestCount = 0;
 VAR_4->pktReturnCount = 0;
}
