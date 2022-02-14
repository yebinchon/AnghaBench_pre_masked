
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct objfile {int dummy; } ;


 struct objfile* FUNC_0 (struct type*) ;
 struct type* FUNC_1 (int ) ;
 struct type* FUNC_2 (struct value*) ;
 int FUNC_3 (struct type*) ;
 struct type* FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;
 struct type* FUNC_7 (struct objfile*) ;
 struct type* FUNC_8 (struct type*) ;
 struct type* FUNC_9 (struct type*,struct type*,struct type*) ;
 int FUNC_10 (struct type*,struct type*,int,int) ;
 struct type* FUNC_11 (struct type*) ;
 struct value* FUNC_12 (struct value*) ;
 int FUNC_13 (struct type*) ;
 struct value* FUNC_14 (struct value*,int,int) ;
 struct type* FUNC_15 (struct type*) ;
 scalar_t__ FUNC_16 (struct value*) ;

struct type *
FUNC_17 (struct value *VAR_0, int VAR_1)
{
  if (FUNC_6 (FUNC_2 (VAR_0)))
    return FUNC_11 (FUNC_2 (VAR_0));

  if (!FUNC_5 (FUNC_2 (VAR_0)))
    return FUNC_2 (VAR_0);

  if (!VAR_1)
    return
      FUNC_8 (FUNC_1 (FUNC_13 (FUNC_2 (VAR_0))));
  else
    {
      struct type *VAR_2;
      int VAR_3;
      struct value *VAR_4;
      struct objfile *VAR_5 = FUNC_0 (FUNC_2 (VAR_0));

      VAR_2 = FUNC_4 (FUNC_2 (VAR_0), -1);
      VAR_3 = FUNC_3 (FUNC_2 (VAR_0));

      if (VAR_2 == ((void*)0) || VAR_3 == 0)
 return FUNC_8 (FUNC_2 (VAR_0));

      VAR_4 = FUNC_12 (VAR_0);
      if (FUNC_16 (VAR_4) == 0)
 return ((void*)0);
      while (VAR_3 > 0)
 {
   struct type *VAR_6 = FUNC_7 (VAR_5);
   struct type *VAR_7 = FUNC_7 (VAR_5);
   struct value *VAR_8 = FUNC_14 (VAR_4, VAR_3, 0);
   struct value *VAR_9 = FUNC_14 (VAR_4, VAR_3, 1);
   VAR_3 -= 1;

   FUNC_10 (VAR_6, FUNC_2 (VAR_8),
        (int) FUNC_16 (VAR_8),
        (int) FUNC_16 (VAR_9));
   VAR_2 = FUNC_9 (VAR_7, VAR_2, VAR_6);
 }

      return FUNC_15 (VAR_2);
    }
}
