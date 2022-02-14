
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

int
FUNC_11 (rtx VAR_6)
{
  rtx VAR_7 = FUNC_5 (VAR_6);
  rtx VAR_8 = FUNC_4 (VAR_6);

  if (VAR_8 == VAR_5 && VAR_7 == VAR_5)
    return 1;

  if (FUNC_1 (VAR_8) && FUNC_1 (VAR_7))
    return FUNC_9 (VAR_8, VAR_7) && !FUNC_10 (VAR_8);

  if (FUNC_0 (VAR_8) == VAR_3)
    return FUNC_9 (FUNC_8 (VAR_8, 0), VAR_7)
    && ! VAR_0 && FUNC_8 (VAR_8, 2) == VAR_4
    && !FUNC_10 (VAR_7);

  if (FUNC_0 (VAR_8) == VAR_1)
    VAR_8 = FUNC_8 (VAR_8, 0);

  if (FUNC_0 (VAR_7) == VAR_2 && FUNC_0 (VAR_8) == VAR_2)
    {
      if (FUNC_6 (VAR_7) != FUNC_6 (VAR_8))
 return 0;
      VAR_7 = FUNC_7 (VAR_7);
      VAR_8 = FUNC_7 (VAR_8);
    }

  return (FUNC_3 (VAR_7) && FUNC_3 (VAR_8)
   && FUNC_2 (VAR_7) == FUNC_2 (VAR_8));
}
