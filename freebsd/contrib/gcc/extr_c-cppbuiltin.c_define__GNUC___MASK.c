
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 char const* VAR_0 ;

__attribute__((used)) static void
FUNC_4 (void)
{


  const char *VAR_1, *VAR_2 = VAR_0;

  while (*VAR_2 && !FUNC_0 (*VAR_2))
    VAR_2++;
  FUNC_3 (*VAR_2 && (VAR_2 <= VAR_0 || VAR_2[-1] == '-'));

  VAR_1 = VAR_2;
  while (FUNC_0 (*VAR_2))
    VAR_2++;
  FUNC_1 ("__GNUC__", VAR_1, VAR_2 - VAR_1);
  if (FUNC_2 ())
    FUNC_1 ("__GNUG__", VAR_1, VAR_2 - VAR_1);

  FUNC_3 (*VAR_2 == '.' && FUNC_0 (VAR_2[1]));

  VAR_1 = ++VAR_2;
  while (FUNC_0 (*VAR_2))
    VAR_2++;
  FUNC_1 ("__GNUC_MINOR__", VAR_1, VAR_2 - VAR_1);

  if (*VAR_2 == '.')
    {
      FUNC_3 (FUNC_0 (VAR_2[1]));
      VAR_1 = ++VAR_2;
      while (FUNC_0 (*VAR_2))
 VAR_2++;
      FUNC_1 ("__GNUC_PATCHLEVEL__", VAR_1, VAR_2 - VAR_1);
    }
  else
    FUNC_1 ("__GNUC_PATCHLEVEL__", "0", 1);

  FUNC_3 (!*VAR_2 || *VAR_2 == ' ' || *VAR_2 == '-');
}
