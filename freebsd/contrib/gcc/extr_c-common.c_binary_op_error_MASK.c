
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
 int FUNC_0 (char*,char const*,char*,char*) ;
 int FUNC_1 () ;

void
FUNC_2 (enum tree_code VAR_0, tree VAR_1, tree VAR_2)
{
  const char *VAR_3;

  switch (VAR_0)
    {
    case 133:
      VAR_3 = "+"; break;
    case 137:
      VAR_3 = "-"; break;
    case 135:
      VAR_3 = "*"; break;
    case 138:
      VAR_3 = "max"; break;
    case 136:
      VAR_3 = "min"; break;
    case 146:
      VAR_3 = "=="; break;
    case 134:
      VAR_3 = "!="; break;
    case 141:
      VAR_3 = "<="; break;
    case 143:
      VAR_3 = ">="; break;
    case 139:
      VAR_3 = "<"; break;
    case 142:
      VAR_3 = ">"; break;
    case 140:
      VAR_3 = "<<"; break;
    case 132:
      VAR_3 = ">>"; break;
    case 130:
    case 144:
      VAR_3 = "%"; break;
    case 131:
    case 145:
      VAR_3 = "/"; break;
    case 149:
      VAR_3 = "&"; break;
    case 148:
      VAR_3 = "|"; break;
    case 129:
      VAR_3 = "&&"; break;
    case 128:
      VAR_3 = "||"; break;
    case 147:
      VAR_3 = "^"; break;
    default:
      FUNC_1 ();
    }
  FUNC_0 ("invalid operands to binary %s (have %qT and %qT)", VAR_3,
  VAR_1, VAR_2);
}
