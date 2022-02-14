
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef scalar_t__ LONGEST ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (unsigned char,struct ui_file*) ;
 int FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct type*,unsigned int) ;
 int FUNC_4 (struct type*,unsigned int) ;
 unsigned int FUNC_5 (struct type*) ;
 struct type* FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ui_file*,char*) ;
 int FUNC_10 (int ,struct ui_file*) ;
 int FUNC_11 (struct ui_file*) ;
 int FUNC_12 (struct ui_file*,unsigned char,int ,scalar_t__) ;

void
FUNC_13 (struct type *VAR_0, LONGEST VAR_1, struct ui_file *VAR_2)
{
  unsigned int VAR_3;
  unsigned VAR_4;

  FUNC_0 (VAR_0);

  switch (FUNC_2 (VAR_0))
    {

    case 144:
      VAR_4 = FUNC_5 (VAR_0);
      for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
   if (FUNC_3 (VAR_0, VAR_3) == VAR_1)
     {
       break;
     }
 }
      if (VAR_3 < VAR_4)
 {
   FUNC_10 (FUNC_4 (VAR_0, VAR_3), VAR_2);
 }
      else
 {
   FUNC_12 (VAR_2, 'd', 0, VAR_1);
 }
      break;

    case 140:
      FUNC_12 (VAR_2, FUNC_7 (VAR_0) ? 'u' : 'd', 0, VAR_1);
      break;

    case 145:
      FUNC_1 ((unsigned char) VAR_1, VAR_2);
      break;

    case 146:
      FUNC_9 (VAR_2, VAR_1 ? "TRUE" : "FALSE");
      break;

    case 135:
      FUNC_13 (FUNC_6 (VAR_0), VAR_1, VAR_2);
      return;

    case 130:
    case 136:
    case 147:
    case 131:
    case 129:
    case 141:
    case 142:
    case 128:
    case 133:
    case 132:
    case 143:
    case 139:
    case 138:
    case 134:
    case 137:
      FUNC_8 ("internal error: unhandled type in print_type_scalar");
      break;

    default:
      FUNC_8 ("Invalid type code in symbol table.");
    }
  FUNC_11 (VAR_2);
}
