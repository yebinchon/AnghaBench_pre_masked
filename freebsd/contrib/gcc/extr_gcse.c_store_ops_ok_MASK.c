
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_2 (rtx VAR_0, int *VAR_1)
{
  rtx VAR_2;

  for (; VAR_0; VAR_0 = FUNC_1 (VAR_0, 1))
    {
      VAR_2 = FUNC_1 (VAR_0, 0);
      if (VAR_1[FUNC_0(VAR_2)])
 return 0;
    }

  return 1;
}
