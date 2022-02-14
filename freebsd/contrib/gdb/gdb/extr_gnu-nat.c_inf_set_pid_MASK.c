
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_t ;
struct proc {scalar_t__ port; int sc; int cur_sc; } ;
struct inf {int pid; struct proc* task; scalar_t__ pause_sc; scalar_t__ threads_up_to_date; } ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ error_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (char*,scalar_t__,char*) ;
 int FUNC_2 (struct inf*,char*,scalar_t__) ;
 int FUNC_3 (struct inf*) ;
 struct proc* FUNC_4 (struct inf*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8 (struct inf *VAR_3, pid_t VAR_4)
{
  task_t VAR_5;
  struct proc *VAR_6 = VAR_3->task;

  FUNC_2 (VAR_3, "setting pid: %d", VAR_4);

  if (VAR_4 < 0)
    VAR_5 = VAR_0;
  else
    {
      error_t VAR_7 = FUNC_5 (VAR_2, VAR_4, &VAR_5);
      if (VAR_7)
 FUNC_1 ("Error getting task for pid %d: %s", VAR_4, FUNC_6 (VAR_7));
    }

  FUNC_2 (VAR_3, "setting task: %d", VAR_5);

  if (VAR_3->pause_sc)
    FUNC_7 (VAR_5);

  if (VAR_6 && VAR_6->port != VAR_5)
    {
      VAR_3->task = 0;
      FUNC_3 (VAR_3);
      FUNC_0 (VAR_6);
    }

  if (VAR_5 != VAR_0)
    {
      VAR_3->task = FUNC_4 (VAR_3, VAR_5, VAR_1);
      VAR_3->threads_up_to_date = 0;
    }

  if (VAR_3->task)
    {
      VAR_3->pid = VAR_4;
      if (VAR_3->pause_sc)

 VAR_3->task->sc = VAR_3->task->cur_sc = 1;
    }
  else
    VAR_3->pid = -1;
}
