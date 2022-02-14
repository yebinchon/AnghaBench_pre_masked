
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char const) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static char *
FUNC_4 (const char **VAR_1, int VAR_2, int VAR_3)
{
  char *VAR_4;
  const char *VAR_5;
  int VAR_6;
  int VAR_7;


  while (FUNC_0 ((int) **VAR_1))
    (*VAR_1)++;

  if (**VAR_1 == '\0')
    return ((void*)0);

  VAR_7 = 0;
  for (VAR_6 = 0, VAR_5 = *VAR_1; *VAR_5 != '\0'; VAR_5++)
    {
      if (VAR_3 && *VAR_5 == '(')
 VAR_6++;
      else if (VAR_3 && *VAR_5 == ')')
 VAR_6--;
      else if (VAR_6 == 0 && *VAR_5 == VAR_2)
 break;
      if (VAR_6 == 0 && FUNC_0 ((int) *VAR_5))
 VAR_7++;
      else
 {
   for (; VAR_7 != 0; VAR_7--)
     FUNC_1 (&VAR_0, VAR_5 [-VAR_7]);
   FUNC_1 (&VAR_0, *VAR_5);
 }
    }
  FUNC_1 (&VAR_0, '\0');
  VAR_4 = FUNC_2 (&VAR_0);
  (void) FUNC_3 (&VAR_0);

  *VAR_1 = VAR_5;
  if (**VAR_1 == VAR_2)
    (*VAR_1)++;

  return VAR_4;
}
