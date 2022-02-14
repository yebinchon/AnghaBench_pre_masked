
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int rclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*,int ) ;

__attribute__((used)) static int
FUNC_1(struct uart_bas *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 uint8_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 VAR_7 = FUNC_0(VAR_2, VAR_0);
 VAR_5 = (VAR_6 & 0x3f) + 1;
 VAR_4 = (VAR_6 >> 6) | ((VAR_7 >> 4) & 0xC);
 VAR_3 = VAR_5 * (1<<VAR_4);


 return (16000000 * VAR_3 / VAR_2->rclk);
}
