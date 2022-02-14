
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_3 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_4, int VAR_5)
{

  FUNC_3 ();
  if (VAR_4 != (char *) ((void*)0))
    {
      int VAR_6 = FUNC_0 (VAR_4);

      if (VAR_6 > 0)
 {
   int VAR_7 = FUNC_4 () - (VAR_6 + 1);

   if (!FUNC_1 (VAR_3[VAR_0], VAR_7) ||
       FUNC_2 (VAR_3[VAR_0],
        VAR_7) == VAR_1)
     FUNC_5 ("Invalid window height specified.\n%s",
       VAR_2);
 }
      else
 FUNC_5 ("Invalid window height specified.\n%s",
   VAR_2);
    }
  else
    FUNC_5 ("Invalid window height specified.\n%s", VAR_2);
}
