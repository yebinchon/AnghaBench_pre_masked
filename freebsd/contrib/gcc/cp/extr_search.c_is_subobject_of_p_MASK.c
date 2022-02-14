
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4 (tree VAR_1, tree VAR_2)
{
  tree VAR_3;

  for (VAR_3 = VAR_1; VAR_3; VAR_3 = FUNC_0 (VAR_3))
    {
      if (VAR_3 == VAR_2)
 return 1;
      if (FUNC_2 (VAR_3))
 return (FUNC_3 (FUNC_1 (VAR_3), FUNC_1 (VAR_2))
  != VAR_0);
    }
  return 0;
}
