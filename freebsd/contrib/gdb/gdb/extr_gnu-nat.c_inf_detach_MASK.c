
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int detach_sc; int sc; struct proc* next; } ;
struct inf {struct proc* threads; int detach_sc; scalar_t__ nomsg; scalar_t__ stopped; struct proc* task; } ;


 int VAR_0 ;
 int FUNC_0 (struct inf*) ;
 int FUNC_1 (struct inf*) ;
 int FUNC_2 (struct inf*) ;
 int FUNC_3 (struct inf*,char*) ;
 int FUNC_4 (struct inf*,int ) ;
 int FUNC_5 (struct inf*,int ) ;
 int FUNC_6 (struct inf*,int ) ;
 int FUNC_7 (struct inf*) ;
 int FUNC_8 (struct inf*) ;
 int FUNC_9 (struct proc*) ;

void
FUNC_10 (struct inf *VAR_1)
{
  struct proc *VAR_2 = VAR_1->task;

  FUNC_3 (VAR_1, "detaching...");

  FUNC_1 (VAR_1);
  FUNC_4 (VAR_1, 0);

  if (VAR_2)
    {
      struct proc *VAR_3;

      FUNC_8 (VAR_1);

      FUNC_5 (VAR_1, 0);
      if (VAR_1->stopped)
 {
   if (VAR_1->nomsg)
     FUNC_2 (VAR_1);
   else
     FUNC_6 (VAR_1, VAR_0);
 }

      FUNC_9 (VAR_2);
      VAR_2->sc = VAR_1->detach_sc;

      for (VAR_3 = VAR_1->threads; VAR_3; VAR_3 = VAR_3->next)
 {
   FUNC_9 (VAR_3);
   VAR_3->sc = VAR_3->detach_sc;
 }

      FUNC_7 (VAR_1);
    }

  FUNC_0 (VAR_1);
}
