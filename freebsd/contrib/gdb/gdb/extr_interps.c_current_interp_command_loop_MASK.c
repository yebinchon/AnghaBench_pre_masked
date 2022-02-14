
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; TYPE_1__* procs; } ;
struct TYPE_3__ {int (* command_loop_proc ) (int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;

void
FUNC_4 (void)
{



  if (&FUNC_2 != ((void*)0))
    FUNC_2 ();
  else if (VAR_0 != ((void*)0)
    && VAR_0->procs->command_loop_proc != ((void*)0))
    VAR_0->procs->command_loop_proc (VAR_0->data);
  else if (VAR_1)
    FUNC_0 ();
  else
    FUNC_1 ();
}
