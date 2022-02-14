
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ port; int tid; } ;
struct inf {struct proc* step_thread; int pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inf*,char*,...) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 scalar_t__ FUNC_3 (struct proc*,int) ;

void
FUNC_4 (struct inf *VAR_1, struct proc *VAR_2)
{
  FUNC_0 (!VAR_2 || FUNC_2 (VAR_2));

  if (VAR_2)
    FUNC_1 (VAR_1, "setting step thread: %d/%d", VAR_1->pid, VAR_2->tid);
  else
    FUNC_1 (VAR_1, "clearing step thread");

  if (VAR_1->step_thread != VAR_2)
    {
      if (VAR_1->step_thread && VAR_1->step_thread->port != VAR_0)
 if (!FUNC_3 (VAR_1->step_thread, 0))
   return;
      if (VAR_2 && FUNC_3 (VAR_2, 1))
 VAR_1->step_thread = VAR_2;
      else
 VAR_1->step_thread = 0;
    }
}
