
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int* VAR_10 ;

bool
FUNC_2 (int VAR_11)
{
  int VAR_12;
  if (!VAR_5)
    {
      if (VAR_6)
        return (VAR_11 < VAR_3
                || (VAR_8 && FUNC_1 (VAR_11) && !VAR_9[VAR_11]));
      else
        return (VAR_11 < VAR_3
         || (VAR_7 && FUNC_0 (VAR_11)
        && (VAR_11 < VAR_0 + VAR_2))
         || (VAR_8 && FUNC_1 (VAR_11)
      && (VAR_11 < VAR_1 + VAR_4)));
    }

  if (VAR_6)
    {
      if (FUNC_1 (VAR_11) && VAR_8)
        return 1;
    }
  else
    {
      if (VAR_8 && FUNC_1 (VAR_11)
          && (VAR_11 < VAR_1 + VAR_4))
        return 1;
    }

  if (!VAR_11)
    return 1;
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
    if (VAR_11 == VAR_10[VAR_12])
      return 1;
  return 0;
}
