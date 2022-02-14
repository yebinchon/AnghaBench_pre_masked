
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct initial_value_struct {int num_entries; TYPE_1__* entries; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {struct initial_value_struct* hard_reg_initial_vals; } ;
struct TYPE_3__ {int pseudo; int hard_reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;

rtx
FUNC_2 (enum machine_mode VAR_2, unsigned int VAR_3)
{
  struct initial_value_struct *VAR_4;
  int VAR_5;

  VAR_4 = VAR_1->hard_reg_initial_vals;
  if (VAR_4 != 0)
    for (VAR_5 = 0; VAR_5 < VAR_4->num_entries; VAR_5++)
      if (FUNC_0 (VAR_4->entries[VAR_5].hard_reg) == VAR_2
   && FUNC_1 (VAR_4->entries[VAR_5].hard_reg) == VAR_3)
 return VAR_4->entries[VAR_5].pseudo;

  return VAR_0;
}
