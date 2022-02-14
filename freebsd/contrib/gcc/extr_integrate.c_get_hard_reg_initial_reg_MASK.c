
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct initial_value_struct {int num_entries; TYPE_1__* entries; } ;
struct function {struct initial_value_struct* hard_reg_initial_vals; } ;
typedef int rtx ;
struct TYPE_2__ {int hard_reg; int pseudo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

rtx
FUNC_1 (struct function *VAR_1, rtx VAR_2)
{
  struct initial_value_struct *VAR_3 = VAR_1->hard_reg_initial_vals;
  int VAR_4;

  if (VAR_3 == 0)
    return VAR_0;

  for (VAR_4 = 0; VAR_4 < VAR_3->num_entries; VAR_4++)
    if (FUNC_0 (VAR_3->entries[VAR_4].pseudo, VAR_2))
      return VAR_3->entries[VAR_4].hard_reg;

  return VAR_0;
}
