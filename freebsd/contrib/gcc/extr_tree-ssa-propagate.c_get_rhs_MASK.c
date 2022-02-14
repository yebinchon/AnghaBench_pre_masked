
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;


 int FUNC_3 (int ) ;

 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;

tree
FUNC_6 (tree VAR_1)
{
  enum tree_code VAR_2 = FUNC_4 (VAR_1);

  switch (VAR_2)
    {
    case 129:
      VAR_1 = FUNC_5 (VAR_1, 0);
      if (!VAR_1 || FUNC_4 (VAR_1) != 130)
 return VAR_1;


    case 130:
      VAR_1 = FUNC_5 (VAR_1, 1);
      if (FUNC_4 (VAR_1) == VAR_0)
 return FUNC_5 (VAR_1, 0);
      else
 return VAR_1;

    case 133:
      return FUNC_0 (VAR_1);
    case 128:
      return FUNC_3 (VAR_1);
    case 132:
      return FUNC_1 (VAR_1);
    case 131:
      return FUNC_2 (VAR_1);

    default:
      return VAR_1;
    }
}
