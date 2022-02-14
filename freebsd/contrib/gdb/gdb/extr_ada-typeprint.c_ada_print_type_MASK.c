
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*) ;
 struct type* FUNC_5 (int ) ;
 int FUNC_6 (struct type*) ;
 scalar_t__ FUNC_7 (struct type*) ;
 int FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*) ;
 int FUNC_10 (struct type*) ;
 int FUNC_11 (struct type*) ;
 scalar_t__ FUNC_12 (struct type*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct type*) ;
 scalar_t__ FUNC_15 (struct type*) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (struct type*) ;
 int FUNC_18 (struct type*,char*,struct ui_file*,int,int) ;
 char* FUNC_19 (struct type*) ;
 int FUNC_20 (struct ui_file*,char*,...) ;
 int FUNC_21 (struct type*,struct ui_file*,int,int) ;
 int FUNC_22 (struct type*,struct ui_file*) ;
 int FUNC_23 (struct type*,struct ui_file*) ;
 int FUNC_24 (struct type*,struct ui_file*,char*) ;
 int FUNC_25 (struct type*,struct ui_file*) ;
 int FUNC_26 (char*,struct ui_file*) ;
 int FUNC_27 (struct type*,struct ui_file*,int,int) ;
 int FUNC_28 (struct type*,struct ui_file*,int,int) ;
 int FUNC_29 (struct type*,struct ui_file*) ;

void
FUNC_30 (struct type *VAR_0, char *VAR_1, struct ui_file *VAR_2,
  int VAR_3, int VAR_4)
{
  enum type_code VAR_5;
  int VAR_6;
  struct type *VAR_7 = FUNC_5 (FUNC_6 (VAR_0));
  char *VAR_8 = FUNC_19 (VAR_7);
  int VAR_9 = (VAR_1 != ((void*)0) && VAR_1[0] != '\0');

  if (VAR_7 == ((void*)0))
    {
      if (VAR_9)
 FUNC_20 (VAR_2, "%.*s: ",
     FUNC_16 (VAR_1), VAR_1);
      FUNC_20 (VAR_2, "<null type?>");
      return;
    }

  if (VAR_3 > 0)
    FUNC_0 (VAR_7);

  if (VAR_9 && FUNC_1 (VAR_7) != 134)
    FUNC_20 (VAR_2, "%.*s: ",
        FUNC_16 (VAR_1), VAR_1);

  if (VAR_8 != ((void*)0) && VAR_3 <= 0)
    {
      FUNC_20 (VAR_2, "%.*s",
   FUNC_16 (VAR_8), VAR_8);
      return;
    }

  if (FUNC_7 (VAR_7))
    FUNC_30 (FUNC_4 (VAR_7), "", VAR_2, VAR_3, VAR_4);
  else if (FUNC_12 (VAR_7))
    FUNC_21 (VAR_7, VAR_2, VAR_3, VAR_4);
  else
    switch (FUNC_1 (VAR_7))
      {
      default:
 FUNC_20 (VAR_2, "<");
 FUNC_18 (VAR_7, "", VAR_2, VAR_3, VAR_4);
 FUNC_20 (VAR_2, ">");
 break;
      case 132:
 FUNC_20 (VAR_2, "access ");
 FUNC_30 (FUNC_3 (VAR_7), "", VAR_2, VAR_3, VAR_4);
 break;
      case 130:
 FUNC_20 (VAR_2, "<ref> ");
 FUNC_30 (FUNC_3 (VAR_7), "", VAR_2, VAR_3, VAR_4);
 break;
      case 137:
 FUNC_21 (VAR_7, VAR_2, VAR_3, VAR_4);
 break;
      case 133:
 if (FUNC_10 (VAR_7))
   FUNC_23 (VAR_7, VAR_2);
 else if (FUNC_14 (VAR_7))
   FUNC_29 (VAR_7, VAR_2);
 else
   {
     char *VAR_10 = FUNC_17 (VAR_7);
     if (!FUNC_13 (VAR_10))
       FUNC_20 (VAR_2, "<%d-byte integer>",
    FUNC_2 (VAR_7));
     else
       {
  FUNC_20 (VAR_2, "range ");
  FUNC_26 (VAR_10, VAR_2);
       }
   }
 break;
      case 131:
 if (FUNC_10 (VAR_7))
   FUNC_23 (VAR_7, VAR_2);
 else if (FUNC_14 (VAR_7))
   FUNC_29 (VAR_7, VAR_2);
 else if (FUNC_11 (VAR_7))
   FUNC_20 (VAR_2, "mod %ld", (long) FUNC_15 (VAR_7));
 else
   {
     FUNC_20 (VAR_2, "range ");
     FUNC_25 (VAR_7, VAR_2);
   }
 break;
      case 135:
 FUNC_20 (VAR_2, "<%d-byte float>", FUNC_2 (VAR_7));
 break;
      case 136:
 if (VAR_3 < 0)
   FUNC_20 (VAR_2, "(...)");
 else
   FUNC_22 (VAR_7, VAR_2);
 break;
      case 129:
 if (FUNC_8 (VAR_7))
   FUNC_21 (VAR_7, VAR_2, VAR_3, VAR_4);
 else if (FUNC_9 (VAR_7))
   FUNC_20 (VAR_2,
       "array (?) of ? (<mal-formed descriptor>)");
 else
   FUNC_27 (VAR_7, VAR_2, VAR_3, VAR_4);
 break;
      case 128:
 FUNC_28 (VAR_7, VAR_2, VAR_3, VAR_4);
 break;
      case 134:
 FUNC_24 (VAR_7, VAR_2, VAR_1);
 break;
      }
}
