
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGEST ;


 char* FUNC_0 (char*,char) ;

__attribute__((used)) static int
FUNC_1 (char **VAR_0, LONGEST *VAR_1)
{
  char *VAR_2;
  int VAR_3 = 1;

  if (!VAR_0 || !*VAR_0 || !**VAR_0 || !VAR_1)
    return -1;
  VAR_2 = FUNC_0 (*VAR_0, ',');
  if (VAR_2)
    *VAR_2++ = '\0';
  else
    VAR_2 = FUNC_0 (*VAR_0, '\0');
  while (FUNC_0 ("+-", **VAR_0))
    {
      if (**VAR_0 == '-')
 VAR_3 = -VAR_3;
      ++*VAR_0;
    }
  for (*VAR_1 = 0; **VAR_0; ++*VAR_0)
    {
      *VAR_1 <<= 4;
      if (**VAR_0 >= '0' && **VAR_0 <= '9')
        *VAR_1 += **VAR_0 - '0';
      else if (**VAR_0 >= 'a' && **VAR_0 <= 'f')
        *VAR_1 += **VAR_0 - 'a' + 10;
      else if (**VAR_0 >= 'A' && **VAR_0 <= 'F')
        *VAR_1 += **VAR_0 - 'A' + 10;
      else
        return -1;
    }
  *VAR_1 *= VAR_3;
  *VAR_0 = VAR_2;
  return 0;
}
