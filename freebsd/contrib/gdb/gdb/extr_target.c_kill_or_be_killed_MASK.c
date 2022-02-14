
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (int VAR_1)
{
  if (VAR_0)
    {
      FUNC_1 ("You are already running a program:\n");
      FUNC_3 ();
      if (FUNC_2 ("Kill it? "))
 {
   FUNC_4 ();
   if (VAR_0)
     FUNC_0 ("Killing the program did not help.");
   return;
 }
      else
 {
   FUNC_0 ("Program not killed.");
 }
    }
  FUNC_5 ();
}
