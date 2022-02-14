
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

void
FUNC_13 (c_pretty_printer *VAR_1, tree VAR_2)
{
  enum tree_code VAR_3 = FUNC_0 (VAR_2);
  switch (VAR_3)
    {
    case 130:
    case 131:
      FUNC_9 (VAR_1, VAR_3 == 130 ? "++" : "--");
      FUNC_13 (VAR_1, FUNC_1 (VAR_2, 0));
      break;

    case 137:
    case 133:
    case 132:
    case 136:
    case 128:
    case 135:

      if (VAR_3 == 137 && FUNC_0 (FUNC_1 (VAR_2, 0)) != VAR_0)
 FUNC_2 (VAR_1);
      else if (VAR_3 == 133)
 FUNC_5 (VAR_1);
      else if (VAR_3 == 132)
 FUNC_10 (VAR_1);
      else if (VAR_3 == 136 || VAR_3 == 135)
 FUNC_7 (VAR_1);
      else if (VAR_3 == 128)
 FUNC_8 (VAR_1);
      FUNC_3 (VAR_1, FUNC_1 (VAR_2, 0));
      break;

    case 129:
    case 134:
      FUNC_4 (VAR_1, VAR_3 == 129 ? "__real__" : "__imag__");
      FUNC_6 (VAR_1);
      FUNC_12 (VAR_1, FUNC_1 (VAR_2, 0));
      break;

    default:
      FUNC_11 (VAR_1, VAR_2);
      break;
    }
}
