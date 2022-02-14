
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc {int port; } ;
struct TYPE_3__ {struct proc* task; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct proc*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct proc *VAR_1 = VAR_0->task;
  if (VAR_1)
    {
      FUNC_1 (VAR_1, "terminating...");
      FUNC_3 (VAR_1->port);
      FUNC_0 (VAR_0, -1);
    }
  FUNC_2 ();
}
