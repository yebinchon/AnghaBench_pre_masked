
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int rclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct uart_bas *VAR_2, int VAR_3)
{
 uint32_t VAR_4, VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10;

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = ~0;


 for (VAR_5 = 4; VAR_5 <= 255; VAR_5++) {
  VAR_4 = (VAR_2->rclk + (VAR_3 * (VAR_5 + 1)) / 2) /
   (VAR_3 * (VAR_5 + 1));
  if (VAR_4 < 1 || VAR_4 > 0xffff)
   continue;

  VAR_9 = VAR_2->rclk / (VAR_4 * (VAR_5 + 1));
  VAR_10 = VAR_9 > VAR_3 ?
   VAR_9 - VAR_3 : VAR_3 - VAR_9;

  if (VAR_10 < VAR_8) {
   VAR_8 = VAR_10;
   VAR_6 = VAR_5;
   VAR_7 = VAR_4;
  }
 }

 if (VAR_6 > 0) {
  FUNC_0(VAR_2, VAR_0, VAR_6);
  FUNC_0(VAR_2, VAR_1, VAR_7);
  return (0);
 } else
  return (-1);
}
