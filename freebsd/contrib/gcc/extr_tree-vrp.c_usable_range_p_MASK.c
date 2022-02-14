
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int max; int min; } ;
typedef TYPE_1__ value_range_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4 (value_range_t *VAR_1, bool *VAR_2)
{
  FUNC_2 (VAR_1->type == VAR_0);
  if (FUNC_3 (VAR_1->min))
    {
      *VAR_2 = 1;
      if (!FUNC_1 (FUNC_0 (VAR_1->min)))
 return 0;
    }
  if (FUNC_3 (VAR_1->max))
    {
      *VAR_2 = 1;
      if (!FUNC_1 (FUNC_0 (VAR_1->max)))
 return 0;
    }
  return 1;
}
