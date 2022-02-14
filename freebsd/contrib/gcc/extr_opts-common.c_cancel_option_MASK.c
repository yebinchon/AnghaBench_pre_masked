
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int neg_index; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool
FUNC_0 (int VAR_1, int VAR_2, int VAR_3)
{


  if (VAR_0 [VAR_2].neg_index == VAR_1)
    return 1;

  if (VAR_0 [VAR_2].neg_index != VAR_3)
    return FUNC_0 (VAR_1, VAR_0 [VAR_2].neg_index,
     VAR_3);

  return 0;
}
