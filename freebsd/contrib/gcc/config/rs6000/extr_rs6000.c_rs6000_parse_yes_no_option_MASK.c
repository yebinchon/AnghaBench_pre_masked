
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_0, const char *VAR_1, int *VAR_2)
{
  if (VAR_1 == 0)
    return;
  else if (!FUNC_1 (VAR_1, "yes"))
    *VAR_2 = 1;
  else if (!FUNC_1 (VAR_1, "no"))
    *VAR_2 = 0;
  else
    FUNC_0 ("unknown -m%s= option specified: '%s'", VAR_0, VAR_1);
}
