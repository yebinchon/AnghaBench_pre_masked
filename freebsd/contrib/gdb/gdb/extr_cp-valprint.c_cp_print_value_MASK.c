
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct obstack {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 char* FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct type*,int,char*,scalar_t__) ;
 struct type* FUNC_8 (int ) ;
 int FUNC_9 (struct type*,struct type*,char*,int,scalar_t__,struct ui_file*,int,int,int,struct type**,int ) ;
 struct obstack VAR_0 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct type*,int ,char*,int,int*,int*) ;
 int FUNC_12 (struct ui_file*,char*) ;
 int FUNC_13 (char*,struct ui_file*) ;
 scalar_t__ FUNC_14 (struct obstack*) ;
 int FUNC_15 (struct obstack*) ;
 int FUNC_16 (struct obstack*,struct type**) ;
 scalar_t__ FUNC_17 (struct obstack*) ;
 int FUNC_18 (struct obstack*,struct type*) ;
 int FUNC_19 (int,struct ui_file*) ;
 scalar_t__ FUNC_20 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_21 (struct type *VAR_1, struct type *VAR_2, char *VAR_3,
  int VAR_4, CORE_ADDR VAR_5, struct ui_file *VAR_6,
  int VAR_7, int VAR_8, enum val_prettyprint VAR_9,
  struct type **VAR_10)
{
  struct obstack VAR_11;
  struct type **VAR_12
    = (struct type **) FUNC_17 (&VAR_0);
  int VAR_13, VAR_14 = FUNC_5 (VAR_1);
  int VAR_15;
  struct type *VAR_16;

  if (VAR_10 == 0)
    {



      VAR_11 = VAR_0;

      FUNC_15 (&VAR_0);
    }

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
    {
      int VAR_17;
      int VAR_18;
      struct type *VAR_19 = FUNC_8 (FUNC_1 (VAR_1, VAR_13));
      char *VAR_20 = FUNC_4 (VAR_19);
      char *VAR_21;

      if (FUNC_0 (VAR_1, VAR_13))
 {
   struct type **VAR_22
     = (struct type **) FUNC_14 (&VAR_0);

   int VAR_23 = (struct type **) FUNC_17 (&VAR_0)
     - VAR_22;

   while (--VAR_23 >= 0)
     if (VAR_19 == VAR_22[VAR_23])
       goto flush_it;

   FUNC_18 (&VAR_0, VAR_19);
 }

      VAR_15 = VAR_4;
      VAR_16 = VAR_2;
      if (FUNC_2 (VAR_1) && FUNC_0 (VAR_1, VAR_13))
 {

   FUNC_11 (VAR_1, FUNC_1 (VAR_1, VAR_13),
    VAR_3, VAR_4, &VAR_17, &VAR_18);
   if (VAR_18 >= 0)
     FUNC_10 ("Virtual base class offset not found from vtable while"
     " printing");
   VAR_21 = VAR_3;
 }
      else
 {
   VAR_17 = FUNC_7 (VAR_1, VAR_13,
          VAR_3 + VAR_4,
          VAR_5);
   VAR_18 = ((VAR_17 == -1) || (VAR_17 + VAR_4) < 0) ? 1 : -1;

   if (FUNC_0 (VAR_1, VAR_13))
     {




       if (VAR_17 != -1
    && ((VAR_17 + VAR_4) < 0
        || (VAR_17 + VAR_4) >= FUNC_3 (VAR_1)))
  {

    VAR_21 = (char *) FUNC_6 (FUNC_3 (VAR_19));
    if (FUNC_20 (VAR_5 + VAR_17, VAR_21,
       FUNC_3 (VAR_19)) != 0)
      VAR_18 = 1;
    VAR_5 = VAR_5 + VAR_17;
    VAR_15 = 0;
    VAR_17 = 0;
    VAR_16 = VAR_19;
  }
       else
  VAR_21 = VAR_3;
     }
   else
     VAR_21 = VAR_3;
 }


      if (VAR_9)
 {
   FUNC_12 (VAR_6, "\n");
   FUNC_19 (2 * VAR_8, VAR_6);
 }
      FUNC_13 ("<", VAR_6);


      FUNC_13 (VAR_20 ? VAR_20 : "", VAR_6);
      FUNC_13 ("> = ", VAR_6);


      if (VAR_18 >= 1)
 FUNC_12 (VAR_6, "<invalid address>");
      else
 FUNC_9 (VAR_19, VAR_16, VAR_21,
          VAR_15 + VAR_17, VAR_5 + VAR_17,
          VAR_6, VAR_7,
          VAR_8, VAR_9,
          ((struct type **)
    FUNC_14 (&VAR_0)),
          0);
      FUNC_13 (", ", VAR_6);

    flush_it:
      ;
    }

  if (VAR_10 == 0)
    {


      FUNC_16 (&VAR_0, VAR_12);


      VAR_0 = VAR_11;
    }
}
