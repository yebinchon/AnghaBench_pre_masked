
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;



 int VAR_0 ;




 int VAR_1 ;


 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;


__attribute__((used)) static int
FUNC_3 (tree VAR_3)
{
  enum tree_code VAR_4 = FUNC_0 (VAR_3);

  switch (VAR_4)
    {
    case 131:
    case 134:
    case 137:
      return FUNC_3 (FUNC_1 (VAR_3, 0));

    case 136:
    case 129:
      return 1;

    case 133:
    case 139:
    case 128:
    case 132:
    case 130:
    case 135:
      return (FUNC_0 (FUNC_2 (VAR_3)) != VAR_1
       && FUNC_0 (FUNC_2 (VAR_3)) != VAR_2);

    case 138:
      return FUNC_0 (FUNC_2 (VAR_3)) == VAR_0;

    default:
      return 0;
    }
}
