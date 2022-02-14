
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3 (tree VAR_1, tree VAR_2)
{
  while (VAR_1 != VAR_0 && VAR_2 != VAR_0)
    {
      if (FUNC_2 (FUNC_1 (VAR_1), FUNC_1 (VAR_2)) != 1)
 return 0;

      VAR_1 = FUNC_0 (VAR_1);
      VAR_2 = FUNC_0 (VAR_2);
    }

  return VAR_1 == VAR_2;
}
