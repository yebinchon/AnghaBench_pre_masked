
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (scalar_t__,int ,int*,int) ;

rtx
FUNC_8 (tree VAR_2, enum machine_mode VAR_3)
{
  if (VAR_2)
    {
      int VAR_4 = FUNC_4 (VAR_2);
      VAR_3 = FUNC_7 (VAR_2, FUNC_3 (VAR_2), &VAR_4, 1);
    }

  FUNC_5 (FUNC_0 (VAR_3) == VAR_0 || FUNC_2 (VAR_3));
  FUNC_5 (FUNC_1 (VAR_3) <= 8);

  if (VAR_1 && FUNC_2 (VAR_3))
    return FUNC_6 (VAR_3, 16);
  else
    return FUNC_6 (VAR_3, 2);
}
