
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_data {unsigned int max_value_regs; TYPE_1__* e; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int mode; } ;


 unsigned int** VAR_0 ;

__attribute__((used)) static void
FUNC_0 (unsigned int VAR_1, enum machine_mode VAR_2,
   struct value_data *VAR_3)
{
  unsigned int VAR_4;

  VAR_3->e[VAR_1].mode = VAR_2;

  VAR_4 = VAR_0[VAR_1][VAR_2];
  if (VAR_4 > VAR_3->max_value_regs)
    VAR_3->max_value_regs = VAR_4;
}
