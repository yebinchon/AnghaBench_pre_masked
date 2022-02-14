
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {scalar_t__ rclk; int chan; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (struct uart_bas*,int) ;
 int FUNC_1 (struct uart_bas*,int,int,int,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct uart_bas *VAR_42, int VAR_43, int VAR_44, int VAR_45,
    int VAR_46)
{
 uint8_t VAR_47, VAR_48;

 if (VAR_42->rclk == 0)
  VAR_42->rclk = VAR_0;






 FUNC_4(VAR_42, VAR_30,
     ~(VAR_33|VAR_34|VAR_35));
 FUNC_2(VAR_42);

 FUNC_4(VAR_42, VAR_31, 0xff);
 FUNC_2(VAR_42);

 FUNC_4(VAR_42, VAR_22, VAR_23);
 FUNC_2(VAR_42);

 VAR_48 = FUNC_3(VAR_42, VAR_32);
 switch (VAR_42->chan) {
 case 1:
  VAR_48 &= ~VAR_33;
  break;
 case 2:
  VAR_48 &= ~VAR_34;
  break;
 }
 FUNC_4(VAR_42, VAR_32, VAR_48 | VAR_35);
 FUNC_2(VAR_42);


 FUNC_4(VAR_42, VAR_1, 0);
 FUNC_2(VAR_42);


 VAR_47 = VAR_2|VAR_4|VAR_5;
 FUNC_4(VAR_42, VAR_1, VAR_47);
 FUNC_2(VAR_42);
 FUNC_4(VAR_42, VAR_6, VAR_9|VAR_7|VAR_8);
 FUNC_2(VAR_42);
 FUNC_4(VAR_42, VAR_10, VAR_11|VAR_12|VAR_13);
 FUNC_2(VAR_42);
 FUNC_4(VAR_42, VAR_14, 0);
 FUNC_2(VAR_42);
 FUNC_4(VAR_42, VAR_15, VAR_18|VAR_16|VAR_17);
 FUNC_2(VAR_42);
 FUNC_4(VAR_42, VAR_26, VAR_27|VAR_29|VAR_28);
 FUNC_2(VAR_42);
 FUNC_4(VAR_42, VAR_36, VAR_37|VAR_38|
     VAR_39);
 FUNC_2(VAR_42);

 FUNC_1(VAR_42, VAR_43, VAR_44, VAR_45, VAR_46);


 FUNC_4(VAR_42, VAR_19, (unsigned char)~VAR_20);
 FUNC_4(VAR_42, VAR_21, 0xff);
 FUNC_2(VAR_42);
 FUNC_3(VAR_42, VAR_24);
 FUNC_3(VAR_42, VAR_25);
 FUNC_2(VAR_42);

 FUNC_0(VAR_42, VAR_41|VAR_40);


 FUNC_4(VAR_42, VAR_1, VAR_47|VAR_3);
 FUNC_2(VAR_42);
}
