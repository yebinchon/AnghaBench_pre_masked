
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int resume_sc; int sc; struct proc* next; } ;
struct inf {TYPE_1__* task; int pending_execs; struct proc* threads; } ;
struct TYPE_2__ {scalar_t__ sc; } ;


 int FUNC_0 (struct inf*) ;
 int FUNC_1 (struct inf*) ;
 int FUNC_2 (struct inf*) ;

void
FUNC_3 (struct inf *VAR_0)
{
  struct proc *VAR_1;

  FUNC_0 (VAR_0);

  for (VAR_1 = VAR_0->threads; VAR_1; VAR_1 = VAR_1->next)
    VAR_1->sc = VAR_1->resume_sc;

  if (VAR_0->task)
    {
      if (!VAR_0->pending_execs)



 FUNC_2 (VAR_0);
      VAR_0->task->sc = 0;
    }

  FUNC_1 (VAR_0);
}
