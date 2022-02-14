
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct type*,int) ;
 char* FUNC_3 (struct type*,int) ;
 struct type* FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*) ;
 struct type* FUNC_6 (struct type*) ;
 scalar_t__ FUNC_7 (struct type*,int) ;
 scalar_t__ FUNC_8 (struct type*,int) ;
 struct type* FUNC_9 (struct type*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 () ;
 struct type* FUNC_15 (struct type*) ;
 int FUNC_16 (struct type*,char*,int ,int) ;

struct type *
FUNC_17 (struct type *VAR_6, char *VAR_7, int VAR_8,
       int *VAR_9)
{
  int VAR_10;

  if (VAR_7 == ((void*)0))
    goto BadName;

  while (1)
    {
      FUNC_0 (VAR_6);
      if (FUNC_1 (VAR_6) != VAR_0
   && FUNC_1 (VAR_6) != VAR_1)
 break;
      VAR_6 = FUNC_6 (VAR_6);
    }

  if (FUNC_1 (VAR_6) != VAR_2 &&
      FUNC_1 (VAR_6) != VAR_3)
    {
      FUNC_14 ();
      FUNC_13 (VAR_5);
      FUNC_12 (VAR_4, "Type ");
      FUNC_16 (VAR_6, "", VAR_4, -1);
      FUNC_10 (" is not a structure or union type");
    }

  VAR_6 = FUNC_15 (VAR_6);

  for (VAR_10 = 0; VAR_10 < FUNC_5 (VAR_6); VAR_10 += 1)
    {
      char *VAR_11 = FUNC_3 (VAR_6, VAR_10);
      struct type *VAR_12;
      int VAR_13;

      if (VAR_11 == ((void*)0))
 continue;

      else if (FUNC_11 (VAR_11, VAR_7))
 {
   if (VAR_9 != ((void*)0))
     *VAR_9 += FUNC_2 (VAR_6, VAR_10) / 8;
   return FUNC_9 (FUNC_4 (VAR_6, VAR_10));
 }

      else if (FUNC_8 (VAR_6, VAR_10))
 {
   VAR_13 = 0;
   VAR_12 = FUNC_17 (FUNC_4 (VAR_6, VAR_10), VAR_7,
       1, &VAR_13);
   if (VAR_12 != ((void*)0))
     {
       if (VAR_9 != ((void*)0))
  *VAR_9 += VAR_13 + FUNC_2 (VAR_6, VAR_10) / 8;
       return VAR_12;
     }
 }

      else if (FUNC_7 (VAR_6, VAR_10))
 {
   int VAR_14;
   struct type *VAR_15 = FUNC_9 (FUNC_4 (VAR_6, VAR_10));

   for (VAR_14 = FUNC_5 (VAR_15) - 1; VAR_14 >= 0; VAR_14 -= 1)
     {
       VAR_13 = 0;
       VAR_12 = FUNC_17 (FUNC_4 (VAR_15, VAR_14),
           VAR_7, 1, &VAR_13);
       if (VAR_12 != ((void*)0))
  {
    if (VAR_9 != ((void*)0))
      *VAR_9 += VAR_13 + FUNC_2 (VAR_6, VAR_10) / 8;
    return VAR_12;
  }
     }
 }

    }

BadName:
  if (!VAR_8)
    {
      FUNC_14 ();
      FUNC_13 (VAR_5);
      FUNC_12 (VAR_4, "Type ");
      FUNC_16 (VAR_6, "", VAR_4, -1);
      FUNC_12 (VAR_4, " has no component named ");
      FUNC_10 ("%s", VAR_7 == ((void*)0) ? "<null>" : VAR_7);
    }

  return ((void*)0);
}
