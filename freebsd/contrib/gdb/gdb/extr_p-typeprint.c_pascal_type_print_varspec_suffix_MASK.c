
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ui_file*,char*) ;
 int FUNC_5 (struct type*,struct ui_file*) ;
 int FUNC_6 (struct type*,struct ui_file*,int,int ) ;
 int FUNC_7 (char*,char*,struct ui_file*) ;
 int FUNC_8 (struct type*,struct ui_file*,int ,int ) ;

__attribute__((used)) static void
FUNC_9 (struct type *VAR_1, struct ui_file *VAR_2,
      int VAR_3, int VAR_4,
      int VAR_5)
{
  if (VAR_1 == 0)
    return;

  if (FUNC_1 (VAR_1) && VAR_3 <= 0)
    return;

  VAR_0;

  switch (FUNC_0 (VAR_1))
    {
    case 150:
      if (VAR_4)
 FUNC_4 (VAR_2, ")");
      break;

    case 140:
      if (VAR_4)
 FUNC_4 (VAR_2, ")");
      FUNC_9 (FUNC_2 (VAR_1), VAR_2, 0, 0, 0);
      break;

    case 139:
      if (VAR_4)
 FUNC_4 (VAR_2, ")");
      FUNC_7 ("",
         "",
         VAR_2);
      if (FUNC_0 (FUNC_2 (VAR_1)) != 128)
 {
   FUNC_4 (VAR_2, " : ");
   FUNC_8 (FUNC_2 (VAR_1), VAR_2, 0, 0);
   FUNC_6 (FUNC_2 (VAR_1), VAR_2, VAR_3, 0);
   FUNC_9 (FUNC_2 (VAR_1), VAR_2, 0,
         VAR_4, 0);
 }
      break;

    case 138:
    case 136:
      FUNC_9 (FUNC_2 (VAR_1), VAR_2, 0, 1, 0);
      break;

    case 142:
      if (VAR_4)
 FUNC_4 (VAR_2, ")");
      if (!VAR_5)
 FUNC_5 (VAR_1, VAR_2);
      if (FUNC_0 (FUNC_2 (VAR_1)) != 128)
 {
   FUNC_4 (VAR_2, " : ");
   FUNC_8 (FUNC_2 (VAR_1), VAR_2, 0, 0);
   FUNC_6 (FUNC_2 (VAR_1), VAR_2, VAR_3, 0);
   FUNC_9 (FUNC_2 (VAR_1), VAR_2, 0,
         VAR_4, 0);
 }
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
      FUNC_3 ("type not handled in pascal_type_print_varspec_suffix()");
      break;
    }
}
