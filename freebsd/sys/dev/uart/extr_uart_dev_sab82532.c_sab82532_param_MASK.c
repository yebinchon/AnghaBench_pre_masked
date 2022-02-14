
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





 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct uart_bas *VAR_17, int VAR_18, int VAR_19, int VAR_20,
    int VAR_21)
{
 int VAR_22;
 uint8_t VAR_23, VAR_24;

 if (VAR_19 >= 8)
  VAR_24 = VAR_9;
 else if (VAR_19 == 7)
  VAR_24 = VAR_8;
 else if (VAR_19 == 6)
  VAR_24 = VAR_7;
 else
  VAR_24 = VAR_6;
 if (VAR_20 > 1)
  VAR_24 |= VAR_15;
 switch (VAR_21) {
 case 132: VAR_24 |= VAR_10; break;
 case 131: VAR_24 |= VAR_11; break;
 case 130: VAR_24 |= VAR_12; break;
 case 129: VAR_24 |= VAR_13; break;
 case 128: VAR_24 |= VAR_14; break;
 default: return (VAR_0);
 }


 if (VAR_18 > 0) {
  VAR_22 = FUNC_0(VAR_17->rclk, VAR_18);
  if (VAR_22 == 0)
   return (VAR_0);
  FUNC_3(VAR_17, VAR_1, VAR_22 & 0xff);
  FUNC_1(VAR_17);

  FUNC_3(VAR_17, VAR_16, VAR_22 & 0xff);
  FUNC_1(VAR_17);
  VAR_23 = FUNC_2(VAR_17, VAR_2);
  VAR_23 &= ~(VAR_4 | VAR_3);
  VAR_23 |= (VAR_22 >> 2) & (VAR_4 | VAR_3);
  FUNC_3(VAR_17, VAR_2, VAR_23);
  FUNC_1(VAR_17);
 }

 FUNC_3(VAR_17, VAR_5, VAR_24);
 FUNC_1(VAR_17);
 return (0);
}
