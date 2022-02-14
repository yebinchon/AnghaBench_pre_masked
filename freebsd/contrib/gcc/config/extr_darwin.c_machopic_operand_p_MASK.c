
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3 (rtx VAR_4)
{
  if (VAR_1)
    {
      while (FUNC_0 (VAR_4) == VAR_0)
 VAR_4 = FUNC_1 (VAR_4, 0);

      if (FUNC_0 (VAR_4) == VAR_3)
 return FUNC_2 (VAR_4);
      else
 return 0;
    }

  while (FUNC_0 (VAR_4) == VAR_0)
    VAR_4 = FUNC_1 (VAR_4, 0);

  if (FUNC_0 (VAR_4) == VAR_2
      && FUNC_0 (FUNC_1 (VAR_4, 0)) == VAR_3
      && FUNC_0 (FUNC_1 (VAR_4, 1)) == VAR_3
      && FUNC_2 (FUNC_1 (VAR_4, 0))
      && FUNC_2 (FUNC_1 (VAR_4, 1)))
      return 1;

  return 0;
}
