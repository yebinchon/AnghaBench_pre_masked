
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

int
FUNC_8 (tree VAR_3, tree VAR_4)
{
  tree VAR_5;

  if (FUNC_4 (VAR_3) == VAR_0)
    {
      for (VAR_5 = VAR_3;
    VAR_5 != VAR_1;
    VAR_5 = FUNC_2 (VAR_5) ? FUNC_3 (VAR_5) : VAR_1)
 if (VAR_5 == VAR_4)
   return 1;
    }
  else
    {
      FUNC_6 (FUNC_4 (VAR_3) == VAR_2);

      for (VAR_5 = FUNC_5 (VAR_3);
    VAR_5 != VAR_1;
    VAR_5 = FUNC_1 (VAR_5)
      ? FUNC_5 (FUNC_0 (VAR_5)) : VAR_1)
 if (FUNC_7 (VAR_5, FUNC_5 (VAR_4)))
   return 1;
    }

  return 0;
}
