
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uart_bas {scalar_t__ rclk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int,int,int,int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct uart_bas *VAR_8, int VAR_9, int VAR_10, int VAR_11,
    int VAR_12)
{
 u_char VAR_13, VAR_14;

 if (VAR_8->rclk == 0)
  VAR_8->rclk = VAR_0;
 FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);







 VAR_13 = FUNC_3(VAR_8, VAR_6) & 0xe0;
 FUNC_4(VAR_8, VAR_6, VAR_13);
 FUNC_2(VAR_8);


 VAR_14 = 0;



 FUNC_4(VAR_8, VAR_5, VAR_14);
 FUNC_2(VAR_8);


 FUNC_4(VAR_8, VAR_7, VAR_3 | VAR_4 | VAR_2);
 FUNC_2(VAR_8);

 FUNC_0(VAR_8);
}
