
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {int dummy; } ;
typedef enum noside { ____Placeholder_noside } noside ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 char* FUNC_4 (struct type*,int) ;
 struct type* FUNC_5 (struct type*,int) ;
 int FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*) ;
 int FUNC_8 (struct value*) ;
 struct type* FUNC_9 (struct value*) ;
 struct type* FUNC_10 (struct type*) ;
 int FUNC_11 (char*,...) ;
 struct value* FUNC_12 (struct type*,struct expression*,int*,int) ;
 char* FUNC_13 (struct expression*,int*) ;
 int FUNC_14 (char*,int ,int ) ;
 int FUNC_15 (char*,int ,int,int) ;
 int FUNC_16 (struct value*) ;
 struct value* FUNC_17 (struct type*,struct value*) ;

__attribute__((used)) static struct value *
FUNC_18 (struct value *VAR_2,
         struct expression *VAR_3,
         int *VAR_4, enum noside VAR_5, int VAR_6)
{
  struct type *VAR_7 = FUNC_10 (FUNC_9 (VAR_2));
  struct type *VAR_8 = VAR_7;
  struct type *VAR_9;
  int VAR_10 = -1;
  int VAR_11 = -1;
  int VAR_12 = -1;
  while (--VAR_6 >= 0)
    {
      int VAR_13 = *VAR_4;
      struct value *VAR_14 = ((void*)0);
      int VAR_15 = 0;
      int VAR_16, VAR_17;
      char *VAR_18;


      while (FUNC_13 (VAR_3, VAR_4) != ((void*)0))
 VAR_15++;

      do
 {
   char *VAR_19 = FUNC_13 (VAR_3, &VAR_13);
   if (VAR_19)
     {
       for (VAR_10 = 0; VAR_10 < FUNC_7 (VAR_7);
     VAR_10++)
  {
    char *VAR_20 = FUNC_4 (VAR_7, VAR_10);
    if (VAR_20 != ((void*)0) && FUNC_0 (VAR_20, VAR_19))
      {
        VAR_11 = -1;
        VAR_12 = VAR_10;
        VAR_8 = VAR_7;
        goto found;
      }
  }
       for (VAR_10 = 0; VAR_10 < FUNC_7 (VAR_7);
     VAR_10++)
  {
    char *VAR_21 = FUNC_4 (VAR_7, VAR_10);
    VAR_9 = FUNC_5 (VAR_7, VAR_10);
    if ((VAR_21 == 0 || *VAR_21 == '\0')
        && FUNC_1 (VAR_9) == VAR_1)
      {
        VAR_11 = 0;
        for (; VAR_11 < FUNC_7 (VAR_9);
      VAR_11++)
   {
     VAR_8
       = FUNC_5 (VAR_9, VAR_11);
     if (FUNC_1 (VAR_8) == VAR_0)
       {
         for (VAR_12 = 0;
     VAR_12 < FUNC_7 (VAR_8);
       VAR_12++)
    {
      if (FUNC_0 (FUNC_4 (VAR_8,
             VAR_12),
          VAR_19))
        {
          goto found;
        }
    }
       }
   }
      }
  }
       FUNC_11 ("there is no field named %s", VAR_19);
     found:
       ;
     }
   else
     {

       if (VAR_11 >= 0)
  {
    VAR_12++;
    if (VAR_12 >= FUNC_7 (VAR_8))
      {
        VAR_11 = -1;
        VAR_8 = VAR_7;
      }
  }
       if (VAR_11 < 0)
  {
    VAR_10++;
    VAR_12 = VAR_10;
    if (VAR_10 >= FUNC_7 (VAR_7))
      FUNC_11 ("too many initializers");
    VAR_9 = FUNC_5 (VAR_7, VAR_10);
    if (FUNC_1 (VAR_9) == VAR_1
        && FUNC_4 (VAR_7, VAR_10)[0] == '0')
      FUNC_11 ("don't know which variant you want to set");
  }
     }
   VAR_9 = FUNC_5 (VAR_8, VAR_12);
   if (VAR_14 == 0)
     VAR_14 = FUNC_12 (VAR_9, VAR_3, VAR_4, VAR_5);




   if (FUNC_9 (VAR_14) != VAR_9)
     VAR_14 = FUNC_17 (VAR_9, VAR_14);

   VAR_17 = FUNC_3 (VAR_8, VAR_12);
   VAR_16 = FUNC_2 (VAR_7, VAR_10);
   if (VAR_11 >= 0)
     VAR_16 += FUNC_2 (VAR_8, VAR_12);
   VAR_18 = FUNC_8 (VAR_2) + VAR_16 / 8;
   if (VAR_17)
     FUNC_15 (VAR_18, FUNC_16 (VAR_14),
     VAR_16 % 8, VAR_17);
   else
     FUNC_14 (VAR_18, FUNC_8 (VAR_14),
      FUNC_6 (FUNC_9 (VAR_14)));
 }
      while (--VAR_15 > 0);
    }
  return VAR_2;
}
