
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
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

rtx
FUNC_4 (rtx VAR_4)
{
  rtx VAR_5 = FUNC_3 (VAR_4);

  if (!VAR_5)
    return VAR_2;
  VAR_5 = FUNC_1 (VAR_5);
  if (FUNC_0 (VAR_5) == VAR_1)
    return VAR_5;
  if (FUNC_0 (VAR_5) != VAR_0)
    return VAR_2;
  if (FUNC_2 (VAR_5, 2) == VAR_3 && FUNC_0 (FUNC_2 (VAR_5, 1)) == VAR_1)
    return FUNC_2 (VAR_5, 1);
  if (FUNC_2 (VAR_5, 1) == VAR_3 && FUNC_0 (FUNC_2 (VAR_5, 2)) == VAR_1)
    return FUNC_2 (VAR_5, 2);
  return VAR_2;
}
