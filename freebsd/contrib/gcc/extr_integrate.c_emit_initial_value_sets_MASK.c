
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct initial_value_struct {int num_entries; TYPE_1__* entries; } ;
typedef int rtx ;
struct TYPE_4__ {struct initial_value_struct* hard_reg_initial_vals; } ;
struct TYPE_3__ {int hard_reg; int pseudo; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

unsigned int
FUNC_5 (void)
{
  struct initial_value_struct *VAR_1 = VAR_0->hard_reg_initial_vals;
  int VAR_2;
  rtx VAR_3;

  if (VAR_1 == 0)
    return 0;

  FUNC_4 ();
  for (VAR_2 = 0; VAR_2 < VAR_1->num_entries; VAR_2++)
    FUNC_1 (VAR_1->entries[VAR_2].pseudo, VAR_1->entries[VAR_2].hard_reg);
  VAR_3 = FUNC_3 ();
  FUNC_2 ();

  FUNC_0 (VAR_3);
  return 0;
}
