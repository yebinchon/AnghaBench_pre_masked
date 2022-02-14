
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fx_r_type; int * fx_subsy; int * fx_addsy; } ;
typedef TYPE_1__ fixS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;

int
FUNC_1 (fixS *VAR_2)
{
  if (VAR_2->fx_r_type == VAR_1
      || VAR_2->fx_r_type == VAR_0)
    return 1;

  if (VAR_2->fx_addsy == ((void*)0))
    return 0;

  return FUNC_0 (VAR_2->fx_addsy, VAR_2->fx_subsy == ((void*)0));
}
