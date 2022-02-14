
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  static char *VAR_1 = ((void*)0);
  auto char VAR_2;

  if (VAR_1 == ((void*)0))
    {
      VAR_1 = FUNC_0 (VAR_2);

      FUNC_1 ();
    }
  else
    {

      if (FUNC_0 (VAR_2) > VAR_1)
 VAR_0 = 1;
      else
 VAR_0 = -1;
    }
}
