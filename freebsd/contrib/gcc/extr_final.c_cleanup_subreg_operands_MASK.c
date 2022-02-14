
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int n_operands; int n_dups; void*** dup_loc; void*** operand_loc; void** operand; } ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (void**) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_3 ;
 void* FUNC_4 (void**) ;

void
FUNC_5 (rtx VAR_4)
{
  int VAR_5;
  FUNC_3 (VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_3.n_operands; VAR_5++)
    {





      if (FUNC_0 (*VAR_3.operand_loc[VAR_5]) == VAR_2)
 VAR_3.operand[VAR_5] = FUNC_2 (VAR_3.operand_loc[VAR_5]);
      else if (FUNC_0 (VAR_3.operand[VAR_5]) == VAR_1
        || FUNC_0 (VAR_3.operand[VAR_5]) == VAR_0
        || FUNC_1 (VAR_3.operand[VAR_5]))
 VAR_3.operand[VAR_5] = FUNC_4 (VAR_3.operand_loc[VAR_5]);
    }

  for (VAR_5 = 0; VAR_5 < VAR_3.n_dups; VAR_5++)
    {
      if (FUNC_0 (*VAR_3.dup_loc[VAR_5]) == VAR_2)
 *VAR_3.dup_loc[VAR_5] = FUNC_2 (VAR_3.dup_loc[VAR_5]);
      else if (FUNC_0 (*VAR_3.dup_loc[VAR_5]) == VAR_1
        || FUNC_0 (*VAR_3.dup_loc[VAR_5]) == VAR_0
        || FUNC_1 (*VAR_3.dup_loc[VAR_5]))
 *VAR_3.dup_loc[VAR_5] = FUNC_4 (VAR_3.dup_loc[VAR_5]);
    }
}
