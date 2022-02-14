
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_4 (enum tree_code VAR_2, tree VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6;
  tree VAR_7, VAR_8;

  if (FUNC_0 (VAR_4) != FUNC_0 (VAR_5)
      || FUNC_0 (VAR_4) == VAR_2
      || (FUNC_0 (VAR_4) != VAR_0
   && FUNC_0 (VAR_4) != VAR_1))
    return 0;

  if (FUNC_3 (FUNC_1 (VAR_4, 0), FUNC_1 (VAR_5, 0), 0))
    {
      VAR_6 = FUNC_1 (VAR_4, 0);
      VAR_7 = FUNC_1 (VAR_4, 1);
      VAR_8 = FUNC_1 (VAR_5, 1);
    }
  else if (FUNC_3 (FUNC_1 (VAR_4, 0), FUNC_1 (VAR_5, 1), 0))
    {
      VAR_6 = FUNC_1 (VAR_4, 0);
      VAR_7 = FUNC_1 (VAR_4, 1);
      VAR_8 = FUNC_1 (VAR_5, 0);
    }
  else if (FUNC_3 (FUNC_1 (VAR_4, 1), FUNC_1 (VAR_5, 0), 0))
    {
      VAR_6 = FUNC_1 (VAR_4, 1);
      VAR_7 = FUNC_1 (VAR_4, 0);
      VAR_8 = FUNC_1 (VAR_5, 1);
    }
  else if (FUNC_3 (FUNC_1 (VAR_4, 1), FUNC_1 (VAR_5, 1), 0))
    {
      VAR_6 = FUNC_1 (VAR_4, 1);
      VAR_7 = FUNC_1 (VAR_4, 0);
      VAR_8 = FUNC_1 (VAR_5, 0);
    }
  else
    return 0;

  return FUNC_2 (FUNC_0 (VAR_4), VAR_3, VAR_6,
        FUNC_2 (VAR_2, VAR_3, VAR_7, VAR_8));
}
