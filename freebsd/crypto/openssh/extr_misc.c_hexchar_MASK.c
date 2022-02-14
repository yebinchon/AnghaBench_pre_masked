
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0)
{
 unsigned char VAR_1[2];
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_0[VAR_2] >= '0' && VAR_0[VAR_2] <= '9')
   VAR_1[VAR_2] = (unsigned char)(VAR_0[VAR_2] - '0');
  else if (VAR_0[VAR_2] >= 'a' && VAR_0[VAR_2] <= 'f')
   VAR_1[VAR_2] = (unsigned char)(VAR_0[VAR_2] - 'a') + 10;
  else if (VAR_0[VAR_2] >= 'A' && VAR_0[VAR_2] <= 'F')
   VAR_1[VAR_2] = (unsigned char)(VAR_0[VAR_2] - 'A') + 10;
  else
   return -1;
 }
 return (VAR_1[0] << 4) | VAR_1[1];
}
