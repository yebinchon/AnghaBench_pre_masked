
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_data {scalar_t__ max_value_regs; TYPE_1__* e; } ;
struct TYPE_2__ {int oldest_regno; int next_regno; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0 (struct value_data *VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
    {
      VAR_3->e[VAR_4].mode = VAR_2;
      VAR_3->e[VAR_4].oldest_regno = VAR_4;
      VAR_3->e[VAR_4].next_regno = VAR_1;
    }
  VAR_3->max_value_regs = 0;
}
