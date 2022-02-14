
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (void)
{
  int VAR_0 = FUNC_2 ();

  while (1)
    {
      while (VAR_0 <= 0x80)
 {
   FUNC_1 (VAR_0);
   FUNC_0 ();
   VAR_0 = FUNC_2 ();
 }
      switch (VAR_0)
 {
 case 0x84:
   FUNC_1 (FUNC_2 ());
   FUNC_0 ();
 case 0x83:
   FUNC_1 (FUNC_2 ());
   FUNC_0 ();
 case 0x82:
   FUNC_1 (FUNC_2 ());
   FUNC_0 ();
 case 0x81:
   FUNC_1 (FUNC_2 ());
   FUNC_0 ();
   FUNC_1 (FUNC_2 ());
   FUNC_0 ();

   VAR_0 = FUNC_2 ();
   break;
 default:
   return;
 }
    }

}
