
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

rtx
FUNC_3 (rtx VAR_0, rtx VAR_1, enum machine_mode VAR_2)
{
  rtx VAR_3;

  if (VAR_1 && FUNC_0 (VAR_1))
    VAR_3 = VAR_1;
  else
    VAR_3 = FUNC_2 (VAR_2);

  FUNC_1 (VAR_3, VAR_0);
  return VAR_3;
}
