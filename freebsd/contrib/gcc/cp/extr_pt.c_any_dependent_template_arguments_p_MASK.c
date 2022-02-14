
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;

bool
FUNC_5 (tree VAR_1)
{
  int VAR_2;
  int VAR_3;

  if (!VAR_1)
    return 0;
  if (VAR_1 == VAR_0)
    return 1;

  for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_1); ++VAR_2)
    {
      tree VAR_4 = FUNC_1 (VAR_1, VAR_2 + 1);
      for (VAR_3 = 0; VAR_3 < FUNC_3 (VAR_4); ++VAR_3)
 if (FUNC_4 (FUNC_2 (VAR_4, VAR_3)))
   return 1;
    }

  return 0;
}
