
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {scalar_t__ rclk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
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
 int FUNC_1 (struct uart_bas*,int,int,int,int) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct uart_bas *VAR_13, int VAR_14, int VAR_15, int VAR_16,
    int VAR_17)
{

 if (VAR_13->rclk == 0)
  VAR_13->rclk = VAR_0;

 FUNC_0(VAR_13->rclk != 0, ("exynos4210_init: Invalid rclk"));

 FUNC_2(VAR_13, VAR_1, 0);
 FUNC_2(VAR_13, VAR_2,
     VAR_11 | VAR_9 |
     VAR_10 | VAR_8 |
     VAR_7);
 FUNC_1(VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);


 FUNC_2(VAR_13, VAR_1, VAR_6 | VAR_4 |
     VAR_5);
 FUNC_2(VAR_13, VAR_3, VAR_12);
}
