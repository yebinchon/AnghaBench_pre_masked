
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_8 ;

bool
FUNC_6 (enum machine_mode VAR_9, tree VAR_10)
{


  if (!VAR_4)
    return 1;



  if (VAR_10 != 0
      ? FUNC_3 (VAR_10) || FUNC_4 (VAR_10)
      : FUNC_2 (VAR_9) == VAR_6)
    return 0;


  if (VAR_8 == VAR_1)
    if (VAR_10 != 0 ? FUNC_0 (VAR_10) : FUNC_2 (VAR_9) == VAR_5)
      return 0;


  if (VAR_8 != VAR_0)
    return 1;


  if (VAR_9 != VAR_3)
    return (FUNC_1 (VAR_9) >= VAR_7);
  else
    return (FUNC_5 (VAR_10) >= (VAR_7 / VAR_2));
}
