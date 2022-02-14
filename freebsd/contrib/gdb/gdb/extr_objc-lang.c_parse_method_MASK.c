
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;

char *
FUNC_3 (char *VAR_0, char *VAR_1, char **VAR_2,
       char **VAR_3, char **VAR_4)
{
  char *VAR_5 = ((void*)0);
  char *VAR_6 = ((void*)0);
  int VAR_7 = 0;

  char VAR_8 = '\0';
  char *VAR_9 = ((void*)0);
  char *VAR_10 = ((void*)0);
  char *VAR_11 = ((void*)0);

  FUNC_0 (VAR_1 != ((void*)0));
  FUNC_0 (VAR_2 != ((void*)0));
  FUNC_0 (VAR_3 != ((void*)0));
  FUNC_0 (VAR_4 != ((void*)0));

  VAR_5 = VAR_0;

  while (FUNC_2 (*VAR_5))
    VAR_5++;
  if (*VAR_5 == '\'')
    {
      VAR_7 = 1;
      VAR_5++;
    }
  while (FUNC_2 (*VAR_5))
    VAR_5++;

  if ((VAR_5[0] == '+') || (VAR_5[0] == '-'))
    VAR_8 = *VAR_5++;

  while (FUNC_2 (*VAR_5))
    VAR_5++;

  if (*VAR_5 != '[')
    return ((void*)0);
  VAR_5++;

  VAR_9 = VAR_5;
  while (FUNC_1 (*VAR_5) || (*VAR_5 == '_'))
    VAR_5++;

  VAR_6 = VAR_5;
  while (FUNC_2 (*VAR_6))
    VAR_6++;

  if (*VAR_6 == '(')
    {
      VAR_6++;
      while (FUNC_2 (*VAR_6))
 VAR_6++;
      VAR_10 = VAR_6;
      while (FUNC_1 (*VAR_6) || (*VAR_6 == '_'))
 VAR_6++;
      *VAR_6++ = '\0';
    }


  *VAR_5++ = '\0';

  VAR_11 = VAR_6;
  VAR_5 = VAR_6;

  for (;;) {
    if (FUNC_1 (*VAR_6) || (*VAR_6 == '_') || (*VAR_6 == ':'))
      *VAR_5++ = *VAR_6;
    else if (FUNC_2 (*VAR_6))
      ;
    else if (*VAR_6 == ']')
      break;
    else
      return ((void*)0);
    VAR_6++;
  }
  *VAR_5++ = '\0';
  VAR_6++;

  while (FUNC_2 (*VAR_6))
    VAR_6++;
  if (VAR_7)
    {
      if (*VAR_6 != '\'')
 return ((void*)0);
      VAR_6++;
      while (FUNC_2 (*VAR_6))
 VAR_6++;
    }

  if (VAR_1 != ((void*)0))
    *VAR_1 = VAR_8;
  if (VAR_2 != ((void*)0))
    *VAR_2 = VAR_9;
  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_10;
  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_11;

  return VAR_6;
}
