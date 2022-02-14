
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

char *
FUNC_3 (char *VAR_0, char **VAR_1)
{
  char *VAR_2 = ((void*)0);
  char *VAR_3 = ((void*)0);
  int VAR_4 = 0;

  char *VAR_5 = ((void*)0);

  FUNC_0 (VAR_1 != ((void*)0));

  VAR_2 = VAR_0;

  while (FUNC_2 (*VAR_2))
    VAR_2++;
  if (*VAR_2 == '\'')
    {
      VAR_4 = 1;
      VAR_2++;
    }
  while (FUNC_2 (*VAR_2))
    VAR_2++;

  VAR_5 = VAR_2;
  VAR_3 = VAR_2;

  for (;;) {
    if (FUNC_1 (*VAR_3) || (*VAR_3 == '_') || (*VAR_3 == ':'))
      *VAR_2++ = *VAR_3;
    else if (FUNC_2 (*VAR_3))
      ;
    else if ((*VAR_3 == '\0') || (*VAR_3 == '\''))
      break;
    else
      return ((void*)0);
    VAR_3++;
  }
  *VAR_2++ = '\0';

  while (FUNC_2 (*VAR_3))
    VAR_3++;
  if (VAR_4)
    {
      if (*VAR_3 == '\'')
 VAR_3++;
      while (FUNC_2 (*VAR_3))
 VAR_3++;
    }

  if (VAR_1 != ((void*)0))
    *VAR_1 = VAR_5;

  return VAR_3;
}
