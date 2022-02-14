
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_3 (tree VAR_4)
{
  tree VAR_5;

  if (VAR_4 == VAR_2)
    return 0;

  VAR_5 = FUNC_2 (VAR_4);

  if ((FUNC_0 (VAR_5) == VAR_1
       || FUNC_0 (VAR_5) == VAR_0
       || FUNC_0 (VAR_5) == VAR_3)
      && FUNC_1 (VAR_5))
    return 1;
  else
    return 0;
}
