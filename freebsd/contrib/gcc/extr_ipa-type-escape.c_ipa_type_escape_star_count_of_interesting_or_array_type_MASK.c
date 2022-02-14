
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;

int
FUNC_4 (tree VAR_4)
{
  int VAR_5 = 0;

  if (!VAR_4)
    return -1;
  VAR_4 = FUNC_3 (VAR_4);
  while (FUNC_0 (VAR_4) || FUNC_1 (VAR_4) == VAR_0)
    {
      VAR_4 = FUNC_3 (FUNC_2 (VAR_4));
      VAR_5++;
    }


  if (FUNC_1 (VAR_4) == VAR_2
      || FUNC_1 (VAR_4) == VAR_1
      || FUNC_1 (VAR_4) == VAR_3)
    return VAR_5;
  else
    return -1;
}
