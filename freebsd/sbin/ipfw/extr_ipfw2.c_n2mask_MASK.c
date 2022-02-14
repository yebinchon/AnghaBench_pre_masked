
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr*,int ,int) ;

void
FUNC_1(struct in6_addr *VAR_0, int VAR_1)
{
 static int VAR_2[9] =
     { 0x00, 0x80, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff };
 u_char *VAR_3;

 FUNC_0(VAR_0, 0, sizeof(struct in6_addr));
 VAR_3 = (u_char *) VAR_0;
 for (; VAR_1 > 0; VAR_3++, VAR_1 -= 8) {
  if (VAR_1 >= 8)
   *VAR_3 = 0xff;
  else
   *VAR_3 = VAR_2[VAR_1];
 }
 return;
}
