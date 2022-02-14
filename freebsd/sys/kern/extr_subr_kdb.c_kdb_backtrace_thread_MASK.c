
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_tid; } ;
struct stack {int dummy; } ;
struct TYPE_2__ {int (* dbbe_trace_thread ) (struct thread*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct stack*) ;
 int FUNC_2 (struct stack*,struct thread*) ;
 int FUNC_3 (struct stack*) ;
 int FUNC_4 (struct thread*) ;

void
FUNC_5(struct thread *VAR_1)
{

 if (VAR_0 != ((void*)0) && VAR_0->dbbe_trace_thread != ((void*)0)) {
  FUNC_0("KDB: stack backtrace of thread %d:\n", VAR_1->td_tid);
  VAR_0->dbbe_trace_thread(VAR_1);
 }
}
