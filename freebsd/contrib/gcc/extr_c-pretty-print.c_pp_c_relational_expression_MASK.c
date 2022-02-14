
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7 (c_pretty_printer *VAR_0, tree VAR_1)
{
  enum tree_code VAR_2 = FUNC_0 (VAR_1);
  switch (VAR_2)
    {
    case 128:
    case 130:
    case 129:
    case 131:
      FUNC_7 (VAR_0, FUNC_1 (VAR_1, 0));
      FUNC_3 (VAR_0);
      if (VAR_2 == 128)
 FUNC_6 (VAR_0);
      else if (VAR_2 == 130)
 FUNC_4 (VAR_0);
      else if (VAR_2 == 129)
 FUNC_5 (VAR_0, "<=");
      else if (VAR_2 == 131)
 FUNC_5 (VAR_0, ">=");
      FUNC_3 (VAR_0);
      FUNC_2 (VAR_0, FUNC_1 (VAR_1, 1));
      break;

    default:
      FUNC_2 (VAR_0, VAR_1);
      break;
    }
}
