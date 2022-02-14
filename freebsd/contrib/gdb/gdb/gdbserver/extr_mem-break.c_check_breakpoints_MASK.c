
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {int pc; int (* handler ) (int ) ;scalar_t__ reinserting; } ;
typedef int CORE_ADDR ;


 struct breakpoint* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

int
FUNC_3 (CORE_ADDR VAR_0)
{
  struct breakpoint *VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 == ((void*)0))
    return 0;
  if (VAR_1->reinserting)
    {
      FUNC_2 ("Hit a removed breakpoint?");
      return 0;
    }

  (*VAR_1->handler) (VAR_1->pc);
  return 1;
}
