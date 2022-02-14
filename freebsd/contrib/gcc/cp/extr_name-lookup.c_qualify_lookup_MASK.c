
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool
FUNC_1 (tree VAR_6, int VAR_7)
{
  if (VAR_6 == VAR_3)
    return 0;
  if ((VAR_7 & VAR_0) && FUNC_0 (VAR_6) == VAR_2)
    return 1;
  if ((VAR_7 & VAR_1)
      && (FUNC_0 (VAR_6) == VAR_5 || FUNC_0 (VAR_6) == VAR_4))
    return 1;
  if (VAR_7 & (VAR_0 | VAR_1))
    return 0;
  return 1;
}
