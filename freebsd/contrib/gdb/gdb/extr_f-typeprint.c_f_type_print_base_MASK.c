
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;
 int VAR_2 ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 char* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct type*,int*) ;
 int FUNC_8 (struct ui_file*,char*,...) ;
 int FUNC_9 (char*,struct ui_file*) ;
 int FUNC_10 (struct type*,struct ui_file*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;

void
FUNC_13 (struct type *VAR_3, struct ui_file *VAR_4, int VAR_5,
     int VAR_6)
{
  int VAR_7;
  int VAR_8;

  VAR_2;

  FUNC_12 ("    ");
  if (VAR_3 == ((void*)0))
    {
      FUNC_9 ("<type unknown>", VAR_4);
      return;
    }




  if ((VAR_5 <= 0) && (FUNC_4 (VAR_3) != ((void*)0)))
    {
      if (FUNC_2 (VAR_3) == 137)
 FUNC_10 (VAR_3, VAR_4);
      else
 FUNC_9 (FUNC_4 (VAR_3), VAR_4);
      return;
    }

  if (FUNC_2 (VAR_3) != 130)
    FUNC_0 (VAR_3);

  switch (FUNC_2 (VAR_3))
    {
    case 130:
      FUNC_13 (FUNC_5 (VAR_3), VAR_4, 0, VAR_6);
      break;

    case 141:
    case 136:
      FUNC_13 (FUNC_5 (VAR_3), VAR_4, VAR_5, VAR_6);
      break;

    case 134:
      FUNC_8 (VAR_4, "PTR TO -> ( ");
      FUNC_13 (FUNC_5 (VAR_3), VAR_4, 0, VAR_6);
      break;

    case 132:
      FUNC_8 (VAR_4, "REF TO -> ( ");
      FUNC_13 (FUNC_5 (VAR_3), VAR_4, 0, VAR_6);
      break;

    case 128:
      FUNC_8 (VAR_4, "VOID");
      break;

    case 129:
      FUNC_8 (VAR_4, "struct <unknown>");
      break;

    case 138:
      FUNC_8 (VAR_4, "<unknown type>");
      break;

    case 133:

      FUNC_8 (VAR_4, "<range type>");
      break;

    case 140:

      FUNC_8 (VAR_4, "character");
      break;

    case 135:




      if (FUNC_11 (FUNC_4 (VAR_3), "char") == 0)
 FUNC_8 (VAR_4, "character");
      else
 goto default_case;
      break;

    case 139:
      FUNC_8 (VAR_4, "complex*%d", FUNC_3 (VAR_3));
      break;

    case 137:
      FUNC_10 (VAR_3, VAR_4);
      break;

    case 131:


      if (FUNC_1 (VAR_3) == VAR_0)
 FUNC_8 (VAR_4, "character*(*)");
      else
 {
   VAR_7 = FUNC_7 (VAR_3, &VAR_8);

   if (VAR_7 == VAR_1)
     FUNC_8 (VAR_4, "character*???");
   else
     FUNC_8 (VAR_4, "character*%d", VAR_8);
 }
      break;

    default_case:
    default:




      if (FUNC_4 (VAR_3) != ((void*)0))
 FUNC_9 (FUNC_4 (VAR_3), VAR_4);
      else
 FUNC_6 ("Invalid type code (%d) in symbol table.", FUNC_2 (VAR_3));
      break;
    }
}
