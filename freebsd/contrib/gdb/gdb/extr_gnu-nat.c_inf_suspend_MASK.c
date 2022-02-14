
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int pause_sc; int sc; struct proc* next; } ;
struct inf {int pause_sc; TYPE_1__* task; struct proc* threads; } ;
struct TYPE_2__ {int sc; } ;


 int FUNC_0 (struct inf*) ;
 int FUNC_1 (struct inf*) ;

void
FUNC_2 (struct inf *VAR_0)
{
  struct proc *VAR_1;

  FUNC_0 (VAR_0);

  for (VAR_1 = VAR_0->threads; VAR_1; VAR_1 = VAR_1->next)
    VAR_1->sc = VAR_1->pause_sc;

  if (VAR_0->task)
    VAR_0->task->sc = VAR_0->pause_sc;

  FUNC_1 (VAR_0);
}
