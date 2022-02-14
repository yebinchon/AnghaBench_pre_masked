
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct cryptodesc {int crd_alg; } ;
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

__attribute__((used)) static int
FUNC_0(struct cryptodesc *VAR_15, u_int *VAR_16, u_int *VAR_17, u_int *VAR_18)
{

 *VAR_17 = VAR_9 | VAR_7;
 *VAR_16 = VAR_4;

 switch (VAR_15->crd_alg) {
 case 133:
  *VAR_17 |= VAR_6;

 case 134:
  *VAR_16 = VAR_2;
  *VAR_17 |= VAR_8;
  *VAR_18 = VAR_1;
  break;
 case 131:
  *VAR_17 |= VAR_6;

 case 132:
  *VAR_16 = VAR_2;
  *VAR_17 |= VAR_10;
  *VAR_18 = VAR_14;
  break;
 case 130:
  *VAR_17 |= VAR_6 | VAR_11;
  *VAR_16 = VAR_2;
  break;
 case 129:
  *VAR_17 |= VAR_6 | VAR_12;
  *VAR_16 = VAR_3;
  break;
 case 128:
  *VAR_17 |= VAR_6 | VAR_13;
  *VAR_16 = VAR_3;
  break;
 default:
  return (VAR_0);
 }

 if (*VAR_17 & VAR_6)
  *VAR_18 = VAR_5;

 return (0);
}
