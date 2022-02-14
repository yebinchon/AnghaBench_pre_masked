
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct breakpoint {scalar_t__ pc; struct breakpoint* next; } ;
typedef scalar_t__ CORE_ADDR ;


 struct breakpoint* VAR_0 ;

__attribute__((used)) static struct breakpoint *
FUNC_0 (CORE_ADDR VAR_1)
{
  struct breakpoint *VAR_2 = VAR_0;

  while (VAR_2 != ((void*)0))
    {
      if (VAR_2->pc == VAR_1)
 return VAR_2;
      VAR_2 = VAR_2->next;
    }

  return ((void*)0);
}
