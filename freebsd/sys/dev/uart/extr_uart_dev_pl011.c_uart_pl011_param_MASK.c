
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
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
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct uart_bas *VAR_17, int VAR_18, int VAR_19, int VAR_20,
    int VAR_21)
{
 uint32_t VAR_22, VAR_23;
 uint32_t VAR_24;





 VAR_22 = VAR_23 = 0x0;
 FUNC_1(VAR_17, VAR_12, VAR_22);


 switch (VAR_19) {
 case 7:
  VAR_23 |= VAR_10;
  break;
 case 6:
  VAR_23 |= VAR_9;
  break;
 case 8:
 default:
  VAR_23 |= VAR_11;
  break;
 }

 if (VAR_20 == 2)
  VAR_23 |= VAR_8;
 else
  VAR_23 &= ~VAR_8;

 if (VAR_21)
  VAR_23 |= VAR_7;
 else
  VAR_23 &= ~VAR_7;
 VAR_23 |= VAR_6;


 VAR_22 |= (VAR_0 | VAR_1 | VAR_2);

 if (VAR_17->rclk != 0 && VAR_18 != 0) {
  VAR_24 = VAR_17->rclk * 4 / VAR_18;
  FUNC_1(VAR_17, VAR_14, ((uint32_t)(VAR_24 >> 6)) & VAR_5);
  FUNC_1(VAR_17, VAR_13, (uint32_t)(VAR_24 & 0x3F) & VAR_3);
 }


 FUNC_1(VAR_17, VAR_16, (FUNC_0(VAR_17, VAR_16) &
     ~0xff) | VAR_23);


 FUNC_1(VAR_17, VAR_15, VAR_4);

 FUNC_1(VAR_17, VAR_12, VAR_22);
}
