
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fix {scalar_t__ fx_r_type; scalar_t__ fx_addsy; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct fix*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;

int
FUNC_2 (struct fix * VAR_13)
{






  if (VAR_13->fx_r_type == VAR_3
      || VAR_13->fx_r_type == VAR_6
      || VAR_13->fx_r_type == VAR_1
      || VAR_13->fx_r_type == VAR_7
      || VAR_13->fx_r_type == VAR_10
      || VAR_13->fx_r_type == VAR_9
      || VAR_13->fx_r_type == VAR_8)
    return 0;


  if ((VAR_13->fx_r_type >= VAR_2
       && VAR_13->fx_r_type <= VAR_4)
      || VAR_13->fx_r_type == VAR_5)
    return 1;


  if (VAR_13->fx_r_type == VAR_0
      && VAR_13->fx_addsy
      && (FUNC_1 (VAR_13->fx_addsy)->flags & VAR_12))
    return 1;

  return FUNC_0 (VAR_13);
}
