
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;





 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (enum tree_code VAR_0, tree VAR_1, tree VAR_2)
{
  tree VAR_3 = FUNC_2 (FUNC_1 (VAR_1));
  tree VAR_4 = FUNC_2 (FUNC_1 (VAR_2));
  if (FUNC_0 (VAR_4))
    return 0;
  switch (VAR_0)
    {
    case 129:
    case 128:
    case 130:

      if (FUNC_3 (FUNC_4 (VAR_3), VAR_2, 0))
 return 1;


    default:
      return 0;
    }
  return 0;
}
