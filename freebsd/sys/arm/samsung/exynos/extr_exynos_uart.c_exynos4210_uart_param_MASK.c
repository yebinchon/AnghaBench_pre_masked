
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct uart_bas *VAR_11, int VAR_12, int VAR_13,
    int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;

 VAR_17 = 0;

 switch(VAR_13) {
 case 5:
  VAR_17 |= VAR_3;
  break;
 case 6:
  VAR_17 |= VAR_4;
  break;
 case 7:
  VAR_17 |= VAR_5;
  break;
 case 8:
  VAR_17 |= VAR_6;
  break;
 default:
  return (VAR_0);
 }

 switch (VAR_15) {
 case 130:
  VAR_17 |= VAR_8;
  break;
 case 129:
  VAR_17 |= VAR_9;
  break;
 case 132:
  VAR_17 |= VAR_7;
  break;
 case 131:
 case 128:
 default:
  return (VAR_0);
 }

 if (VAR_14 == 2)
  VAR_17 |= VAR_10;

 FUNC_1(VAR_11, VAR_2, VAR_17);

 VAR_16 = FUNC_0(VAR_12, VAR_11->rclk);
 FUNC_1(VAR_11, VAR_1, VAR_16);

 return (0);
}
