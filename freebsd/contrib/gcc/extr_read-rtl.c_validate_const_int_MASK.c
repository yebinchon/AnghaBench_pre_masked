
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_0, const char *VAR_1)
{
  const char *VAR_2;
  int VAR_3 = 1;

  VAR_2 = VAR_1;
  while (*VAR_2 && FUNC_1 (*VAR_2))
    VAR_2++;
  if (*VAR_2 == '-' || *VAR_2 == '+')
    VAR_2++;
  if (*VAR_2 == 0)
    VAR_3 = 0;
  for (; *VAR_2; VAR_2++)
    if (! FUNC_0 (*VAR_2))
      VAR_3 = 0;
  if (!VAR_3)
    FUNC_2 (VAR_0, "invalid decimal constant \"%s\"\n", VAR_1);
}
