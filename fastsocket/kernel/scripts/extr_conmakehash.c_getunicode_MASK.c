
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(char **VAR_0)
{
  char *VAR_1 = *VAR_0;

  while (*VAR_1 == ' ' || *VAR_1 == '\t')
    VAR_1++;
  if (*VAR_1 != 'U' || VAR_1[1] != '+' ||
      !FUNC_0(VAR_1[2]) || !FUNC_0(VAR_1[3]) || !FUNC_0(VAR_1[4]) ||
      !FUNC_0(VAR_1[5]) || FUNC_0(VAR_1[6]))
    return -1;
  *VAR_0 = VAR_1+6;
  return FUNC_1(VAR_1+2,0,16);
}
