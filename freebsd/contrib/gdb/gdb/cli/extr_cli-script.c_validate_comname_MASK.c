
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0)
{
  char *VAR_1;

  if (VAR_0 == 0)
    FUNC_1 ("name of command to define");

  VAR_1 = VAR_0;
  while (*VAR_1)
    {
      if (!FUNC_2 (*VAR_1) && *VAR_1 != '-' && *VAR_1 != '_')
 FUNC_0 ("Junk in argument list: \"%s\"", VAR_1);
      VAR_1++;
    }
}
