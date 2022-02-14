
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(int64_t VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;
 char *VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = VAR_1;


 if (VAR_0 < 0) {
  while (VAR_3-- > 0)
   *VAR_1++ = '0';
  return (-1);
 }

 VAR_1 += VAR_2;
 do {
  *--VAR_1 = (char)('0' + (VAR_0 % 10));
  VAR_0 /= 10;
 } while (--VAR_2 > 0 && VAR_0 > 0);

 if (VAR_0 == 0) {
  FUNC_0(VAR_4, VAR_1, VAR_3 - VAR_2);
  VAR_1 = VAR_4 + VAR_3 - VAR_2;
  while (VAR_2-- > 0)
   *VAR_1++ = ' ';
  return (0);
 }

 while (VAR_3-- > 0)
  *VAR_1++ = '9';

 return (-1);
}
