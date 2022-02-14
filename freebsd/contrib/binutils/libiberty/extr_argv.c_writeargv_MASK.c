
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 char const VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char,int *) ;

int
FUNC_2 (char **VAR_2, FILE *VAR_3)
{
  int VAR_4 = 0;

  if (VAR_3 == ((void*)0))
    return 1;

  while (*VAR_2 != ((void*)0))
    {
      const char *VAR_5 = *VAR_2;

      while (*VAR_5 != VAR_1)
        {
          char VAR_6 = *VAR_5;

          if (FUNC_0(VAR_6) || VAR_6 == '\\' || VAR_6 == '\'' || VAR_6 == '"')
            if (VAR_0 == FUNC_1 ('\\', VAR_3))
              {
                VAR_4 = 1;
                goto done;
              }

          if (VAR_0 == FUNC_1 (VAR_6, VAR_3))
            {
              VAR_4 = 1;
              goto done;
            }
          VAR_5++;
        }

      if (VAR_0 == FUNC_1 ('\n', VAR_3))
        {
          VAR_4 = 1;
          goto done;
        }
      VAR_2++;
    }

 done:
  return VAR_4;
}
