
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 unsigned long FUNC_3 (char*,char**,int) ;

__attribute__((used)) static bool
FUNC_4 (const char *VAR_1, unsigned long *VAR_2)
{
  char *VAR_3, *VAR_4;
  unsigned long VAR_5;

  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3 == ((void*)0))
    return 0;

  while (FUNC_2 ((unsigned char) *VAR_3))
    ++VAR_3;
  if (*VAR_3 == '\0')
    goto invalid;

  VAR_0 = 0;
  VAR_5 = FUNC_3 (VAR_3, &VAR_4, 10);
  if (VAR_0 || (long) VAR_5 <= 0)
    goto invalid;

  while (FUNC_2 ((unsigned char) *VAR_4))
    ++VAR_4;
  if (*VAR_4 != '\0')
    goto invalid;

  *VAR_2 = VAR_5;
  return 1;

 invalid:
  FUNC_1 ("Invalid value for environment variable %s", VAR_1);
  return 0;
}
