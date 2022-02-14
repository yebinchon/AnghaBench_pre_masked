
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ sc; scalar_t__ cur_sc; struct proc* next; } ;
struct inf {int running; scalar_t__ threads_up_to_date; struct proc* threads; scalar_t__ pending_execs; struct proc* task; } ;


 int FUNC_0 (struct inf*,char*,...) ;
 int FUNC_1 (struct proc*) ;

int
FUNC_2 (struct inf *VAR_0)
{
  struct proc *VAR_1 = VAR_0->task;




  FUNC_0 (VAR_0, "updating suspend counts");

  if (VAR_1)
    {
      struct proc *VAR_2;
      int VAR_3 = (VAR_1->sc == 0), VAR_4 = 0;

      if (VAR_1->sc > VAR_1->cur_sc)

 VAR_3 = FUNC_1 (VAR_1);

      if (VAR_0->pending_execs)


 VAR_4 = 1;


      for (VAR_2 = VAR_0->threads; VAR_2; VAR_2 = VAR_2->next)
 VAR_4 |= FUNC_1 (VAR_2);

      if (VAR_1->sc != VAR_1->cur_sc)


 VAR_3 = FUNC_1 (VAR_1);

      FUNC_0 (VAR_0, "%srunning...",
   (VAR_4 && VAR_3) ? "" : "not ");

      VAR_0->running = VAR_4 && VAR_3;



      if (VAR_0->running)
 VAR_0->threads_up_to_date = 0;

      return VAR_0->running;
    }

  return 0;
}
