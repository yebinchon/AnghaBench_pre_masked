
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
  if (!FUNC_0((unsigned char)*VAR_3))
   return 0;
  if (VAR_2 & 0xF0000000)
   return 0;
  VAR_2 <<= 4;
  if ('0' <= *VAR_3 && *VAR_3 <= '9')
   VAR_2 += *VAR_3++ - '0';
  else if ('a' <= *VAR_3 && *VAR_3 <= 'f')
   VAR_2 += *VAR_3++ - 'a' + 10;
  else if ('A' <= *VAR_3 && *VAR_3 <= 'F')
   VAR_2 += *VAR_3++ - 'A' + 10;
  else
   return 0;
 }
 *VAR_1 = VAR_2;
 return 1;
}
