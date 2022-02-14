
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {scalar_t__ lattice_val; } ;
typedef TYPE_1__ prop_value_t ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ FUNC_1 (int ) ;

__attribute__((used)) static prop_value_t *
FUNC_2 (tree VAR_2, bool VAR_3)
{
  prop_value_t *VAR_4 = &VAR_1[FUNC_0 (VAR_2)];
  if (VAR_3 && VAR_4->lattice_val == VAR_0)
    *VAR_4 = FUNC_1 (VAR_2);

  return VAR_4;
}
