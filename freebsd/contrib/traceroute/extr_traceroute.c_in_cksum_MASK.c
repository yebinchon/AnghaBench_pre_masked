
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_char ;



u_short
FUNC_0(register u_short *VAR_0, register int VAR_1)
{
 register int VAR_2 = VAR_1;
 register u_short *VAR_3 = VAR_0;
 register u_short VAR_4;
 register int VAR_5 = 0;







 while (VAR_2 > 1) {
  VAR_5 += *VAR_3++;
  VAR_2 -= 2;
 }


 if (VAR_2 == 1)
  VAR_5 += *(u_char *)VAR_3;




 VAR_5 = (VAR_5 >> 16) + (VAR_5 & 0xffff);
 VAR_5 += (VAR_5 >> 16);
 VAR_4 = ~VAR_5;
 return (VAR_4);
}
