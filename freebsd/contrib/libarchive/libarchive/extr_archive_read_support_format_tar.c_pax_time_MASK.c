
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char int64_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(const char *VAR_1, int64_t *VAR_2, long *VAR_3)
{
 char VAR_4;
 int64_t VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int64_t VAR_8, VAR_9;

 VAR_8 = VAR_0 / 10;
 VAR_9 = VAR_0 % 10;

 VAR_5 = 0;
 VAR_7 = 1;
 if (*VAR_1 == '-') {
  VAR_7 = -1;
  VAR_1++;
 }
 while (*VAR_1 >= '0' && *VAR_1 <= '9') {
  VAR_4 = *VAR_1 - '0';
  if (VAR_5 > VAR_8 ||
      (VAR_5 == VAR_8 && VAR_4 > VAR_9)) {
   VAR_5 = VAR_0;
   break;
  }
  VAR_5 = (VAR_5 * 10) + VAR_4;
  ++VAR_1;
 }

 *VAR_2 = VAR_5 * VAR_7;


 *VAR_3 = 0;

 if (*VAR_1 != '.')
  return;

 VAR_6 = 100000000UL;
 do {
  ++VAR_1;
  if (*VAR_1 >= '0' && *VAR_1 <= '9')
   *VAR_3 += (*VAR_1 - '0') * VAR_6;
  else
   break;
 } while (VAR_6 /= 10);
}
