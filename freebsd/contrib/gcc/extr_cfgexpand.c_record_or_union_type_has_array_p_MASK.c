
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_4 (tree VAR_5)
{
  tree VAR_6 = FUNC_3 (VAR_5);
  tree VAR_7;

  for (VAR_7 = VAR_6; VAR_7; VAR_7 = FUNC_0 (VAR_7))
    if (FUNC_1 (VAR_7) == VAR_1)
      {
 tree VAR_8 = FUNC_2 (VAR_7);
 if ((FUNC_1 (VAR_8) == VAR_3
      || FUNC_1 (VAR_8) == VAR_4
      || FUNC_1 (VAR_8) == VAR_2)
     && FUNC_4 (VAR_8))
   return 1;
 if (FUNC_1 (VAR_8) == VAR_0)
   return 1;
      }
  return 0;
}
