
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

int
FUNC_1(
 const char *VAR_0,
 long *VAR_1
 )
{
 register long VAR_2;
 register const char *VAR_3;
 register int VAR_4;
 register int VAR_5;

 VAR_3 = VAR_0;

 if (*VAR_3 == '-') {
  VAR_3++;
  VAR_4 = 1;
  VAR_5 = '8';
 } else {
  VAR_4 = 0;
  VAR_5 = '7';
 }

 if (*VAR_3 == '\0')
     return 0;

 VAR_2 = 0;
 while (*VAR_3 != '\0') {
  if (!FUNC_0((unsigned char)*VAR_3))
      return 0;
  if (VAR_2 > 214748364 || (VAR_2 == 214748364 && *VAR_3 > VAR_5))
      return 0;
  VAR_2 = (VAR_2 << 3) + (VAR_2 << 1);
  VAR_2 += *VAR_3++ - '0';
 }

 if (VAR_4)
     *VAR_1 = -VAR_2;
 else
     *VAR_1 = VAR_2;
 return 1;
}
