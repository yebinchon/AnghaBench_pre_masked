
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_3 (enum machine_mode VAR_3, rtx VAR_4, rtx VAR_5)
{
  if (VAR_1
      && FUNC_0 (VAR_5) == VAR_0
      && FUNC_2 (VAR_5) >= 0
      && (FUNC_2 (VAR_5) & (FUNC_1 (VAR_3) - 1)) == 0)
    {
      if (FUNC_1 (VAR_3) == 4 && VAR_4 == VAR_2)
 return FUNC_2 (VAR_5) < 256 * FUNC_1 (VAR_3);
      return FUNC_2 (VAR_5) < 32 * FUNC_1 (VAR_3);
    }
  return 0;
}
