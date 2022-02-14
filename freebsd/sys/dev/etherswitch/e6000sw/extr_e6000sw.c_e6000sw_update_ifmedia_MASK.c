
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;

__attribute__((used)) static void
FUNC_0(uint16_t VAR_12, u_int *VAR_13, u_int *VAR_14)
{
 *VAR_14 = VAR_5;
 *VAR_13 = VAR_4;

 if ((VAR_12 & VAR_10) != 0)
  *VAR_13 |= VAR_3;
 else {
  *VAR_14 |= VAR_8;
  return;
 }

 switch (VAR_12 & VAR_11) {
 case 130:
  *VAR_14 |= VAR_2;
  break;
 case 129:
  *VAR_14 |= VAR_1;
  break;
 case 128:
  *VAR_14 |= VAR_0;
  break;
 }

 if ((VAR_12 & VAR_9) == 0)
  *VAR_14 |= VAR_6;
 else
  *VAR_14 |= VAR_7;
}
