
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2 (rtx VAR_0, rtx VAR_1)
{
  rtx VAR_2;
  if (VAR_0 == VAR_1)
    return 0;
  for (VAR_2 = FUNC_1 (VAR_0); VAR_2 != VAR_1; VAR_2 = FUNC_1 (VAR_2))
    if (FUNC_0 (VAR_2))
      return 0;
  return 1;
}
