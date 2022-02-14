
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {scalar_t__ port; scalar_t__ exc_port; scalar_t__ cur_sc; scalar_t__ sc; struct proc* next; struct inf* inf; } ;
struct TYPE_2__ {struct proc* thread; } ;
struct inf {struct proc* signal_thread; TYPE_1__ wait; struct proc* step_thread; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inf*) ;
 int FUNC_1 (struct inf*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct proc*,char*) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*) ;

struct proc *
FUNC_8 (struct proc *VAR_1)
{
  struct inf *VAR_2 = VAR_1->inf;
  struct proc *VAR_3 = VAR_1->next;

  FUNC_4 (VAR_1, "freeing...");

  if (VAR_1 == VAR_2->step_thread)

    FUNC_1 (VAR_2, 0);
  if (VAR_1 == VAR_2->wait.thread)
    FUNC_0 (VAR_2);
  if (VAR_1 == VAR_2->signal_thread)
    VAR_2->signal_thread = 0;

  if (VAR_1->port != VAR_0)
    {
      if (VAR_1->exc_port != VAR_0)

 FUNC_5 (VAR_1);
      if (VAR_1->cur_sc != 0)

 {
   VAR_1->sc = 0;
   FUNC_6 (VAR_1);
 }
      FUNC_2 (FUNC_3 (), VAR_1->port);
    }

  FUNC_7 (VAR_1);
  return VAR_3;
}
