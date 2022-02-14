
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int buf ;


 int FUNC_0 (int) ;

const char *
FUNC_1(uint32_t VAR_0)
{
 register char *VAR_1;
 register u_int VAR_2;
 register int VAR_3;
 static char VAR_4[sizeof(".xxx.xxx.xxx.xxx")];

 FUNC_0(VAR_0);
 VAR_1 = VAR_4 + sizeof(VAR_4);
 *--VAR_1 = '\0';

 VAR_3 = 4;
 do {
  VAR_2 = VAR_0 & 0xff;
  *--VAR_1 = VAR_2 % 10 + '0';
  VAR_2 /= 10;
  if (VAR_2 > 0) {
   *--VAR_1 = VAR_2 % 10 + '0';
   VAR_2 /= 10;
   if (VAR_2 > 0)
    *--VAR_1 = VAR_2 + '0';
  }
  *--VAR_1 = '.';
  VAR_0 >>= 8;
 } while (--VAR_3 > 0);

 return VAR_1 + 1;
}
