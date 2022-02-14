
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5 (tree VAR_0, tree VAR_1)
{
  if (VAR_0 == VAR_1)
    return 0;

  if (FUNC_3 (FUNC_2 (VAR_0)) != FUNC_3 (FUNC_2 (VAR_1)))
    {
      int VAR_2 = FUNC_4 (VAR_0);
      int VAR_3 = FUNC_4 (VAR_1);

      if (VAR_2 < VAR_3)
 return 1;
      else if (VAR_2 > VAR_3)
 return 0;



    }
  else if (!FUNC_3 (FUNC_2 (VAR_0)))
    return FUNC_0 (VAR_0, VAR_1);

  return FUNC_1 (VAR_0, VAR_1);
}
