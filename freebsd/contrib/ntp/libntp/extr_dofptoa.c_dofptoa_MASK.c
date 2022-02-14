
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_long ;
typedef int u_fp ;
typedef int u_char ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;

char *
FUNC_2(
 u_fp VAR_0,
 int VAR_1,
 short VAR_2,
 int VAR_3
 )
{
 register u_char *VAR_4, *VAR_5;
 register u_long VAR_6;
 register short VAR_7;
 u_char VAR_8[12];
 u_char *VAR_9;
 char *VAR_10;
 char *VAR_11;




 FUNC_0(VAR_10);




 FUNC_1(VAR_8);





 VAR_4 = VAR_5 = &VAR_8[5];
 VAR_6 = VAR_0;




 if (!(VAR_6 & 0xffff0000))
     VAR_4--;
 else {
  register u_short VAR_12 = (u_short)(VAR_6 >> 16);
  register u_short VAR_13;
  register u_short VAR_14 = 10;

  do {
   VAR_13 = VAR_12;
   VAR_12 = (u_short) (VAR_12/VAR_14);
   *(--VAR_4) = (u_char)(VAR_13 - ((VAR_12<<3) + (VAR_12<<1)));
  } while (VAR_12 != 0);
 }




 if (VAR_3) {
  VAR_7 = (short)(VAR_2 + 3);
  if (VAR_7 < 3)
      VAR_7 = 3;
  VAR_9 = &VAR_8[8];
 } else {
  VAR_7 = VAR_2;
  VAR_9 = VAR_5;
 }

 if (VAR_7 > 6)
     VAR_7 = 6;

 if (VAR_7 > 0) {
  do {
   VAR_6 &= 0xffff;
   VAR_6 = (VAR_6 << 3) + (VAR_6 << 1);
   *VAR_5++ = (u_char)(VAR_6 >> 16);
  } while (--VAR_7 > 0);
 }

 if (VAR_6 & 0x8000) {
  register u_char *VAR_15;



  VAR_15 = VAR_5;
  *(--VAR_15) += 1;
  while (*VAR_15 >= 10) {
   *VAR_15 = 0;
   *(--VAR_15) += 1;
  }
 }




 while (VAR_4 < (VAR_9 -1) && *VAR_4 == 0)
     VAR_4++;




 VAR_11 = VAR_10;
 if (VAR_1)
     *VAR_11++ = '-';

 while (VAR_4 < VAR_5) {
  if (VAR_4 == VAR_9)
      *VAR_11++ = '.';
  *VAR_11++ = (char)(*VAR_4++ + '0');
 }
 *VAR_11 = '\0';
 return VAR_10;
}
