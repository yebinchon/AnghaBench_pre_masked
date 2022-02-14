
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int ,int ) ;

rtx
FUNC_8 (rtx VAR_5, rtx VAR_6)
{
  rtx VAR_7;
  enum machine_mode VAR_8 = FUNC_2 (VAR_5);

  if (VAR_8 == VAR_4)
    VAR_8 = FUNC_2 (VAR_6);

  if (VAR_8 == VAR_4)
    VAR_8 = VAR_3;

  if (FUNC_1 (VAR_5) == VAR_1)
    return FUNC_7 (VAR_6, FUNC_3 (VAR_5));
  else if (FUNC_1 (VAR_6) == VAR_1)
    return FUNC_7 (VAR_5, FUNC_3 (VAR_6));
  else if (FUNC_0 (VAR_5))
    VAR_7 = VAR_5, VAR_5 = VAR_6, VAR_6 = VAR_7;

  if (FUNC_1 (VAR_5) == VAR_2 && FUNC_0 (FUNC_4 (VAR_5, 1)))
    return FUNC_8 (FUNC_4 (VAR_5, 0), FUNC_8 (FUNC_4 (VAR_5, 1), VAR_6));



  if (FUNC_1 (VAR_6) == VAR_2 && FUNC_0 (FUNC_4 (VAR_6, 1)))
    return FUNC_8 (FUNC_8 (VAR_5, FUNC_4 (VAR_6, 0)), FUNC_4 (VAR_6, 1));



  if (FUNC_0 (VAR_5) && FUNC_0 (VAR_6))
    {
      if (FUNC_1 (VAR_5) == VAR_0)
 VAR_5 = FUNC_4 (VAR_5, 0);
      if (FUNC_1 (VAR_6) == VAR_0)
 VAR_6 = FUNC_4 (VAR_6, 0);

      return FUNC_5 (VAR_4, FUNC_6 (VAR_8, VAR_5, VAR_6));
    }

  return FUNC_6 (VAR_8, VAR_5, VAR_6);
}
