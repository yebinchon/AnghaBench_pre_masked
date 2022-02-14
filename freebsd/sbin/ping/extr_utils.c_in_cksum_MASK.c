
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_char ;
typedef int data ;


 int FUNC_0 (int*,scalar_t__*,int) ;

u_short
FUNC_1(u_char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 u_char *VAR_4;
 union {
  u_short us;
  u_char uc[2];
 } VAR_5;
 u_short VAR_6;

 VAR_2 = VAR_1;
 VAR_3 = 0;
 VAR_4 = VAR_0;






 while (VAR_2 > 1) {
  u_short VAR_7;

  FUNC_0(&VAR_7, VAR_4, sizeof(VAR_7));
  VAR_3 += VAR_7;
  VAR_4 += sizeof(VAR_7);
  VAR_2 -= sizeof(VAR_7);
 }


 if (VAR_2 == 1) {
  VAR_5.uc[0] = *VAR_4;
  VAR_5.uc[1] = 0;
  VAR_3 += VAR_5.us;
 }


 VAR_3 = (VAR_3 >> 16) + (VAR_3 & 0xffff);
 VAR_3 += (VAR_3 >> 16);
 VAR_6 = ~VAR_3;
 return(VAR_6);
}
