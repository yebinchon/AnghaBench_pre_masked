
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct breakpoint {int dummy; } ;
typedef TYPE_1__* bpstat ;
struct TYPE_4__ {struct breakpoint* breakpoint_at; struct TYPE_4__* next; } ;



bpstat
FUNC_0 (bpstat VAR_0, struct breakpoint *VAR_1)
{
  if (VAR_0 == ((void*)0))
    return ((void*)0);

  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
      if (VAR_0->breakpoint_at == VAR_1)
 return VAR_0;
    }
  return ((void*)0);
}
