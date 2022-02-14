
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_bas *VAR_10, int VAR_11, int VAR_12, int VAR_13,
    int VAR_14)
{
 int VAR_15;
 uint8_t VAR_16;

 VAR_16 = 0;
 if (VAR_12 >= 8)
  VAR_16 |= VAR_4;
 else if (VAR_12 == 7)
  VAR_16 |= VAR_3;
 else if (VAR_12 == 6)
  VAR_16 |= VAR_2;
 else
  VAR_16 |= VAR_1;
 if (VAR_13 > 1)
  VAR_16 |= VAR_6;
 VAR_16 |= VAR_14 << 3;


 if (VAR_11 > 0) {
  VAR_15 = FUNC_0(VAR_10->rclk, VAR_11);
  if (VAR_15 == 0)
   return (VAR_0);
  FUNC_2(VAR_10, VAR_9, VAR_16 | VAR_5);
  FUNC_1(VAR_10);
  FUNC_2(VAR_10, VAR_8, VAR_15 & 0xff);
  FUNC_2(VAR_10, VAR_7, (VAR_15 >> 8) & 0xff);
  FUNC_1(VAR_10);
 }


 FUNC_2(VAR_10, VAR_9, VAR_16);
 FUNC_1(VAR_10);
 return (0);
}
