
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fx_r_type; int fx_addsy; } ;
typedef TYPE_1__ fixS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int
FUNC_2 (fixS *VAR_5)
{
  if (FUNC_1 (VAR_5))
    return 1;

  if (VAR_3
      && FUNC_0 (VAR_5->fx_addsy) == VAR_4
      && (VAR_5->fx_r_type == VAR_2
   || VAR_5->fx_r_type == VAR_0
   || VAR_5->fx_r_type == VAR_1))
    return 1;

  return 0;
}
