
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;

int
FUNC_1 (rtx VAR_0, rtx VAR_1, rtx VAR_2)
{
  if (FUNC_0 (VAR_1) > 32
      && FUNC_0 (VAR_1) < 64
      && FUNC_0 (VAR_0) > 1
      && FUNC_0 (VAR_0) + FUNC_0 (VAR_1) < 64
      && FUNC_0 (VAR_2) > 0
      && FUNC_0 (VAR_0) + FUNC_0 (VAR_2) < 32
      && (64 - (FUNC_0 (VAR_2) & 63)) >= FUNC_0 (VAR_0))
    return 1;

  return 0;
}
