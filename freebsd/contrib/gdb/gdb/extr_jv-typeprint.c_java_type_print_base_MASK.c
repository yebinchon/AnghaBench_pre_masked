
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct fn_field {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct type*) ;
 int VAR_3 ;
 int FUNC_2 (struct type*) ;


 int * FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*,int) ;
 int FUNC_6 (struct type*,int) ;
 int FUNC_7 (struct type*,int) ;
 struct fn_field* FUNC_8 (struct type*,int) ;
 int FUNC_9 (struct type*,int) ;
 char* FUNC_10 (struct type*,int) ;
 int FUNC_11 (struct fn_field*,int) ;
 int FUNC_12 (struct fn_field*,int) ;
 int FUNC_13 (struct fn_field*,int) ;
 char* FUNC_14 (struct fn_field*,int) ;
 int FUNC_15 (struct fn_field*,int) ;
 int FUNC_16 (struct fn_field*,int) ;
 int FUNC_17 (struct fn_field*,int) ;
 int FUNC_18 (struct fn_field*,int) ;
 int FUNC_19 (struct fn_field*,int) ;
 int FUNC_20 (struct fn_field*,int) ;
 struct type* FUNC_21 (struct fn_field*,int) ;
 char* FUNC_22 (struct type*) ;
 int FUNC_23 (struct type*) ;
 int FUNC_24 (struct type*) ;
 int FUNC_25 (struct type*) ;
 int FUNC_26 (struct type*) ;
 char* FUNC_27 (struct type*) ;
 struct type* FUNC_28 (struct type*) ;
 int FUNC_29 (struct type*,struct ui_file*,int,int) ;
 char* FUNC_30 (char*,int) ;
 int FUNC_31 (struct ui_file*,char*,...) ;
 int FUNC_32 (int,struct ui_file*,char*) ;
 int FUNC_33 (char*,struct ui_file*) ;
 char* FUNC_34 (struct type*,int,int) ;
 int FUNC_35 (char*) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (char*) ;
 char* FUNC_38 (char*) ;
 int FUNC_39 (int ,int *,struct ui_file*,int,int) ;
 int FUNC_40 (struct ui_file*,struct type*) ;
 int FUNC_41 (int,struct ui_file*) ;
 int FUNC_42 (char*,char*) ;
 int FUNC_43 (int *,char*,int) ;
 char* FUNC_44 (struct type*) ;
 int FUNC_45 (struct type*,char*,struct ui_file*,int) ;
 int FUNC_46 (char*) ;
 int FUNC_47 (char*) ;
 char* FUNC_48 (char*) ;

__attribute__((used)) static void
FUNC_49 (struct type *VAR_4, struct ui_file *VAR_5, int VAR_6,
        int VAR_7)
{
  int VAR_8;
  int VAR_9;
  char *VAR_10;
  char *VAR_11;
  VAR_3;

  FUNC_46 ("    ");

  if (VAR_4 == ((void*)0))
    {
      FUNC_33 ("<type unknown>", VAR_5);
      return;
    }




  if (VAR_6 <= 0
      && FUNC_22 (VAR_4) != ((void*)0))
    {
      FUNC_33 (FUNC_22 (VAR_4), VAR_5);
      return;
    }

  FUNC_0 (VAR_4);

  switch (FUNC_2 (VAR_4))
    {
    case 129:
      FUNC_49 (FUNC_28 (VAR_4), VAR_5, VAR_6, VAR_7);
      break;

    case 128:
      if (FUNC_27 (VAR_4) != ((void*)0) && FUNC_27 (VAR_4)[0] == '[')
 {
   char *VAR_12 = FUNC_38 (FUNC_27 (VAR_4));
   FUNC_33 (VAR_12, VAR_5);
   FUNC_47 (VAR_12);
   break;
 }

      if (VAR_6 >= 0)
 FUNC_31 (VAR_5, "class ");

      if (FUNC_27 (VAR_4) != ((void*)0))
 {
   FUNC_33 (FUNC_27 (VAR_4), VAR_5);
   if (VAR_6 > 0)
     FUNC_33 (" ", VAR_5);
 }

      FUNC_46 ("    ");

      if (VAR_6 < 0)
 {

   if (FUNC_27 (VAR_4) == ((void*)0))
     FUNC_31 (VAR_5, "{...}");
 }
      else if (VAR_6 > 0 || FUNC_27 (VAR_4) == ((void*)0))
 {
   FUNC_40 (VAR_5, VAR_4);

   FUNC_31 (VAR_5, "{\n");
   if ((FUNC_23 (VAR_4) == 0) && (FUNC_24 (VAR_4) == 0))
     {
       if (FUNC_26 (VAR_4))
  FUNC_32 (VAR_7 + 4, VAR_5, "<incomplete type>\n");
       else
  FUNC_32 (VAR_7 + 4, VAR_5, "<no data fields>\n");
     }




   VAR_9 = FUNC_23 (VAR_4);
   for (VAR_8 = FUNC_25 (VAR_4); VAR_8 < VAR_9; VAR_8++)
     {
       VAR_3;

       if (FUNC_43 (FUNC_3 (VAR_4, VAR_8), "_vptr", 5) == 0
    && FUNC_36 ((FUNC_3 (VAR_4, VAR_8))[5]))
  continue;


       if (FUNC_43 (FUNC_3 (VAR_4, VAR_8), "class", 5) == 0)
  continue;

       FUNC_41 (VAR_7 + 4, VAR_5);

       if (FUNC_1 (VAR_4))
  {
    if (FUNC_5 (VAR_4, VAR_8))
      FUNC_31 (VAR_5, "protected ");
    else if (FUNC_4 (VAR_4, VAR_8))
      FUNC_31 (VAR_5, "private ");
    else
      FUNC_31 (VAR_5, "public ");
  }

       if (FUNC_6 (VAR_4, VAR_8))
  FUNC_31 (VAR_5, "static ");

       FUNC_39 (FUNC_7 (VAR_4, VAR_8),
          FUNC_3 (VAR_4, VAR_8),
          VAR_5, VAR_6 - 1, VAR_7 + 4);

       FUNC_31 (VAR_5, ";\n");
     }


   VAR_9 = FUNC_24 (VAR_4);
   if (VAR_9)
     FUNC_31 (VAR_5, "\n");



   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
     {
       struct fn_field *VAR_13;
       int VAR_14;
       char *VAR_15;
       char *VAR_16;
       int VAR_17;
       int VAR_18;

       VAR_13 = FUNC_8 (VAR_4, VAR_8);
       VAR_18 = FUNC_9 (VAR_4, VAR_8);
       VAR_15 = FUNC_10 (VAR_4, VAR_8);
       VAR_16 = FUNC_44 (VAR_4);
       VAR_17 = VAR_16 && FUNC_42 (VAR_15, VAR_16) == 0;

       for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++)
  {
    char *VAR_19;
    int VAR_20;

    VAR_19 = FUNC_14 (VAR_13, VAR_14);

    VAR_20
                    = (FUNC_35 (VAR_19)
                       || FUNC_37 (VAR_19));

    VAR_3;

    FUNC_41 (VAR_7 + 4, VAR_5);

    if (FUNC_16 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "protected ");
    else if (FUNC_15 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "private ");
    else if (FUNC_17 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "public ");

    if (FUNC_11 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "abstract ");
    if (FUNC_18 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "static ");
    if (FUNC_12 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "final ");
    if (FUNC_20 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "synchronized ");
    if (FUNC_13 (VAR_13, VAR_14))
      FUNC_31 (VAR_5, "native ");

    if (FUNC_28 (FUNC_21 (VAR_13, VAR_14)) == 0)
      {

        FUNC_31 (VAR_5, "<undefined type> %s;\n",
     FUNC_14 (VAR_13, VAR_14));
        break;
      }
    else if (!VAR_17 && !VAR_20)
      {
        FUNC_45 (FUNC_28 (FUNC_21 (VAR_13, VAR_14)),
      "", VAR_5, -1);
        FUNC_33 (" ", VAR_5);
      }

    if (FUNC_19 (VAR_13, VAR_14))

      VAR_10 = FUNC_34 (VAR_4, VAR_8, VAR_14);
    else
      VAR_10 = FUNC_14 (VAR_13, VAR_14);

    VAR_11 =
      FUNC_30 (VAR_10,
        VAR_0 | VAR_2 | VAR_1);

    if (VAR_11 == ((void*)0))
      VAR_11 = FUNC_48 (VAR_10);

    {
      char *VAR_21;
      char *VAR_22;

      VAR_22 = VAR_21 = VAR_11;

      while (1)
        {
   char VAR_23;

   VAR_23 = *VAR_22++;

   if (VAR_23 == 0 || VAR_23 == '(')
     break;
   if (VAR_23 == '.')
     VAR_21 = VAR_22;
        }

      FUNC_33 (VAR_21, VAR_5);
      FUNC_47 (VAR_11);
    }

    if (FUNC_19 (VAR_13, VAR_14))
      FUNC_47 (VAR_10);

    FUNC_31 (VAR_5, ";\n");
  }
     }

   FUNC_32 (VAR_7, VAR_5, "}");
 }
      break;

    default:
      FUNC_29 (VAR_4, VAR_5, VAR_6, VAR_7);
    }
}
