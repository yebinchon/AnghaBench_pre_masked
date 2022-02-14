
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmd; } ;
struct TYPE_4__ {TYPE_1__ getreg; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2)
{
  FUNC_0 ("MON fetchregs\n");
  if (VAR_1->getreg.cmd)
    {
      if (VAR_2 >= 0)
 {
   FUNC_2 (VAR_2);
   return;
 }

      for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 FUNC_2 (VAR_2);
    }
  else
    {
      FUNC_1 ();
    }
}
