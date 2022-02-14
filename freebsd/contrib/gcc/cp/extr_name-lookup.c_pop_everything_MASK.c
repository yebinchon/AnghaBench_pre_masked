
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ kind; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

void
FUNC_4 (void)
{
  if (VAR_0)
    FUNC_3 ("XXX entering pop_everything ()\n");
  while (!FUNC_2 ())
    {
      if (VAR_1->kind == VAR_2)
 FUNC_0 ();
      else
 FUNC_1 (0, 0, 0);
    }
  if (VAR_0)
    FUNC_3 ("XXX leaving pop_everything ()\n");
}
