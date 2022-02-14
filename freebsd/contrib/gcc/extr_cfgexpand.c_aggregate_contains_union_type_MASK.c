
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

__attribute__((used)) static bool
FUNC_4 (tree VAR_5)
{
  tree VAR_6;

  if (FUNC_1 (VAR_5) == VAR_4
      || FUNC_1 (VAR_5) == VAR_2)
    return 1;
  if (FUNC_1 (VAR_5) == VAR_0)
    return FUNC_4 (FUNC_2 (VAR_5));
  if (FUNC_1 (VAR_5) != VAR_3)
    return 0;

  for (VAR_6 = FUNC_3 (VAR_5); VAR_6; VAR_6 = FUNC_0 (VAR_6))
    if (FUNC_1 (VAR_6) == VAR_1)
      if (FUNC_4 (FUNC_2 (VAR_6)))
 return 1;

  return 0;
}
