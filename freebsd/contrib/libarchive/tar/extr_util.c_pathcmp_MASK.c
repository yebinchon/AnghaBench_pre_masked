
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0, const char *VAR_1)
{

 if (VAR_0[0] == '.' && VAR_0[1] == '/' && VAR_0[2] != '\0')
  VAR_0 += 2;
 if (VAR_1[0] == '.' && VAR_1[1] == '/' && VAR_1[2] != '\0')
  VAR_1 += 2;

 while (*VAR_0 == *VAR_1) {
  if (*VAR_0 == '\0')
   return (0);
  VAR_0++;
  VAR_1++;
 }




 if (VAR_0[0] == '/' && VAR_0[1] == '\0' && VAR_1[0] == '\0')
  return (0);
 if (VAR_0[0] == '\0' && VAR_1[0] == '/' && VAR_1[1] == '\0')
  return (0);

 return (*(const unsigned char *)VAR_0 - *(const unsigned char *)VAR_1);
}
