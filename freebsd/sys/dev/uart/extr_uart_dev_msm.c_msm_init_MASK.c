
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {scalar_t__ rclk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;
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
 int FUNC_2 (struct uart_bas*,int,int,int,int) ;
 int FUNC_3 (struct uart_bas*) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct uart_bas *VAR_21, int VAR_22, int VAR_23, int VAR_24,
    int VAR_25)
{

 if (VAR_21->rclk == 0)
  VAR_21->rclk = VAR_0;

 FUNC_0(VAR_21->rclk != 0, ("msm_init: Invalid rclk"));


 FUNC_2(VAR_21, VAR_22, VAR_23, VAR_24, VAR_25);





 FUNC_4(VAR_21, VAR_10, 0x0);


 FUNC_4(VAR_21, VAR_7, 0);






 FUNC_4(VAR_21, VAR_19, VAR_20);


 FUNC_4(VAR_21, VAR_16, VAR_17);





 FUNC_4(VAR_21, VAR_8, VAR_18);


 FUNC_4(VAR_21, VAR_9, 0x0);






 FUNC_4(VAR_21, VAR_6, 0x0);


 FUNC_1(VAR_21, VAR_1, VAR_15);
 FUNC_1(VAR_21, VAR_1, VAR_13);
 FUNC_1(VAR_21, VAR_1, VAR_12);
 FUNC_1(VAR_21, VAR_1, VAR_11);
 FUNC_1(VAR_21, VAR_1, VAR_14);


 FUNC_4(VAR_21, VAR_4, VAR_5);


 FUNC_4(VAR_21, VAR_1, VAR_2);
 FUNC_4(VAR_21, VAR_1, VAR_3);

 FUNC_3(VAR_21);
}
