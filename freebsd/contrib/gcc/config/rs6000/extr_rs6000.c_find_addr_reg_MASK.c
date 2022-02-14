
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

rtx
FUNC_6 (rtx VAR_2)
{
  while (FUNC_1 (VAR_2) == VAR_0)
    {
      if (FUNC_1 (FUNC_3 (VAR_2, 0)) == VAR_1
   && FUNC_2 (FUNC_3 (VAR_2, 0)) != 0)
 VAR_2 = FUNC_3 (VAR_2, 0);
      else if (FUNC_1 (FUNC_3 (VAR_2, 1)) == VAR_1
        && FUNC_2 (FUNC_3 (VAR_2, 1)) != 0)
 VAR_2 = FUNC_3 (VAR_2, 1);
      else if (FUNC_0 (FUNC_3 (VAR_2, 0)))
 VAR_2 = FUNC_3 (VAR_2, 1);
      else if (FUNC_0 (FUNC_3 (VAR_2, 1)))
 VAR_2 = FUNC_3 (VAR_2, 0);
      else
 FUNC_5 ();
    }
  FUNC_4 (FUNC_1 (VAR_2) == VAR_1 && FUNC_2 (VAR_2) != 0);
  return VAR_2;
}
