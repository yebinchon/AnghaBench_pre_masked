
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (size_t) ;

__attribute__((used)) static char *
FUNC_2 (char **VAR_0, int VAR_1)
{
  int VAR_2;
  size_t VAR_3 = 1;
  char *VAR_4;
  char *VAR_5;

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    VAR_3 += 1 + FUNC_0 ((char *) 0, VAR_0[VAR_2]);

  VAR_5 = VAR_4 = FUNC_1 (VAR_3);

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
      *VAR_5++ = ' ';
      VAR_5 += FUNC_0 (VAR_5, VAR_0[VAR_2]);
    }

  *VAR_5 = 0;
  return VAR_4;
}
