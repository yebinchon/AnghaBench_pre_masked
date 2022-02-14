
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

int
FUNC_4 (rtx VAR_2)
{
  enum machine_mode VAR_3 = FUNC_1 (VAR_2);

  if (VAR_2 == VAR_1 || VAR_2 == FUNC_0 (FUNC_1 (VAR_2)))
    return 1;
  if (FUNC_3 (VAR_2, VAR_3)
      && FUNC_2 (VAR_3))
    return VAR_0 ? 2 : -1;

  return 0;
}
