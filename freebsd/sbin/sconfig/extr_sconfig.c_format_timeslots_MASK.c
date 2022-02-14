
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (unsigned long VAR_0)
{
 static char VAR_1 [100];
 char *VAR_2 = VAR_1;
 int VAR_3;

 for (VAR_3=1; VAR_3<32; ++VAR_3)
  if ((VAR_0 >> VAR_3) & 1) {
   int VAR_4 = (VAR_3 > 1) & (VAR_0 >> (VAR_3-1));
   int VAR_5 = (VAR_3 < 31) & (VAR_0 >> (VAR_3+1));

   if (VAR_4) {
    if (VAR_5)
     continue;
    *VAR_2++ = '-';
   } else if (VAR_2 > VAR_1)
    *VAR_2++ = ',';

   if (VAR_3 >= 10)
    *VAR_2++ = '0' + VAR_3 / 10;
   *VAR_2++ = '0' + VAR_3 % 10;
  }
 *VAR_2 = 0;
 return VAR_1;
}
