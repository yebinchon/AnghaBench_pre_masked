
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (unsigned char) ;

int
FUNC_1(
 const char *VAR_0,
 u_long *VAR_1
 )
{
 register u_long VAR_2;
 register const char *VAR_3;

 VAR_3 = VAR_0;

 if (*VAR_3 == '\0')
     return 0;

 VAR_2 = 0;
 while (*VAR_3 != '\0') {
  if (!FUNC_0((unsigned char)*VAR_3) || *VAR_3 == '8' || *VAR_3 == '9')
      return 0;
  if (VAR_2 >= 0x20000000)
      return 0;
  VAR_2 <<= 3;
  VAR_2 += *VAR_3++ - '0';
 }
 *VAR_1 = VAR_2;
 return 1;
}
