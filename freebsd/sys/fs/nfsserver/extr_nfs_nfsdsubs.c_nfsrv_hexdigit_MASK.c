
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char
FUNC_0(char VAR_0, int *VAR_1)
{

 *VAR_1 = 0;
 if (VAR_0 >= '0' && VAR_0 <= '9')
  return (VAR_0 - '0');
 if (VAR_0 >= 'a' && VAR_0 <= 'f')
  return (VAR_0 - 'a' + ((char)10));
 if (VAR_0 >= 'A' && VAR_0 <= 'F')
  return (VAR_0 - 'A' + ((char)10));

 *VAR_1 = 1;
 return (1);
}
