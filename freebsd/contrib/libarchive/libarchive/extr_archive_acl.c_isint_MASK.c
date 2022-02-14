
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_1, const char *VAR_2, int *VAR_3)
{
 int VAR_4 = 0;
 if (VAR_1 >= VAR_2)
  return (0);
 while (VAR_1 < VAR_2) {
  if (*VAR_1 < '0' || *VAR_1 > '9')
   return (0);
  if (VAR_4 > (VAR_0 / 10) ||
      (VAR_4 == VAR_0 / 10 && (*VAR_1 - '0') > VAR_0 % 10)) {
   VAR_4 = VAR_0;
  } else {
   VAR_4 *= 10;
   VAR_4 += *VAR_1 - '0';
  }
  VAR_1++;
 }
 *VAR_3 = VAR_4;
 return (1);
}
