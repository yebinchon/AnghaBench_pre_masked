
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

bool
FUNC_0 (int VAR_8)
{
  if (VAR_5)
    {
      if (!VAR_3)
        {
          return ((VAR_8) == 0
                  || ((VAR_8) == VAR_0 && VAR_4)
                  || ((VAR_8) == VAR_2 && VAR_7));
        }
      return ((VAR_8) == 0 || (VAR_8) == VAR_0
              || ((VAR_8) == VAR_2 && VAR_7)
              || ((VAR_8) == VAR_0 && VAR_4));
      }
  else
    {
      if (VAR_8 == 0
          || (VAR_8 == VAR_0 && VAR_4)
          || (VAR_8 == VAR_2 && VAR_7))
        return 1;

      if (!VAR_3
          && (VAR_8 == VAR_1 && VAR_6))
     return 1;

      return 0;
    }
}
