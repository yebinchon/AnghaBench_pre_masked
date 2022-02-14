
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 () ;
 char FUNC_1 () ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_0;

  while ((VAR_0 = FUNC_0 ()) != -1)
    {
      if (VAR_0 == '\n')
 break;
      if (VAR_0 == '\\')
        {
   FUNC_1 ();
   if ((VAR_0 = FUNC_0 ()) == -1 || VAR_0 == '\n')
     break;
   FUNC_1 ();
        }
      else if (FUNC_1 () == '"')
 {
   if (FUNC_0 () == '"')
     FUNC_1 ();
   else
     break;
 }
    }
}
