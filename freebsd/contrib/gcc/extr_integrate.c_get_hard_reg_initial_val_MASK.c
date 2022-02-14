
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct initial_value_struct {int num_entries; int max_entries; TYPE_1__* entries; } ;
typedef scalar_t__ rtx ;
typedef int initial_value_struct ;
typedef int initial_value_pair ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_5__ {struct initial_value_struct* hard_reg_initial_vals; } ;
struct TYPE_4__ {scalar_t__ pseudo; int hard_reg; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;
 void* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int,unsigned int) ;

rtx
FUNC_5 (enum machine_mode VAR_1, unsigned int VAR_2)
{
  struct initial_value_struct *VAR_3;
  rtx VAR_4;

  VAR_4 = FUNC_4 (VAR_1, VAR_2);
  if (VAR_4)
    return VAR_4;

  VAR_3 = VAR_0->hard_reg_initial_vals;
  if (VAR_3 == 0)
    {
      VAR_3 = FUNC_2 (sizeof (initial_value_struct));
      VAR_3->num_entries = 0;
      VAR_3->max_entries = 5;
      VAR_3->entries = FUNC_2 (5 * sizeof (initial_value_pair));
      VAR_0->hard_reg_initial_vals = VAR_3;
    }

  if (VAR_3->num_entries >= VAR_3->max_entries)
    {
      VAR_3->max_entries += 5;
      VAR_3->entries = FUNC_3 (VAR_3->entries,
      VAR_3->max_entries
      * sizeof (initial_value_pair));
    }

  VAR_3->entries[VAR_3->num_entries].hard_reg = FUNC_1 (VAR_1, VAR_2);
  VAR_3->entries[VAR_3->num_entries].pseudo = FUNC_0 (VAR_1);

  return VAR_3->entries[VAR_3->num_entries++].pseudo;
}
