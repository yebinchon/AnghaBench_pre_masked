
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uart_bas {int rclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_bas *VAR_4)
{
 int VAR_5;
 u_char VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_3, VAR_6 | VAR_0);
 FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_4, VAR_2) | (FUNC_1(VAR_4, VAR_1) << 8);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4, VAR_3, VAR_6);
 FUNC_0(VAR_4);


 if (VAR_5 <= 134)
  return (16000000 * VAR_5 / VAR_4->rclk);
 return (16000 * VAR_5 / (VAR_4->rclk / 1000));
}
