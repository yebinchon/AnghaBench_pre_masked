
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct breakpoint {int dummy; } ;
typedef TYPE_1__* bpstat ;
struct TYPE_4__ {int print_it; int * old_val; int * commands; struct breakpoint* breakpoint_at; struct TYPE_4__* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bpstat
FUNC_1 (struct breakpoint *VAR_1, bpstat VAR_2 )
{
  bpstat VAR_3;

  VAR_3 = (bpstat) FUNC_0 (sizeof (*VAR_3));
  VAR_2->next = VAR_3;
  VAR_3->breakpoint_at = VAR_1;

  VAR_3->commands = ((void*)0);
  VAR_3->old_val = ((void*)0);
  VAR_3->print_it = VAR_0;
  return VAR_3;
}
