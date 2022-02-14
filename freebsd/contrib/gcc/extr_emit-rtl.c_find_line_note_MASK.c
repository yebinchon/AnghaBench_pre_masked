
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static rtx
FUNC_3 (rtx VAR_1)
{
  if (VAR_0)
    return 0;

  for (; VAR_1; VAR_1 = FUNC_2 (VAR_1))
    if (FUNC_1 (VAR_1)
 && FUNC_0 (VAR_1) >= 0)
      break;

  return VAR_1;
}
