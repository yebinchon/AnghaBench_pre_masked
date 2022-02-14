
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3 (int VAR_1)
{
  for (;;)
    {
      int VAR_2 = FUNC_2 ();
      if (')' == VAR_2 || ']' == VAR_2)
 return;
      --VAR_0;
      if (VAR_2 == '\0')
 FUNC_0 ("missing close paren");
      FUNC_1 (VAR_1);
    }
}
