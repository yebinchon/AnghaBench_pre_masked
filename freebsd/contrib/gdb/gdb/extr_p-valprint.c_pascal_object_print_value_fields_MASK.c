
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct obstack {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*,int) ;
 scalar_t__ FUNC_5 (struct type*,int) ;
 scalar_t__ FUNC_6 (struct type*,int) ;
 int FUNC_7 (struct type*,int) ;
 int FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct value*,struct ui_file*,int,int ,int,int) ;
 struct obstack VAR_3 ;
 int FUNC_15 (struct ui_file*,char*) ;
 int FUNC_16 (struct ui_file*,int ,int ,int) ;
 int FUNC_17 (char*,struct ui_file*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct obstack*) ;
 int FUNC_20 (struct obstack*,char*) ;
 char* FUNC_21 (struct obstack*) ;
 int FUNC_22 (struct value*,struct ui_file*,int,int,int) ;
 int FUNC_23 (struct type*,char*,scalar_t__,struct ui_file*,int,int,int,struct type**) ;
 int VAR_6 ;
 int FUNC_24 (int,struct ui_file*) ;
 char* FUNC_25 (struct type*) ;
 int FUNC_26 (struct type*,char*,int) ;
 int FUNC_27 (int ,char*,int,scalar_t__,struct ui_file*,int,int ,int,int) ;
 struct value* FUNC_28 (int ,int ) ;
 int FUNC_29 (int ) ;

void
FUNC_30 (struct type *VAR_7, char *VAR_8,
      CORE_ADDR VAR_9, struct ui_file *VAR_10,
      int VAR_11, int VAR_12,
      enum val_prettyprint VAR_13,
      struct type **VAR_14,
      int VAR_15)
{
  int VAR_16, VAR_17, VAR_18;
  struct obstack VAR_19;
  char *VAR_20 = FUNC_21 (&VAR_3);

  FUNC_0 (VAR_7);

  FUNC_15 (VAR_10, "{");
  VAR_17 = FUNC_8 (VAR_7);
  VAR_18 = FUNC_9 (VAR_7);



  if (VAR_18 > 0)
    FUNC_23 (VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_11, VAR_12 + 1, VAR_13, VAR_14);

  if (!VAR_17 && VAR_18 == 1)
    FUNC_15 (VAR_10, "<No data fields>");
  else
    {
      int VAR_21 = 0;

      if (VAR_15 == 0)
 {



   VAR_19 = VAR_3;
   FUNC_19 (&VAR_3);
 }

      for (VAR_16 = VAR_18; VAR_16 < VAR_17; VAR_16++)
 {

   if (!VAR_6 && FUNC_6 (VAR_7, VAR_16))
     continue;
   if (VAR_21)
     FUNC_15 (VAR_10, ", ");
   else if (VAR_18 > 0)
     {
       if (VAR_13)
  {
    FUNC_15 (VAR_10, "\n");
    FUNC_24 (2 + 2 * VAR_12, VAR_10);
    FUNC_17 ("members of ", VAR_10);
    FUNC_17 (FUNC_25 (VAR_7), VAR_10);
    FUNC_17 (": ", VAR_10);
  }
     }
   VAR_21 = 1;

   if (VAR_13)
     {
       FUNC_15 (VAR_10, "\n");
       FUNC_24 (2 + 2 * VAR_12, VAR_10);
     }
   else
     {
       FUNC_29 (FUNC_18 (2 + 2 * VAR_12));
     }
   if (VAR_4)
     {
       if (FUNC_1 (FUNC_7 (VAR_7, VAR_16)) == VAR_2)
  FUNC_17 ("\"( ptr \"", VAR_10);
       else
  FUNC_17 ("\"( nodef \"", VAR_10);
       if (FUNC_6 (VAR_7, VAR_16))
  FUNC_17 ("static ", VAR_10);
       FUNC_16 (VAR_10, FUNC_4 (VAR_7, VAR_16),
           VAR_5,
           VAR_1 | VAR_0);
       FUNC_17 ("\" \"", VAR_10);
       FUNC_16 (VAR_10, FUNC_4 (VAR_7, VAR_16),
           VAR_5,
           VAR_1 | VAR_0);
       FUNC_17 ("\") \"", VAR_10);
     }
   else
     {
       FUNC_10 (FUNC_7 (VAR_7, VAR_16));

       if (FUNC_6 (VAR_7, VAR_16))
  FUNC_17 ("static ", VAR_10);
       FUNC_16 (VAR_10, FUNC_4 (VAR_7, VAR_16),
           VAR_5,
           VAR_1 | VAR_0);
       FUNC_12 ();
       FUNC_17 (" = ", VAR_10);
       FUNC_13 ();
     }

   if (!FUNC_6 (VAR_7, VAR_16) && FUNC_5 (VAR_7, VAR_16))
     {
       struct value *VAR_22;



       if (FUNC_3 (VAR_7, VAR_16))
  {
    FUNC_17 ("<optimized out or zero length>", VAR_10);
  }
       else
  {
    VAR_22 = FUNC_28 (FUNC_7 (VAR_7, VAR_16),
       FUNC_26 (VAR_7, VAR_8, VAR_16));

    FUNC_14 (VAR_22, VAR_10, VAR_11, 0, VAR_12 + 1, VAR_13);
  }
     }
   else
     {
       if (FUNC_3 (VAR_7, VAR_16))
  {
    FUNC_17 ("<optimized out or zero length>", VAR_10);
  }
       else if (FUNC_6 (VAR_7, VAR_16))
  {

    struct value *VAR_23;
    VAR_23 = FUNC_28 (FUNC_7 (VAR_7, VAR_16),
       FUNC_26 (VAR_7, VAR_8, VAR_16));

    if (VAR_23 == ((void*)0))
      FUNC_17 ("<optimized out>", VAR_10);
    else
      FUNC_22 (VAR_23, VAR_10, VAR_11,
            VAR_12 + 1, VAR_13);
  }
       else
  {




    FUNC_27 (FUNC_7 (VAR_7, VAR_16),
        VAR_8, FUNC_2 (VAR_7, VAR_16) / 8,
        VAR_9 + FUNC_2 (VAR_7, VAR_16) / 8,
        VAR_10, VAR_11, 0, VAR_12 + 1, VAR_13);
  }
     }
   FUNC_11 ();
 }

      if (VAR_15 == 0)
 {


   FUNC_20 (&VAR_3, VAR_20);
   VAR_3 = VAR_19;
 }

      if (VAR_13)
 {
   FUNC_15 (VAR_10, "\n");
   FUNC_24 (2 * VAR_12, VAR_10);
 }
    }
  FUNC_15 (VAR_10, "}");
}
