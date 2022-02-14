
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;

char *
FUNC_2(in_addr_t VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_3;
 char *VAR_6;

 while (VAR_2 & 0xffffffff) {
  u_char VAR_7 = (VAR_2 & 0xff000000) >> 24;

  VAR_2 <<= 8;
  if (VAR_7) {
   if (VAR_4 < sizeof "255.")
    goto emsgsize;
   VAR_6 = VAR_3;
   VAR_3 += FUNC_0((VAR_3, "%u", VAR_7));
   if (VAR_2 != 0L) {
    *VAR_3++ = '.';
    *VAR_3 = '\0';
   }
   VAR_4 -= (size_t)(VAR_3 - VAR_6);
  }
 }
 if (VAR_3 == VAR_5) {
  if (VAR_4 < sizeof "0.0.0.0")
   goto emsgsize;
  FUNC_1(VAR_3, "0.0.0.0");
 }
 return (VAR_5);

 emsgsize:
 VAR_1 = VAR_0;
 return (((void*)0));
}
