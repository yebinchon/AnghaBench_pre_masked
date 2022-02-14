
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct breakpoint {int number; } ;
typedef TYPE_1__* bpstat ;
struct TYPE_3__ {struct TYPE_3__* next; struct breakpoint* breakpoint_at; } ;



int
FUNC_0 (bpstat *VAR_0)
{
  struct breakpoint *VAR_1;

  if ((*VAR_0) == ((void*)0))
    return 0;
  else
    {
      VAR_1 = (*VAR_0)->breakpoint_at;
      *VAR_0 = (*VAR_0)->next;
      if (VAR_1 == ((void*)0))
 return -1;
      else
 return VAR_1->number;
    }
}
