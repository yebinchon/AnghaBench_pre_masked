
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;





__attribute__((used)) static int
FUNC_0(struct sockaddr *VAR_0, struct sockaddr *VAR_1)
{
 int VAR_2 = 0;
 u_char *VAR_3, *VAR_4;
 u_char *VAR_5, VAR_6;
 int VAR_7;

 switch (VAR_0->sa_family) {
 case 129:
  VAR_3 = (u_char *)&((struct sockaddr_in *)VAR_0)->sin_addr;
  VAR_4 = (u_char *)&((struct sockaddr_in *)VAR_1)->sin_addr;
  VAR_7 = sizeof(struct in_addr);
  VAR_5 = VAR_3 + VAR_7;
  break;
 default:
  return(0);
 }

 while (VAR_3 < VAR_5)
  if ((VAR_6 = (*VAR_4++ ^ *VAR_3++)) != 0) {
   while ((VAR_6 & 0x80) == 0) {
    VAR_2++;
    VAR_6 <<= 1;
   }
   break;
  } else
   VAR_2 += 8;
 return(VAR_2);
}
