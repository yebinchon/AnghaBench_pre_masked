
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ui_file*,char*,...) ;
 int FUNC_10 (char*,struct ui_file*) ;
 int FUNC_11 (int ,struct ui_file*,int ,int) ;
 char* FUNC_12 (int ) ;

void
FUNC_13 (struct type *VAR_2, struct ui_file *VAR_3,
      int VAR_4, int VAR_5)
{
  char *VAR_6;
  if (VAR_2 == 0)
    return;

  if (FUNC_6 (VAR_2) && VAR_4 <= 0)
    return;

  VAR_1;

  switch (FUNC_3 (VAR_2))
    {
    case 138:
      FUNC_9 (VAR_3, "^");
      FUNC_13 (FUNC_7 (VAR_2), VAR_3, 0, 1);
      break;

    case 140:
      if (VAR_5)
 FUNC_9 (VAR_3, "(");
      FUNC_13 (FUNC_7 (VAR_2), VAR_3, 0, 0);
      FUNC_9 (VAR_3, " ");
      VAR_6 = FUNC_12 (FUNC_4 (VAR_2));
      if (VAR_6)
 FUNC_10 (VAR_6, VAR_3);
      else
 FUNC_11 (FUNC_4 (VAR_2), VAR_3, 0, VAR_5);
      FUNC_9 (VAR_3, "::");
      break;

    case 139:
      if (VAR_5)
 FUNC_9 (VAR_3, "(");
      if (FUNC_3 (FUNC_7 (VAR_2)) != 128)
 {
   FUNC_9 (VAR_3, "function  ");
 }
      else
 {
   FUNC_9 (VAR_3, "procedure ");
 }

      if (VAR_5)
 {
   FUNC_9 (VAR_3, " ");
   FUNC_11 (FUNC_4 (VAR_2), VAR_3, 0, VAR_5);
   FUNC_9 (VAR_3, "::");
 }
      break;

    case 136:
      FUNC_13 (FUNC_7 (VAR_2), VAR_3, 0, 1);
      FUNC_9 (VAR_3, "&");
      break;

    case 142:
      if (VAR_5)
 FUNC_9 (VAR_3, "(");

      if (FUNC_3 (FUNC_7 (VAR_2)) != 128)
 {
   FUNC_9 (VAR_3, "function  ");
 }
      else
 {
   FUNC_9 (VAR_3, "procedure ");
 }

      break;

    case 150:
      if (VAR_5)
 FUNC_9 (VAR_3, "(");
      FUNC_9 (VAR_3, "array ");
      if (FUNC_5 (VAR_2) >= 0 && FUNC_5 (FUNC_7 (VAR_2)) > 0
 && FUNC_1 (VAR_2) != VAR_0)
 FUNC_9 (VAR_3, "[%d..%d] ",
     FUNC_0 (VAR_2),
     FUNC_2 (VAR_2)
   );
      FUNC_9 (VAR_3, "of ");
      break;

    case 130:
    case 133:
    case 129:
    case 145:
    case 141:
    case 143:
    case 128:
    case 144:
    case 147:
    case 148:
    case 135:
    case 137:
    case 134:
    case 149:
    case 146:
    case 131:
    case 132:


      break;
    default:
      FUNC_8 ("type not handled in pascal_type_print_varspec_prefix()");
      break;
    }
}
