
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 int FUNC_4 (int ,struct ui_file*,int ,int) ;
 int FUNC_5 (struct type*,struct ui_file*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ui_file*,char*) ;
 int FUNC_8 (char*,struct ui_file*) ;
 char* FUNC_9 (int ) ;

void
FUNC_10 (struct type *VAR_1, struct ui_file *VAR_2,
        int VAR_3, int VAR_4, int VAR_5)
{
  char *VAR_6;
  if (VAR_1 == 0)
    return;

  if (FUNC_2 (VAR_1) && VAR_3 <= 0)
    return;

  VAR_0;

  switch (FUNC_0 (VAR_1))
    {
    case 138:
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 1, 1);
      FUNC_7 (VAR_2, "*");
      FUNC_5 (VAR_1, VAR_2, 1, VAR_5);
      break;

    case 141:
      if (VAR_4)
 FUNC_7 (VAR_2, "(");
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 0, 0);
      FUNC_7 (VAR_2, " ");
      VAR_6 = FUNC_9 (FUNC_1 (VAR_1));
      if (VAR_6)
 FUNC_8 (VAR_6, VAR_2);
      else
 FUNC_4 (FUNC_1 (VAR_1), VAR_2, 0, VAR_4);
      FUNC_7 (VAR_2, "::");
      break;

    case 140:
      if (VAR_4)
 FUNC_7 (VAR_2, "(");
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 0, 0);
      if (VAR_4)
 {
   FUNC_7 (VAR_2, " ");
   FUNC_4 (FUNC_1 (VAR_1), VAR_2, 0, VAR_4);
   FUNC_7 (VAR_2, "::");
 }
      break;

    case 136:
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 1, 0);
      FUNC_7 (VAR_2, "&");
      FUNC_5 (VAR_1, VAR_2, 1, VAR_5);
      break;

    case 143:
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 0, 0);
      if (VAR_4)
 FUNC_7 (VAR_2, "(");
      break;

    case 151:
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 0, 0);
      if (VAR_4)
 FUNC_7 (VAR_2, "(");
      break;

    case 131:
      FUNC_10 (FUNC_3 (VAR_1), VAR_2, VAR_3, 0, 0);
      break;

    case 130:
    case 133:
    case 129:
    case 146:
    case 142:
    case 144:
    case 128:
    case 145:
    case 148:
    case 149:
    case 135:
    case 137:
    case 134:
    case 150:
    case 147:
    case 132:
    case 139:


      break;
    default:
      FUNC_6 ("type not handled in c_type_print_varspec_prefix()");
      break;
    }
}
