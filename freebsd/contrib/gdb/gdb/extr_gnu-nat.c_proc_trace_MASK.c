
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_state_t ;
struct proc {scalar_t__ exc_port; TYPE_1__* inf; } ;
struct TYPE_2__ {int event_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct proc*,char*,char*) ;
 int FUNC_3 (struct proc*,int) ;
 int FUNC_4 (struct proc*,int ) ;

int
FUNC_5 (struct proc *VAR_1, int VAR_2)
{
  thread_state_t VAR_3 = FUNC_3 (VAR_1, 1);

  if (!VAR_3)
    return 0;

  FUNC_2 (VAR_1, "tracing %s", VAR_2 ? "on" : "off");

  if (VAR_2)
    {


      if (VAR_1->exc_port == VAR_0)
 FUNC_4 (VAR_1, VAR_1->inf->event_port);
      FUNC_1 (VAR_3);
    }
  else
    FUNC_0 (VAR_3);

  return 1;
}
