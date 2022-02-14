
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
 int FUNC_2 (struct type*) ;
 char* FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct type*,int,char*,scalar_t__) ;
 struct type* FUNC_7 (int ) ;
 struct obstack VAR_0 ;
 int FUNC_8 (struct ui_file*,char*) ;
 int FUNC_9 (char*,struct ui_file*) ;
 scalar_t__ FUNC_10 (struct obstack*) ;
 int FUNC_11 (struct obstack*) ;
 int FUNC_12 (struct obstack*,struct type**) ;
 scalar_t__ FUNC_13 (struct obstack*) ;
 int FUNC_14 (struct obstack*,struct type*) ;
 int FUNC_15 (struct type*,char*,scalar_t__,struct ui_file*,int,int,int,struct type**,int ) ;
 int FUNC_16 (int,struct ui_file*) ;
 scalar_t__ FUNC_17 (scalar_t__,char*,int) ;

void
FUNC_18 (struct type *VAR_1, char *VAR_2, CORE_ADDR VAR_3,
      struct ui_file *VAR_4, int VAR_5, int VAR_6,
      enum val_prettyprint VAR_7,
      struct type **VAR_8)
{
  struct obstack VAR_9;
  struct type **VAR_10
  = (struct type **) FUNC_13 (&VAR_0);
  int VAR_11, VAR_12 = FUNC_4 (VAR_1);

  if (VAR_8 == 0)
    {



      VAR_9 = VAR_0;

      FUNC_11 (&VAR_0);
    }

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
    {
      int VAR_13;
      struct type *VAR_14 = FUNC_7 (FUNC_1 (VAR_1, VAR_11));
      char *VAR_15 = FUNC_3 (VAR_14);
      char *VAR_16;

      if (FUNC_0 (VAR_1, VAR_11))
 {
   struct type **VAR_17
   = (struct type **) FUNC_10 (&VAR_0);

   int VAR_18 = (struct type **) FUNC_13 (&VAR_0)
   - VAR_17;

   while (--VAR_18 >= 0)
     if (VAR_14 == VAR_17[VAR_18])
       goto flush_it;

   FUNC_14 (&VAR_0, VAR_14);
 }

      VAR_13 = FUNC_6 (VAR_1, VAR_11, VAR_2, VAR_3);

      if (VAR_7)
 {
   FUNC_8 (VAR_4, "\n");
   FUNC_16 (2 * VAR_6, VAR_4);
 }
      FUNC_9 ("<", VAR_4);



      FUNC_9 (VAR_15 ? VAR_15 : "", VAR_4);
      FUNC_9 ("> = ", VAR_4);





      if (VAR_13 != -1 && (VAR_13 < 0 || VAR_13 >= FUNC_2 (VAR_1)))
 {

   VAR_16 = (char *) FUNC_5 (FUNC_2 (VAR_14));
   if (FUNC_17 (VAR_3 + VAR_13, VAR_16,
      FUNC_2 (VAR_14)) != 0)
     VAR_13 = -1;
 }
      else
 VAR_16 = VAR_2 + VAR_13;

      if (VAR_13 == -1)
 FUNC_8 (VAR_4, "<invalid address>");
      else
 FUNC_15 (VAR_14, VAR_16, VAR_3 + VAR_13,
       VAR_4, VAR_5, VAR_6, VAR_7,
       (struct type **) FUNC_10 (&VAR_0),
       0);
      FUNC_9 (", ", VAR_4);

    flush_it:
      ;
    }

  if (VAR_8 == 0)
    {


      FUNC_12 (&VAR_0, VAR_10);


      VAR_0 = VAR_9;
    }
}
