
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_8 ;

int
FUNC_6 (enum machine_mode VAR_9, tree VAR_10)
{
  if (VAR_2 == VAR_0
      && (FUNC_1 (VAR_9) == 8
   || (VAR_5
       && VAR_4
       && VAR_9 == VAR_6)))
    return 64;
  else if (FUNC_2 (VAR_9)
    || (VAR_10 && FUNC_3 (VAR_10) == VAR_7
        && FUNC_5 (VAR_10) >= 8
        && FUNC_5 (VAR_10) < 16))
    return 64;
  else if (FUNC_0 (VAR_9)
    || (VAR_10 && FUNC_3 (VAR_10) == VAR_7
        && FUNC_5 (VAR_10) >= 16))
    return 128;
  else if (VAR_8 && VAR_9 == VAR_1
    && VAR_10 && FUNC_4 (VAR_10) > 64)
    return 128;
  else
    return VAR_3;
}
