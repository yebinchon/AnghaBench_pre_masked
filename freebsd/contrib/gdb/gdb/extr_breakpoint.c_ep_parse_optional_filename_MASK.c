
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1 (char **VAR_0)
{
  static char VAR_1[1024];
  char *VAR_2 = *VAR_0;
  int VAR_3;
  char VAR_4;

  if ((*VAR_2 == '\0') || FUNC_0 (*VAR_2))
    return ((void*)0);

  for (VAR_3 = 0;; VAR_3++)
    {
      VAR_4 = *VAR_2;
      if (FUNC_0 (VAR_4))
 VAR_4 = '\0';
      VAR_1[VAR_3] = VAR_4;
      if (VAR_4 == '\0')
 break;
      VAR_2++;
    }
  *VAR_0 = VAR_2;

  return VAR_1;
}
