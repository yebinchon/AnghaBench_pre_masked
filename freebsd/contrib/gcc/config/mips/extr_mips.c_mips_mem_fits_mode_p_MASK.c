
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

bool
FUNC_4 (enum machine_mode VAR_0, rtx VAR_1)
{
  rtx VAR_2;

  if (!FUNC_2 (VAR_1))
    return 0;

  VAR_2 = FUNC_3 (VAR_1);
  return VAR_2 && FUNC_1 (VAR_2) == FUNC_0 (VAR_0);
}
