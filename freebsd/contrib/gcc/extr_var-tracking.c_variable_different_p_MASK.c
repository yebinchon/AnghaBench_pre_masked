
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* variable ;
struct TYPE_7__ {scalar_t__ offset; int cur_loc; } ;
struct TYPE_6__ {int n_var_parts; TYPE_2__* var_part; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_4 (variable VAR_0, variable VAR_1,
        bool VAR_2)
{
  int VAR_3;

  if (VAR_0 == VAR_1)
    return 0;

  if (VAR_0->n_var_parts != VAR_1->n_var_parts)
    return 1;

  for (VAR_3 = 0; VAR_3 < VAR_0->n_var_parts; VAR_3++)
    {
      if (VAR_0->var_part[VAR_3].offset != VAR_1->var_part[VAR_3].offset)
 return 1;
      if (VAR_2)
 {
   if (!((FUNC_1 (VAR_0->var_part[VAR_3].cur_loc)
   && FUNC_1 (VAR_1->var_part[VAR_3].cur_loc)
   && (FUNC_0 (VAR_0->var_part[VAR_3].cur_loc)
       == FUNC_0 (VAR_1->var_part[VAR_3].cur_loc)))
  || FUNC_2 (VAR_0->var_part[VAR_3].cur_loc,
    VAR_1->var_part[VAR_3].cur_loc)))
     return 1;
 }
      if (FUNC_3 (&VAR_0->var_part[VAR_3], &VAR_1->var_part[VAR_3]))
 return 1;
      if (FUNC_3 (&VAR_1->var_part[VAR_3], &VAR_0->var_part[VAR_3]))
 return 1;
    }
  return 0;
}
