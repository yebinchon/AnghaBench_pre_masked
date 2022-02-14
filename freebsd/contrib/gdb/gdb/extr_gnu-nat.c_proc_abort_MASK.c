
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc {int aborted; scalar_t__ cur_sc; int sc; int port; struct inf* inf; } ;
struct TYPE_5__ {scalar_t__ reply; } ;
struct TYPE_6__ {TYPE_2__ exc; struct proc* thread; } ;
struct inf {TYPE_3__ wait; TYPE_1__* task; } ;
struct TYPE_4__ {scalar_t__ cur_sc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inf*) ;
 int FUNC_2 (struct proc*,char*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;

void
FUNC_7 (struct proc *VAR_0, int VAR_1)
{
  FUNC_0 (FUNC_3 (VAR_0));

  if (!VAR_0->aborted)
    {
      struct inf *VAR_2 = VAR_0->inf;
      int VAR_3 = (VAR_0->cur_sc == 0 && VAR_2->task->cur_sc == 0);

      if (VAR_3 && VAR_1)
 {
   VAR_0->sc = 1;
   FUNC_1 (VAR_0->inf);
   VAR_3 = 0;
   FUNC_6 ("Stopped %s.", FUNC_4 (VAR_0));
 }
      else if (VAR_0 == VAR_2->wait.thread && VAR_2->wait.exc.reply && !VAR_1)

 VAR_3 = 1;

      if (!VAR_3)

 {
   FUNC_5 (VAR_0->port);
   FUNC_2 (VAR_0, "aborted");
   VAR_0->aborted = 1;
 }
      else
 FUNC_2 (VAR_0, "not aborting");
    }
}
