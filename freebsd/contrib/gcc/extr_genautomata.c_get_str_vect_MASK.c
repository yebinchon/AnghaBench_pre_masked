
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int,int) ;
 char* FUNC_2 (char const**,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static char **
FUNC_6 (const char *VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
  int VAR_5;
  char **VAR_6;
  const char **VAR_7;
  char *VAR_8;

  *VAR_2 = FUNC_1 (VAR_1, VAR_3, VAR_4);
  if (*VAR_2 <= 0)
    return ((void*)0);
  FUNC_4 (&VAR_0, sizeof (char *) * (*VAR_2 + 1));
  VAR_6 = (char **) FUNC_3 (&VAR_0);
  (void) FUNC_5 (&VAR_0);
  VAR_7 = &VAR_1;
  for (VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++)
    VAR_6 [VAR_5] = FUNC_2 (VAR_7, VAR_3, VAR_4);
  VAR_8 = FUNC_2 (VAR_7, VAR_3, VAR_4);
  FUNC_0 (!VAR_8);
  VAR_6 [VAR_5] = ((void*)0);
  return VAR_6;
}
