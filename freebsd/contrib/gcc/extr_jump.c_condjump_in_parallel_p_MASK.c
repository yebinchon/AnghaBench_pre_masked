
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_6 ;

int
FUNC_6 (rtx VAR_7)
{
  rtx VAR_8 = FUNC_1 (VAR_7);

  if (FUNC_0 (VAR_8) != VAR_2)
    return 0;
  else
    VAR_8 = FUNC_5 (VAR_8, 0, 0);

  if (FUNC_0 (VAR_8) != VAR_5)
    return 0;
  if (FUNC_0 (FUNC_2 (VAR_8)) != VAR_3)
    return 0;
  if (FUNC_0 (FUNC_3 (VAR_8)) == VAR_1)
    return 1;
  if (FUNC_0 (FUNC_3 (VAR_8)) != VAR_0)
    return 0;
  if (FUNC_4 (FUNC_3 (VAR_8), 2) == VAR_6
      && (FUNC_0 (FUNC_4 (FUNC_3 (VAR_8), 1)) == VAR_1
   || FUNC_0 (FUNC_4 (FUNC_3 (VAR_8), 1)) == VAR_4))
    return 1;
  if (FUNC_4 (FUNC_3 (VAR_8), 1) == VAR_6
      && (FUNC_0 (FUNC_4 (FUNC_3 (VAR_8), 2)) == VAR_1
   || FUNC_0 (FUNC_4 (FUNC_3 (VAR_8), 2)) == VAR_4))
    return 1;
  return 0;
}
