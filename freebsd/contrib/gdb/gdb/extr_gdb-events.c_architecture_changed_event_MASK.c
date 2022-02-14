
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* architecture_changed ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

void
FUNC_2 (void)
{
  if (VAR_1)
    FUNC_0 (VAR_2, "architecture_changed_event\n");
  if (!VAR_0->architecture_changed)
    return;
  VAR_0->architecture_changed ();
}
