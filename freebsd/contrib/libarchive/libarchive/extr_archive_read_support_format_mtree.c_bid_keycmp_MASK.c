
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;



__attribute__((used)) static int
FUNC_0(const char *VAR_0, const char *VAR_1, ssize_t VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2 > 0 && *VAR_0 && *VAR_1) {
  if (*VAR_0 == *VAR_1) {
   --VAR_2;
   ++VAR_0;
   ++VAR_1;
   ++VAR_3;
   continue;
  }
  return (0);
 }
 if (*VAR_1 != '\0')
  return (0);


 if (VAR_0[0] == '=' || VAR_0[0] == ' ' || VAR_0[0] == '\t' ||
     VAR_0[0] == '\n' || VAR_0[0] == '\r' ||
    (VAR_0[0] == '\\' && (VAR_0[1] == '\n' || VAR_0[1] == '\r')))
  return (VAR_3);
 return (0);
}
