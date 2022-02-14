
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fx_r_type; int * fx_addsy; int * fx_subsy; } ;
typedef TYPE_1__ fixS ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (int *) ;

int
FUNC_4 (fixS *VAR_8)
{
  if (VAR_8->fx_r_type == VAR_3
      || VAR_8->fx_r_type == VAR_2)
    return 0;

  if (VAR_8->fx_addsy == ((void*)0))
    return 1;
  if ((VAR_8->fx_r_type == VAR_0
       || VAR_8->fx_r_type == VAR_1
       || FUNC_2 (VAR_8->fx_r_type))
      && VAR_4
      && (FUNC_1 (VAR_8->fx_addsy)->flags & VAR_6) != 0)
    return 0;
  return 1;
}
