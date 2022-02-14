
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (struct type*,int) ;
 struct type* FUNC_4 (struct type*,int) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 char* FUNC_15 (struct type*) ;
 int FUNC_16 (struct type*,char*,int ,int) ;

struct type *
FUNC_17 (struct type *VAR_6, char *VAR_7, int VAR_8)
{
  int VAR_9;

  for (;;)
    {
      FUNC_0 (VAR_6);
      if (FUNC_2 (VAR_6) != VAR_0
   && FUNC_2 (VAR_6) != VAR_1)
 break;
      VAR_6 = FUNC_7 (VAR_6);
    }

  if (FUNC_2 (VAR_6) != VAR_2 &&
      FUNC_2 (VAR_6) != VAR_3)
    {
      FUNC_14 ();
      FUNC_11 (VAR_5);
      FUNC_9 (VAR_4, "Type ");
      FUNC_16 (VAR_6, "", VAR_4, -1);
      FUNC_8 (" is not a structure or union type.");
    }
  for (VAR_9 = FUNC_5 (VAR_6) - 1; VAR_9 >= FUNC_6 (VAR_6); VAR_9--)
    {
      char *VAR_10 = FUNC_3 (VAR_6, VAR_9);

      if (VAR_10 && (FUNC_13 (VAR_10, VAR_7) == 0))
 {
   return FUNC_4 (VAR_6, VAR_9);
 }
    }


  for (VAR_9 = FUNC_6 (VAR_6) - 1; VAR_9 >= 0; VAR_9--)
    {
      struct type *VAR_11;

      VAR_11 = FUNC_17 (FUNC_1 (VAR_6, VAR_9), VAR_7, VAR_8);
      if (VAR_11 != ((void*)0))
 {
   return VAR_11;
 }
    }

  if (VAR_8)
    {
      return ((void*)0);
    }

  FUNC_14 ();
  FUNC_11 (VAR_5);
  FUNC_9 (VAR_4, "Type ");
  FUNC_16 (VAR_6, "", VAR_4, -1);
  FUNC_9 (VAR_4, " has no component named ");
  FUNC_10 (VAR_7, VAR_4);
  FUNC_8 (".");
  return (struct type *) -1;
}
