
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (int VAR_11, tree VAR_12, tree VAR_13)
{
  int VAR_14 = FUNC_2 (VAR_12);
  int VAR_15 = FUNC_2 (VAR_13);

  if (FUNC_1 (VAR_13) == VAR_3
      && !(VAR_11 & VAR_10))
    {






      if ((FUNC_1 (VAR_12) == VAR_2
    || FUNC_1 (VAR_12) == VAR_0
    || FUNC_1 (VAR_12) == VAR_1)
   && (VAR_15 & (VAR_4 | VAR_6)))
 return 0;

      if ((!FUNC_0 (VAR_12) && FUNC_1 (VAR_12) != VAR_3)
   && (VAR_15 & VAR_5))
 return 0;
    }

  if (!(VAR_11 & (VAR_8 | VAR_10))
      && (VAR_14 & VAR_15) != VAR_15)
    return 0;

  if (!(VAR_11 & (VAR_7 | VAR_9))
      && (VAR_15 & VAR_14) != VAR_14)
    return 0;

  return 1;
}
