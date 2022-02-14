
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 char* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;

void
FUNC_4 (int VAR_3)
{
  if (! VAR_3)
    {
      VAR_1 = FUNC_3 ();

      if (VAR_1 < 0 || VAR_1 > 1000)
 {
   VAR_1 = 0;
   FUNC_1 (FUNC_0("strange paper height, set to no form"));
 }

      if (*VAR_0 != ',')
 {
   FUNC_2 ();
   return;
 }

      ++VAR_0;
    }

  VAR_2 = FUNC_3 ();

  FUNC_2 ();
}
