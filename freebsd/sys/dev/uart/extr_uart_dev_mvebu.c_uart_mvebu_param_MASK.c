
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
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct uart_bas *VAR_10, int VAR_11, int VAR_12, int VAR_13,
    int VAR_14)
{
 uint32_t VAR_15 = 0;
 uint32_t VAR_16;
 int VAR_17, VAR_18 = 0;


 VAR_15 = FUNC_1(VAR_10, VAR_9);
 FUNC_3(VAR_10, VAR_9, VAR_15 | VAR_6 | VAR_3 |
     VAR_1);
 FUNC_0(VAR_10);

 switch (VAR_13) {
 case 2:
  VAR_15 |= VAR_5;
  break;
 case 1:
 default:
  VAR_15 &=~ VAR_5;
 }

 switch (VAR_14) {
 case 3:
  VAR_15 |= VAR_2;
  break;
 default:
  VAR_15 &=~ VAR_2;
 }


 if (VAR_11 > 0) {
  VAR_17 = FUNC_2(VAR_10->rclk, VAR_11);
  if (VAR_17 == 0) {
   VAR_18 = VAR_7;
  } else {
   VAR_16 = FUNC_1(VAR_10, VAR_8);
   VAR_16 &=~VAR_0;

   FUNC_3(VAR_10, VAR_8, VAR_16 | VAR_17);
   FUNC_0(VAR_10);
  }
 }


 VAR_15 |= VAR_4;

 FUNC_3(VAR_10, VAR_9, VAR_15);
 FUNC_0(VAR_10);

 return (VAR_18);
}
