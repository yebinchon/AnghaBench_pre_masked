
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fx_r_type; int * fx_addsy; } ;
typedef TYPE_1__ fixS ;
typedef int bfd_boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;

bfd_boolean
FUNC_2 (fixS * VAR_4)
{
  if (VAR_4->fx_addsy == ((void*)0))
    {
      return 1;
    }
  else if (VAR_2 == VAR_3
      && (FUNC_0 (VAR_4->fx_addsy) || FUNC_1 (VAR_4->fx_addsy)))
    {
      return 0;
    }
  else if (VAR_4->fx_r_type == VAR_1
      || VAR_4->fx_r_type == VAR_0)
    {
      return 0;
    }

  return 1;
}
