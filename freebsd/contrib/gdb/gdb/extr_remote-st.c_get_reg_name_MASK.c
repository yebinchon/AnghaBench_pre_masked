
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static char *
FUNC_2 (int VAR_0)
{
  static char VAR_1[50];
  const char *VAR_2;
  char *VAR_3;

  VAR_3 = VAR_1;

  for (VAR_2 = FUNC_0 (VAR_0); *VAR_2; VAR_2++)
    *VAR_3++ = FUNC_1 (*VAR_2);
  *VAR_3 = '\000';

  return VAR_1;
}
