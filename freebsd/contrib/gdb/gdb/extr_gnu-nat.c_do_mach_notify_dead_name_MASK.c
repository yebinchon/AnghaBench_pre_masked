
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {scalar_t__ port; scalar_t__ dead; } ;
struct TYPE_2__ {int suppress; } ;
struct inf {scalar_t__ pid; scalar_t__ threads_up_to_date; TYPE_1__ wait; struct proc* task; } ;
typedef scalar_t__ mach_port_t ;
typedef int error_t ;


 void* VAR_0 ;
 int FUNC_0 (struct inf*,char*,scalar_t__) ;
 struct proc* FUNC_1 (struct inf*,scalar_t__) ;
 int FUNC_2 (struct inf*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (struct proc*,char*) ;
 scalar_t__ VAR_1 ;
 struct inf* VAR_2 ;

error_t
FUNC_6 (mach_port_t VAR_3, mach_port_t VAR_4)
{
  struct inf *VAR_5 = VAR_2;

  FUNC_0 (VAR_2, "port = %d", VAR_4);

  if (VAR_5->task && VAR_5->task->port == VAR_4)
    {
      FUNC_5 (VAR_5->task, "is dead");
      VAR_5->task->port = VAR_0;
      if (VAR_1 == VAR_5->pid)


 VAR_5->wait.suppress = 1;
      else


 FUNC_2 (VAR_5);
    }
  else
    {
      struct proc *VAR_6 = FUNC_1 (VAR_5, VAR_4);
      if (VAR_6)
 {
   FUNC_5 (VAR_6, "is dead");
   VAR_6->port = VAR_0;
 }

      if (VAR_5->task->dead)

 VAR_5->wait.suppress = 1;
    }

  FUNC_3 (FUNC_4 (), VAR_4);
  VAR_5->threads_up_to_date = 0;

  return 0;
}
