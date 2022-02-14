
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_12 ;
 int VAR_13 ;



 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_0(int VAR_16, u_int *VAR_17, u_int *VAR_18)
{
 *VAR_18 = VAR_5;
 *VAR_17 = VAR_4;
 if ((VAR_16 & VAR_12) != 0)
  *VAR_17 |= VAR_3;
 else {
  *VAR_18 |= VAR_10;
  return;
 }
 switch (VAR_16 & VAR_14) {
 case 130:
  *VAR_18 |= VAR_2;
  break;
 case 129:
  *VAR_18 |= VAR_1;
  break;
 case 128:
  *VAR_18 |= VAR_0;
  break;
 }
 if ((VAR_16 & VAR_11) != 0)
  *VAR_18 |= VAR_8;
 else
  *VAR_18 |= VAR_9;
 if ((VAR_16 & VAR_15) != 0)
  *VAR_18 |= VAR_7;
 if ((VAR_16 & VAR_13) != 0)
  *VAR_18 |= VAR_6;
}
