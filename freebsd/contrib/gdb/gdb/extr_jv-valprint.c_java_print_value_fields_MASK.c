
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct type*,int) ;
 scalar_t__ FUNC_5 (struct type*,int) ;
 char* FUNC_6 (struct type*,int) ;
 scalar_t__ FUNC_7 (struct type*,int) ;
 scalar_t__ FUNC_8 (struct type*,int) ;
 struct type* FUNC_9 (struct type*,int) ;
 char* FUNC_10 (struct type*) ;
 int FUNC_11 (struct type*) ;
 int FUNC_12 (struct type*) ;
 int FUNC_13 (struct value*) ;
 int FUNC_14 (struct type*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 struct type* FUNC_18 (int ) ;
 int FUNC_19 (struct value*,struct ui_file*,int,int ,int,int) ;
 int FUNC_20 (struct ui_file*,char*) ;
 int FUNC_21 (struct ui_file*,char*,int ,int) ;
 int FUNC_22 (char*,struct ui_file*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_23 (int) ;
 int FUNC_24 (int,struct ui_file*) ;
 int VAR_6 ;
 scalar_t__ FUNC_25 (char*,char*) ;
 char* FUNC_26 (struct type*) ;
 int FUNC_27 (struct type*,char*,int) ;
 int FUNC_28 (struct type*,char*,int ,scalar_t__,struct ui_file*,int,int ,int,int) ;
 struct value* FUNC_29 (struct value*) ;
 struct value* FUNC_30 (struct type*,int ) ;
 struct value* FUNC_31 (struct type*,int) ;
 int FUNC_32 (int ) ;

__attribute__((used)) static void
FUNC_33 (struct type *VAR_7, char *VAR_8, CORE_ADDR VAR_9,
    struct ui_file *VAR_10, int VAR_11, int VAR_12,
    enum val_prettyprint VAR_13)
{
  int VAR_14, VAR_15, VAR_16;

  FUNC_1 (VAR_7);

  FUNC_20 (VAR_10, "{");
  VAR_15 = FUNC_11 (VAR_7);
  VAR_16 = FUNC_12 (VAR_7);

  if (VAR_16 > 0)
    {
      int VAR_17, VAR_18 = FUNC_12 (VAR_7);

      for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
 {
   int VAR_19;
   struct type *VAR_20 = FUNC_18 (FUNC_2 (VAR_7, VAR_17));
   char *VAR_21 = FUNC_10 (VAR_20);
   char *VAR_22;

   if (FUNC_0 (VAR_7, VAR_17))
     continue;

   if (VAR_21 != ((void*)0) && FUNC_25 (VAR_21, "java.lang.Object") == 0)
     continue;

   VAR_19 = 0;

   if (VAR_13)
     {
       FUNC_20 (VAR_10, "\n");
       FUNC_24 (2 * (VAR_12 + 1), VAR_10);
     }
   FUNC_22 ("<", VAR_10);


   FUNC_22 (VAR_21 ? VAR_21 : "", VAR_10);
   FUNC_22 ("> = ", VAR_10);

   VAR_22 = VAR_8;

   FUNC_33 (VAR_20, VAR_22, VAR_9 + VAR_19,
       VAR_10, VAR_11, VAR_12 + 1, VAR_13);
   FUNC_22 (", ", VAR_10);
 }

    }

  if (!VAR_15 && VAR_16 == 1)
    FUNC_20 (VAR_10, "<No data fields>");
  else
    {
      int VAR_23 = 0;

      for (VAR_14 = VAR_16; VAR_14 < VAR_15; VAR_14++)
 {

   if (FUNC_8 (VAR_7, VAR_14))
     {
       char *VAR_24 = FUNC_6 (VAR_7, VAR_14);
       if (!VAR_6)
  continue;
       if (VAR_24 != ((void*)0) && FUNC_25 (VAR_24, "class") == 0)
  continue;
     }
   if (VAR_23)
     FUNC_20 (VAR_10, ", ");
   else if (VAR_16 > 0)
     {
       if (VAR_13)
  {
    FUNC_20 (VAR_10, "\n");
    FUNC_24 (2 + 2 * VAR_12, VAR_10);
    FUNC_22 ("members of ", VAR_10);
    FUNC_22 (FUNC_26 (VAR_7), VAR_10);
    FUNC_22 (": ", VAR_10);
  }
     }
   VAR_23 = 1;

   if (VAR_13)
     {
       FUNC_20 (VAR_10, "\n");
       FUNC_24 (2 + 2 * VAR_12, VAR_10);
     }
   else
     {
       FUNC_32 (FUNC_23 (2 + 2 * VAR_12));
     }
   if (VAR_4)
     {
       if (FUNC_3 (FUNC_9 (VAR_7, VAR_14)) == VAR_2)
  FUNC_22 ("\"( ptr \"", VAR_10);
       else
  FUNC_22 ("\"( nodef \"", VAR_10);
       if (FUNC_8 (VAR_7, VAR_14))
  FUNC_22 ("static ", VAR_10);
       FUNC_21 (VAR_10, FUNC_6 (VAR_7, VAR_14),
           VAR_5,
           VAR_1 | VAR_0);
       FUNC_22 ("\" \"", VAR_10);
       FUNC_21 (VAR_10, FUNC_6 (VAR_7, VAR_14),
           VAR_5,
           VAR_1 | VAR_0);
       FUNC_22 ("\") \"", VAR_10);
     }
   else
     {
       FUNC_14 (FUNC_9 (VAR_7, VAR_14));

       if (FUNC_8 (VAR_7, VAR_14))
  FUNC_22 ("static ", VAR_10);
       FUNC_21 (VAR_10, FUNC_6 (VAR_7, VAR_14),
           VAR_5,
           VAR_1 | VAR_0);
       FUNC_16 ();
       FUNC_22 (": ", VAR_10);
       FUNC_17 ();
     }

   if (!FUNC_8 (VAR_7, VAR_14) && FUNC_7 (VAR_7, VAR_14))
     {
       struct value *VAR_25;



       if (FUNC_5 (VAR_7, VAR_14))
  {
    FUNC_22 ("<optimized out or zero length>", VAR_10);
  }
       else
  {
    VAR_25 = FUNC_30 (FUNC_9 (VAR_7, VAR_14),
       FUNC_27 (VAR_7, VAR_8, VAR_14));

    FUNC_19 (VAR_25, VAR_10, VAR_11, 0, VAR_12 + 1, VAR_13);
  }
     }
   else
     {
       if (FUNC_5 (VAR_7, VAR_14))
  {
    FUNC_22 ("<optimized out or zero length>", VAR_10);
  }
       else if (FUNC_8 (VAR_7, VAR_14))
  {
    struct value *VAR_26 = FUNC_31 (VAR_7, VAR_14);
    if (VAR_26 == ((void*)0))
      FUNC_22 ("<optimized out>", VAR_10);
    else
      {
        struct type *VAR_27 = FUNC_18 (FUNC_13 (VAR_26));
        if (FUNC_3 (VAR_27) == VAR_3)
   VAR_26 = FUNC_29 (VAR_26);
        FUNC_19 (VAR_26, VAR_10, VAR_11, 0, VAR_12 + 1,
     VAR_13);
      }
  }
       else if (FUNC_9 (VAR_7, VAR_14) == ((void*)0))
  FUNC_22 ("<unknown type>", VAR_10);
       else
  {
    FUNC_28 (FUNC_9 (VAR_7, VAR_14),
        VAR_8 + FUNC_4 (VAR_7, VAR_14) / 8, 0,
        VAR_9 + FUNC_4 (VAR_7, VAR_14) / 8,
        VAR_10, VAR_11, 0, VAR_12 + 1, VAR_13);
  }
     }
   FUNC_15 ();
 }

      if (VAR_13)
 {
   FUNC_20 (VAR_10, "\n");
   FUNC_24 (2 * VAR_12, VAR_10);
 }
    }
  FUNC_20 (VAR_10, "}");
}
