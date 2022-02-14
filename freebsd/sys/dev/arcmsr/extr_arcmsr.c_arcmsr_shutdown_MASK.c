
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_2__* pccb; } ;
struct AdapterControlBlock {scalar_t__ srboutstandingcount; int isr_lock; scalar_t__ pktReturnCount; scalar_t__ pktRequestCount; scalar_t__ workingsrb_startindex; scalar_t__ workingsrb_doneindex; struct CommandControlBlock** psrb_pool; int acb_flags; } ;
typedef int device_t ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 size_t FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;
 int FUNC_6 (struct CommandControlBlock*,int) ;
 int FUNC_7 (struct AdapterControlBlock*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(device_t VAR_6)
{
 u_int32_t VAR_7;
 u_int32_t VAR_8;
 struct CommandControlBlock *VAR_9;
 struct AdapterControlBlock *VAR_10=(struct AdapterControlBlock *)FUNC_8(VAR_6);


 FUNC_0(&VAR_10->isr_lock);

 VAR_8 = FUNC_3(VAR_10);
 FUNC_7(VAR_10);
 FUNC_5(VAR_10);

 VAR_10->acb_flags |= VAR_1;
 VAR_10->acb_flags &= ~VAR_0;
 if(VAR_10->srboutstandingcount != 0) {

  FUNC_4(VAR_10);

  FUNC_2(VAR_10);
  for(VAR_7=0; VAR_7 < VAR_2; VAR_7++) {
   VAR_9 = VAR_10->psrb_pool[VAR_7];
   if(VAR_9->srb_state == VAR_4) {
    VAR_9->srb_state = VAR_3;
    VAR_9->pccb->ccb_h.status |= VAR_5;
    FUNC_6(VAR_9, 1);
   }
  }
 }
 VAR_10->srboutstandingcount = 0;
 VAR_10->workingsrb_doneindex = 0;
 VAR_10->workingsrb_startindex = 0;
 VAR_10->pktRequestCount = 0;
 VAR_10->pktReturnCount = 0;
 FUNC_1(&VAR_10->isr_lock);
 return (0);
}
