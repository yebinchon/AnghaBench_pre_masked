
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tts_event; } ;
struct TYPE_6__ {int tid; int pid; TYPE_1__ last_stop_state; scalar_t__ have_state; int handled; } ;
typedef TYPE_2__ thread_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,int ,...) ;

__attribute__((used)) static void
FUNC_3 (thread_info *VAR_3)
{
  if (!VAR_3->handled)
    {
      if (VAR_3->have_state)
 {
   if (VAR_3->last_stop_state.tts_event == VAR_0)
     {

       ;
     }
   else if (VAR_3->last_stop_state.tts_event == VAR_1)
     {


       ;
     }
   else
     {



       FUNC_2 ("About to continue process %d, thread %d with unhandled event %s.",
         VAR_3->pid, VAR_3->tid,
         FUNC_0 (
          VAR_3->last_stop_state.tts_event));





     }
 }
      else
 {


   FUNC_2 ("About to continue process %d, thread %d with unhandled event.",
     VAR_3->pid, VAR_3->tid);




 }
    }

}
