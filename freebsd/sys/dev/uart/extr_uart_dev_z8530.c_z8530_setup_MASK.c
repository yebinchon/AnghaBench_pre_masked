
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {scalar_t__ rclk; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (struct uart_bas*,int,int,int,int,int*) ;

__attribute__((used)) static int
FUNC_3(struct uart_bas *VAR_14, int VAR_15, int VAR_16, int VAR_17,
    int VAR_18)
{
 uint8_t VAR_19;

 if (VAR_14->rclk == 0)
  VAR_14->rclk = VAR_2;


 switch (VAR_14->chan) {
 case 1:
  FUNC_1(VAR_14, VAR_13, VAR_6 | VAR_4);
  break;
 case 2:
  FUNC_1(VAR_14, VAR_13, VAR_6 | VAR_5);
  break;
 }
 FUNC_0(VAR_14);

 FUNC_1(VAR_14, VAR_10, VAR_0 | VAR_1);
 FUNC_1(VAR_14, VAR_12, VAR_9);
 FUNC_0(VAR_14);

 FUNC_1(VAR_14, VAR_11, VAR_3);
 FUNC_0(VAR_14);

 VAR_19 = VAR_7 | VAR_8;
 FUNC_2(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, &VAR_19);
 return (int)VAR_19;
}
