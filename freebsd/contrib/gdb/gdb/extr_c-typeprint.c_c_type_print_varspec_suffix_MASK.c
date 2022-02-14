
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct TYPE_2__ {int la_language; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (int ,char*,struct ui_file*,int,int ) ;
 int FUNC_9 (struct type*,struct ui_file*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct ui_file*,char*,...) ;
 int FUNC_12 (char*,struct ui_file*) ;
 int VAR_3 ;
 int FUNC_13 (char*) ;

void
FUNC_14 (struct type *VAR_4, struct ui_file *VAR_5,
        int VAR_6, int VAR_7, int VAR_8)
{
  if (VAR_4 == 0)
    return;

  if (FUNC_4 (VAR_4) && VAR_6 <= 0)
    return;

  VAR_1;

  switch (FUNC_1 (VAR_4))
    {
    case 151:
      if (VAR_7)
 FUNC_11 (VAR_5, ")");

      FUNC_11 (VAR_5, "[");
      if (FUNC_3 (VAR_4) >= 0 && FUNC_3 (FUNC_7 (VAR_4)) > 0
 && FUNC_0 (VAR_4) != VAR_0)
 FUNC_11 (VAR_5, "%d",
     (FUNC_3 (VAR_4)
      / FUNC_3 (FUNC_7 (VAR_4))));
      FUNC_11 (VAR_5, "]");

      FUNC_14 (FUNC_7 (VAR_4), VAR_5, VAR_6,
       0, 0);
      break;

    case 141:
      if (VAR_7)
 FUNC_11 (VAR_5, ")");
      FUNC_14 (FUNC_7 (VAR_4), VAR_5, VAR_6,
       0, 0);
      break;

    case 140:
      if (VAR_7)
 FUNC_11 (VAR_5, ")");
      FUNC_14 (FUNC_7 (VAR_4), VAR_5, VAR_6,
       0, 0);
      if (VAR_7)
 {
   FUNC_9 (VAR_4, VAR_5);
 }
      break;

    case 138:
    case 136:
      FUNC_14 (FUNC_7 (VAR_4), VAR_5, VAR_6,
       1, 0);
      break;

    case 143:
      if (VAR_7)
 FUNC_11 (VAR_5, ")");
      if (!VAR_8)
 {
   int VAR_9, VAR_10 = FUNC_5 (VAR_4);
   FUNC_11 (VAR_5, "(");
   if (VAR_10 == 0
              && (FUNC_6 (VAR_4)
                  || VAR_2->la_language == VAR_3))
     {
       FUNC_11 (VAR_5, "void");
     }
   else
     for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
       {
  if (VAR_9 > 0)
    {
      FUNC_12 (", ", VAR_5);
      FUNC_13 ("    ");
    }
  FUNC_8 (FUNC_2 (VAR_4, VAR_9), "", VAR_5, -1, 0);
       }
   FUNC_11 (VAR_5, ")");
 }
      FUNC_14 (FUNC_7 (VAR_4), VAR_5, VAR_6,
       VAR_7, 0);
      break;

    case 131:
      FUNC_14 (FUNC_7 (VAR_4), VAR_5, VAR_6,
       VAR_7, 0);
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
      FUNC_10 ("type not handled in c_type_print_varspec_suffix()");
      break;
    }
}
