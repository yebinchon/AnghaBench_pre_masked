
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3 (struct uart_bas *VAR_11, int VAR_12, int VAR_13, int VAR_14,
    int VAR_15)
{
 int VAR_16;
 uint8_t VAR_17;

 VAR_17 = 0;
 if (VAR_13 >= 8)
  VAR_17 |= VAR_4;
 else if (VAR_13 == 7)
  VAR_17 |= VAR_3;
 else if (VAR_13 == 6)
  VAR_17 |= VAR_2;
 else
  VAR_17 |= VAR_1;
 if (VAR_14 > 1)
  VAR_17 |= VAR_6;
 VAR_17 |= VAR_15 << 3;


 if (VAR_12 > 0) {
  VAR_16 = FUNC_0(VAR_11->rclk, VAR_12);
  if (VAR_16 == 0)
   return (VAR_0);
  FUNC_2(VAR_11, VAR_9, VAR_17 | VAR_5);
  FUNC_1(VAR_11);
  FUNC_2(VAR_11, VAR_8, VAR_16 & 0xff);
  FUNC_2(VAR_11, VAR_7, (VAR_16 >> 8) & 0xff);
  FUNC_1(VAR_11);
                VAR_10 = 1;
 }


 FUNC_2(VAR_11, VAR_9, VAR_17);
 FUNC_1(VAR_11);
 return (0);
}
