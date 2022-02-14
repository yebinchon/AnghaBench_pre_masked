
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(const char *VAR_2, int *VAR_3)
{
 const char *VAR_4;
 int VAR_5 = VAR_1 / 10;
 int VAR_6 = VAR_1 % 10;

 for (VAR_4 = VAR_2; *VAR_4 != '\0' && (*VAR_4 < '0' || *VAR_4 > '9'); VAR_4++);
 if (*VAR_4 == '\0') {
  *VAR_3 = -1;
 } else if (VAR_4[0] == '0' && VAR_4[1] != '\0') {

  return (VAR_0);
 } else {
  for (*VAR_3 = 0; *VAR_4 != '\0'; VAR_4++) {
   if (*VAR_4 < '0' || *VAR_4 > '9') {

    return (VAR_0);
   }
   if (*VAR_3 > VAR_5 ||
       (*VAR_3 == VAR_5 && *VAR_4 - '0' > VAR_6))
    return (VAR_0);
   *VAR_3 = (*VAR_3 * 10) + (*VAR_4 - '0');
  }
 }

 return (0);
}
