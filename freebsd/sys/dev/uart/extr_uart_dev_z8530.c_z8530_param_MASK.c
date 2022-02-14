
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int rclk; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_bas *VAR_26, int VAR_27, int VAR_28, int VAR_29,
    int VAR_30, uint8_t *VAR_31)
{
 int VAR_32;
 uint8_t VAR_33, VAR_34, VAR_35;

 VAR_34 = VAR_11;
 VAR_33 = VAR_2;
 VAR_35 = VAR_18 | (*VAR_31 & (VAR_12 | VAR_13));

 if (VAR_28 >= 8) {
  VAR_34 |= VAR_10;
  VAR_35 |= VAR_17;
 } else if (VAR_28 == 7) {
  VAR_34 |= VAR_9;
  VAR_35 |= VAR_16;
 } else if (VAR_28 == 6) {
  VAR_34 |= VAR_8;
  VAR_35 |= VAR_15;
 } else {
  VAR_34 |= VAR_7;
  VAR_35 |= VAR_14;
 }
 VAR_33 |= (VAR_29 > 1) ? VAR_6 : VAR_5;
 switch (VAR_30) {
 case 130: VAR_33 |= VAR_4 | VAR_3; break;
 case 129: break;
 case 128: VAR_33 |= VAR_4; break;
 default: return (VAR_0);
 }

 if (VAR_27 > 0) {
  VAR_32 = FUNC_2(VAR_26->rclk, VAR_27);
  if (VAR_32 == -1)
   return (VAR_0);
 } else
  VAR_32 = -1;

 FUNC_1(VAR_26, VAR_20, VAR_19);
 FUNC_0(VAR_26);

 if (VAR_32 >= 0) {
  FUNC_1(VAR_26, VAR_24, VAR_32 & 0xff);
  FUNC_0(VAR_26);
  FUNC_1(VAR_26, VAR_23, (VAR_32 >> 8) & 0xff);
  FUNC_0(VAR_26);
 }

 FUNC_1(VAR_26, VAR_22, VAR_34);
 FUNC_0(VAR_26);
 FUNC_1(VAR_26, VAR_21, VAR_33);
 FUNC_0(VAR_26);
 FUNC_1(VAR_26, VAR_25, VAR_35);
 FUNC_0(VAR_26);
 FUNC_1(VAR_26, VAR_20, VAR_19 | VAR_1);
 FUNC_0(VAR_26);
 *VAR_31 = VAR_35;
 return (0);
}
