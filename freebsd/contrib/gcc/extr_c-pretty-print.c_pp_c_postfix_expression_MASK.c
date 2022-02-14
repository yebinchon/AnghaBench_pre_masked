
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int c_pretty_printer ;
 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,char) ;
 int FUNC_22 (int *,int ) ;

void
FUNC_23 (c_pretty_printer *VAR_3, tree VAR_4)
{
  enum tree_code VAR_5 = FUNC_2 (VAR_4);
  switch (VAR_5)
    {
    case 136:
    case 137:
      FUNC_19 (VAR_3, FUNC_3 (VAR_4, 0));
      FUNC_17 (VAR_3, VAR_5 == 136 ? "++" : "--");
      break;

    case 146:
      FUNC_19 (VAR_3, FUNC_3 (VAR_4, 0));
      FUNC_12 (VAR_3);
      FUNC_16 (VAR_3, FUNC_3 (VAR_4, 1));
      FUNC_14 (VAR_3);
      break;

    case 145:
      FUNC_19 (VAR_3, FUNC_3 (VAR_4, 0));
      FUNC_7 (VAR_3, FUNC_3 (VAR_4, 1));
      break;

    case 130:
      FUNC_11 (VAR_3, VAR_2
      ? "isunordered"
      : "__builtin_isunordered");
      goto two_args_fun;

    case 138:
      FUNC_11 (VAR_3, VAR_2
      ? "!isunordered"
      : "!__builtin_isunordered");
      goto two_args_fun;

    case 131:
      FUNC_11 (VAR_3, VAR_2
      ? "!isgreaterequal"
      : "!__builtin_isgreaterequal");
      goto two_args_fun;

    case 132:
      FUNC_11 (VAR_3, VAR_2
      ? "!isgreater"
      : "!__builtin_isgreater");
      goto two_args_fun;

    case 133:
      FUNC_11 (VAR_3, VAR_2
      ? "!islessequal"
      : "!__builtin_islessequal");
      goto two_args_fun;

    case 134:
      FUNC_11 (VAR_3, VAR_2
      ? "!isless"
      : "!__builtin_isless");
      goto two_args_fun;

    case 135:
      FUNC_11 (VAR_3, VAR_2
      ? "!islessgreater"
      : "!__builtin_islessgreater");
      goto two_args_fun;

    case 139:
      FUNC_11 (VAR_3, VAR_2
      ? "islessgreater"
      : "__builtin_islessgreater");
      goto two_args_fun;

    two_args_fun:
      FUNC_13 (VAR_3);
      FUNC_16 (VAR_3, FUNC_3 (VAR_4, 0));
      FUNC_21 (VAR_3, ',');
      FUNC_16 (VAR_3, FUNC_3 (VAR_4, 1));
      FUNC_15 (VAR_3);
      break;

    case 148:
      FUNC_11 (VAR_3, "__builtin_abs");
      FUNC_13 (VAR_3);
      FUNC_16 (VAR_3, FUNC_3 (VAR_4, 0));
      FUNC_15 (VAR_3);
      break;

    case 142:
      {
 tree VAR_6 = FUNC_3 (VAR_4, 0);
 if (FUNC_2 (VAR_6) == VAR_1)
   {
     FUNC_19 (VAR_3, FUNC_3 (VAR_6, 0));
     FUNC_6 (VAR_3);
   }
 else
   {
     FUNC_19 (VAR_3, VAR_6);
     FUNC_9 (VAR_3);
   }
 FUNC_16 (VAR_3, FUNC_3 (VAR_4, 1));
      }
      break;

    case 144:
    case 128:
    case 143:
      FUNC_8 (VAR_3, VAR_4);
      break;

    case 141:
      VAR_4 = FUNC_1 (FUNC_0 (VAR_4));

    case 140:
      FUNC_18 (VAR_3, VAR_4);
      break;

    case 129:
      FUNC_11 (VAR_3, "__builtin_va_arg");
      FUNC_13 (VAR_3);
      FUNC_5 (VAR_3, FUNC_3 (VAR_4, 0));
      FUNC_21 (VAR_3, ',');
      FUNC_22 (VAR_3, FUNC_4 (VAR_4));
      FUNC_15 (VAR_3);
      break;

    case 147:
      if (FUNC_2 (FUNC_3 (VAR_4, 0)) == VAR_0)
 {
   FUNC_10 (VAR_3, FUNC_3 (VAR_4, 0));
   break;
 }


    default:
      FUNC_20 (VAR_3, VAR_4);
      break;
    }
}
