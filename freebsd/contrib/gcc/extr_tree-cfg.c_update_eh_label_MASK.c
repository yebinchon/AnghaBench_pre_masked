
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct eh_region {int dummy; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {size_t index; } ;


 scalar_t__ FUNC_0 (struct eh_region*) ;
 scalar_t__* VAR_0 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct eh_region*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (struct eh_region *VAR_1)
{
  tree VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2)
    {
      tree VAR_3;
      basic_block VAR_4 = FUNC_1 (VAR_2);




      if (! VAR_4)
 return;

      VAR_3 = VAR_0[VAR_4->index];
      FUNC_2 (VAR_1, VAR_3);
    }
}
