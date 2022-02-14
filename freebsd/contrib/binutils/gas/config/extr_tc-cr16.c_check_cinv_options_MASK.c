
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char) ;

__attribute__((used)) static int
FUNC_2 (char * VAR_0)
{
  char *VAR_1 = VAR_0;
  int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;

  while (*++VAR_1 != ']')
    {
      if (*VAR_1 == ',' || *VAR_1 == ' ')
        continue;

      else if (*VAR_1 == 'i')
        VAR_2 = 1;
      else if (*VAR_1 == 'u')
        VAR_3 = 1;
      else if (*VAR_1 == 'd')
        VAR_4 = 1;
      else
        FUNC_1 (FUNC_0("Illegal `cinv' parameter: `%c'"), *VAR_1);
    }

  return 0;
}
