
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*) ;
 char const* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static const char *
FUNC_5 (const char *VAR_1)
{
  char *VAR_2 = FUNC_1 ("COLLECT_GCC_OPTIONS");
  char *VAR_3 = ((void*)0);
  int VAR_4 = 0;

  while (VAR_2 && *VAR_2)
    {
      char *VAR_5 = FUNC_0 (&VAR_2);

      if (FUNC_3 (VAR_5, "-o") == 0)
 VAR_3 = FUNC_0 (&VAR_2);
      else if (FUNC_3 (VAR_5, "-c") == 0)
 VAR_4 = 1;
    }

  if (VAR_4 && VAR_3)
    return VAR_3;

  if (VAR_2 && ! VAR_4)
    {
      FUNC_4 (0, "-frepo must be used with -c");
      VAR_0 = 0;
      return ((void*)0);
    }

  return FUNC_2 (VAR_1);
}
