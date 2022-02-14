
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {scalar_t__ rclk; scalar_t__ chan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct uart_bas*,int,int,int,int) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct uart_bas *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5)
{

 if (VAR_1->rclk == 0)
  VAR_1->rclk = VAR_0;





 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_3(VAR_1, FUNC_0(VAR_1->chan - 1), ~0);
 FUNC_3(VAR_1, FUNC_1(VAR_1->chan - 1), 0x0027);
}
