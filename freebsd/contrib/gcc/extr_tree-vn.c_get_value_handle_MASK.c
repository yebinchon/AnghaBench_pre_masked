
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* tree_ann_common_t ;
typedef int tree ;
struct TYPE_3__ {int value_handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;

tree
FUNC_7 (tree VAR_4)
{

  if (FUNC_5 (VAR_4))
    return VAR_4;

  if (FUNC_3 (VAR_4) == VAR_2)
    return FUNC_2 (VAR_4);
  else if (FUNC_1 (VAR_4) || FUNC_0 (VAR_4) || FUNC_3 (VAR_4) == VAR_3
    || FUNC_3 (VAR_4) == VAR_0)
    {
      tree_ann_common_t VAR_5 = FUNC_6 (VAR_4);
      return ((VAR_5) ? VAR_5->value_handle : VAR_1);
    }
  else
    FUNC_4 ();
}
