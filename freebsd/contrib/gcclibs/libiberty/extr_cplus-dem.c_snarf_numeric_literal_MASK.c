
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string ;


 scalar_t__ FUNC_0 (unsigned char) ;
 char* VAR_0 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int
FUNC_2 (const char **VAR_1, string *VAR_2)
{
  if (**VAR_1 == '-')
    {
      VAR_0[0] = '-';
      FUNC_1 (VAR_2, VAR_0);
      (*VAR_1)++;
    }
  else if (**VAR_1 == '+')
    (*VAR_1)++;

  if (!FUNC_0 ((unsigned char)**VAR_1))
    return 0;

  while (FUNC_0 ((unsigned char)**VAR_1))
    {
      VAR_0[0] = **VAR_1;
      FUNC_1 (VAR_2, VAR_0);
      (*VAR_1)++;
    }

  return 1;
}
