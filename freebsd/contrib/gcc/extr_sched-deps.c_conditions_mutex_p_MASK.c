
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4 (rtx VAR_0, rtx VAR_1)
{
  if (FUNC_0 (VAR_0)
      && FUNC_0 (VAR_1)
      && FUNC_1 (VAR_0) == FUNC_3 (VAR_1, ((void*)0))
      && FUNC_2 (VAR_0, 0) == FUNC_2 (VAR_1, 0)
      && FUNC_2 (VAR_0, 1) == FUNC_2 (VAR_1, 1))
    return 1;
  return 0;
}
