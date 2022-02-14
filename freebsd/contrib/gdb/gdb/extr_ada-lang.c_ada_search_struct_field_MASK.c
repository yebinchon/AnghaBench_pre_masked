
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*,int) ;
 char* FUNC_2 (struct type*,int) ;
 struct type* FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (struct type*,int) ;
 scalar_t__ FUNC_6 (struct type*,int) ;
 struct value* FUNC_7 (struct value*,int,int,struct type*) ;
 struct type* FUNC_8 (struct type*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

struct value *
FUNC_10 (char *VAR_0, struct value *VAR_1, int VAR_2,
    struct type *VAR_3)
{
  int VAR_4;
  FUNC_0 (VAR_3);

  for (VAR_4 = FUNC_4 (VAR_3) - 1; VAR_4 >= 0; VAR_4 -= 1)
    {
      char *VAR_5 = FUNC_2 (VAR_3, VAR_4);

      if (VAR_5 == ((void*)0))
 continue;

      else if (FUNC_9 (VAR_5, VAR_0))
 return FUNC_7 (VAR_1, VAR_2, VAR_4, VAR_3);

      else if (FUNC_6 (VAR_3, VAR_4))
 {
   struct value *VAR_6 = FUNC_10 (VAR_0, VAR_1,
           VAR_2 +
           FUNC_1 (VAR_3,
         VAR_4) /
           8,
           FUNC_3 (VAR_3,
              VAR_4));
   if (VAR_6 != ((void*)0))
     return VAR_6;
 }

      else if (FUNC_5 (VAR_3, VAR_4))
 {
   int VAR_7;
   struct type *VAR_8 = FUNC_8 (FUNC_3 (VAR_3, VAR_4));
   int VAR_9 = VAR_2 + FUNC_1 (VAR_3, VAR_4) / 8;

   for (VAR_7 = FUNC_4 (VAR_8) - 1; VAR_7 >= 0; VAR_7 -= 1)
     {
       struct value *VAR_10 = FUNC_10 (VAR_0, VAR_1,
        VAR_9
        +
        FUNC_1
        (VAR_8, VAR_7) / 8,
        FUNC_3
        (VAR_8, VAR_7));
       if (VAR_10 != ((void*)0))
  return VAR_10;
     }
 }
    }
  return ((void*)0);
}
