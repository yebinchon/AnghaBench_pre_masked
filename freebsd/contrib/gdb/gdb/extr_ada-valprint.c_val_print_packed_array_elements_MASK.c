
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef int LONGEST ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct type*,int ) ;
 int FUNC_1 (struct type*,int ) ;
 unsigned int FUNC_2 (int ) ;
 struct type* FUNC_3 (struct type*) ;
 int FUNC_4 (struct value*) ;
 struct value* FUNC_5 (int *,char*,unsigned int,unsigned int,unsigned long,struct type*) ;
 int FUNC_6 (unsigned int,struct type*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct type*) ;
 int FUNC_12 (struct ui_file*,char*,...) ;
 scalar_t__ FUNC_13 (int ,int*,int*) ;
 scalar_t__ FUNC_14 (int ,int ,unsigned int) ;
 int FUNC_15 (int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_16 (int,struct ui_file*) ;
 unsigned int VAR_3 ;
 int FUNC_17 (struct type*,int ,int ,int ,struct ui_file*,int,int ,int,int) ;
 int FUNC_18 (struct value*) ;
 struct value* FUNC_19 () ;
 int FUNC_20 (int ) ;

__attribute__((used)) static void
FUNC_21 (struct type *VAR_4, char *VAR_5,
     int VAR_6, struct ui_file *VAR_7,
     int VAR_8, int VAR_9,
     enum val_prettyprint VAR_10)
{
  unsigned int VAR_11;
  unsigned int VAR_12 = 0;
  unsigned VAR_13;
  struct type *VAR_14;
  unsigned VAR_15;


  unsigned int VAR_16;

  unsigned int VAR_17;
  unsigned long VAR_18 = FUNC_0 (VAR_4, 0);
  struct value *VAR_19 = FUNC_19 ();

  VAR_14 = FUNC_3 (VAR_4);
  VAR_15 = FUNC_2 (FUNC_11 (VAR_14));

  {
    LONGEST VAR_20, VAR_21;
    if (FUNC_13 (FUNC_1 (VAR_4, 0), &VAR_20, &VAR_21) < 0)
      VAR_13 = 1;
    else
      VAR_13 = VAR_21 - VAR_20 + 1;
  }

  VAR_11 = 0;
  FUNC_6 (VAR_11, VAR_14);

  while (VAR_11 < VAR_13 && VAR_12 < VAR_2)
    {
      struct value *VAR_22, *VAR_23;
      int VAR_24;

      if (VAR_11 != 0)
 {
   if (VAR_1)
     {
       FUNC_12 (VAR_7, ",\n");
       FUNC_16 (2 + 2 * VAR_9, VAR_7);
     }
   else
     {
       FUNC_12 (VAR_7, ", ");
     }
 }
      FUNC_20 (FUNC_15 (2 + 2 * VAR_9));

      VAR_24 = VAR_11;
      VAR_22 = FUNC_5 (((void*)0), VAR_5,
        (VAR_24 * VAR_18) / VAR_0,
        (VAR_24 * VAR_18) % VAR_0,
        VAR_18, VAR_14);
      while (1)
 {
   VAR_11 += 1;
   if (VAR_11 >= VAR_13)
     break;
   VAR_23 = FUNC_5 (((void*)0), VAR_5,
            (VAR_11 * VAR_18) / VAR_0,
            (VAR_11 * VAR_18) % VAR_0,
            VAR_18, VAR_14);
   if (FUNC_14 (FUNC_4 (VAR_22), FUNC_4 (VAR_23), VAR_15) != 0)
     break;
 }

      if (VAR_11 - VAR_24 > VAR_3)
 {
   FUNC_17 (VAR_14, FUNC_4 (VAR_22), 0, 0, VAR_7, VAR_8,
       0, VAR_9 + 1, VAR_10);
   FUNC_9 (VAR_11 - VAR_24);
   FUNC_12 (VAR_7, " <repeats %u times>", VAR_11 - VAR_24);
   FUNC_10 ();

 }
      else
 {
   int VAR_25;
   for (VAR_25 = VAR_24; VAR_25 < VAR_11; VAR_25 += 1)
     {
       if (VAR_25 > VAR_24)
  {
    if (VAR_1)
      {
        FUNC_12 (VAR_7, ",\n");
        FUNC_16 (2 + 2 * VAR_9, VAR_7);
      }
    else
      {
        FUNC_12 (VAR_7, ", ");
      }
    FUNC_20 (FUNC_15 (2 + 2 * VAR_9));
  }
       FUNC_17 (VAR_14, FUNC_4 (VAR_22), 0, 0, VAR_7, VAR_8,
    0, VAR_9 + 1, VAR_10);
       FUNC_8 ();
     }
 }
      VAR_12 += VAR_11 - VAR_24;
    }
  FUNC_7 ();
  if (VAR_11 < VAR_13)
    {
      FUNC_12 (VAR_7, "...");
    }

  FUNC_18 (VAR_19);
}
