
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;

int
FUNC_5 (tree VAR_6, int VAR_7)
{
  if (FUNC_1 (VAR_6) == VAR_2)
    {
      if (FUNC_4 (FUNC_3 (VAR_6)) == VAR_1 && VAR_7 < 64)
 return 64;
      else if (FUNC_0 (FUNC_4 (FUNC_3 (VAR_6))) && VAR_7 < 128)
 return 128;
    }
  else if (!VAR_5 && FUNC_1 (VAR_6) == VAR_3
          && !VAR_4
    && FUNC_2 (VAR_6) >= 31 && VAR_7 < VAR_0)
    return VAR_0;

  return VAR_7;
}
