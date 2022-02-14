
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (int ,unsigned int) ;

void
FUNC_1(struct sockaddr *VAR_0, struct sockaddr *VAR_1, struct sockaddr *VAR_2)
{
 u_char *VAR_3 = (u_char *)VAR_0;
 u_char *VAR_4 = (u_char *)VAR_1;
 u_char *VAR_5 = (u_char *)VAR_2;
 u_char *VAR_6 = VAR_4 + *VAR_5;
 u_char *VAR_7 = VAR_4 + *VAR_3;

 *VAR_4++ = *VAR_3++; *VAR_4++ = *VAR_3++;
 VAR_5 += 2;
 if (VAR_6 > VAR_7)
  VAR_6 = VAR_7;
 while (VAR_4 < VAR_6)
  *VAR_4++ = *VAR_3++ & *VAR_5++;
 if (VAR_4 < VAR_7)
  FUNC_0((caddr_t)VAR_4, (unsigned)(VAR_7 - VAR_4));
}
