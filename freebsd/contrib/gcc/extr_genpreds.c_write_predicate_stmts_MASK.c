
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;



 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_1)
{
  switch (FUNC_0 (VAR_1))
    {
    case 129:
      if (FUNC_3 (VAR_1))
 {
   FUNC_5 (VAR_1);
   FUNC_4 ("      return true;\n"
  "    default:\n"
  "      break;\n"
  "    }\n"
  "  return false;");
   return;
 }
      break;

    case 131:
      if (FUNC_3 (FUNC_1 (VAR_1, 0)))
 {
   FUNC_5 (FUNC_1 (VAR_1, 0));
   FUNC_4 ("      break;\n"
  "    default:\n"
  "      return false;\n"
  "    }");
   VAR_1 = FUNC_1 (VAR_1, 1);
 }
      break;

    case 130:
      if (FUNC_3 (FUNC_1 (VAR_1, 0)))
 {
   FUNC_5 (FUNC_1 (VAR_1, 0));
   FUNC_4 ("      return true;\n"
  "    default:\n"
  "      break;\n"
  "    }");
   VAR_1 = FUNC_1 (VAR_1, 1);
 }
      break;

    case 128:
      if (FUNC_3 (FUNC_1 (VAR_1, 0)))
 {
   FUNC_5 (FUNC_1 (VAR_1, 0));
   FUNC_4 ("      return false;\n"
  "    default:\n"
  "      break;\n"
  "    }\n"
  "  return true;");
   return;
 }
      break;

    default:
      break;
    }

  FUNC_2("  return ",VAR_0);
  FUNC_6 (VAR_1);
  FUNC_2(";\n", VAR_0);
}
