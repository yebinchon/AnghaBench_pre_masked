
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; int rclk; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;





 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct uart_bas *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5)
{
 int VAR_6;
 uint16_t VAR_7;

 if (VAR_2 > 0) {
  VAR_6 = FUNC_2(VAR_1->rclk, VAR_2);
  if (VAR_6 == -1)
   return (VAR_0);
  FUNC_4(VAR_1, FUNC_0(VAR_1->chan - 1),
      VAR_6 | 0x10000);
 }

 VAR_7 = 0;
 switch (VAR_3) {
 case 5: VAR_7 |= 0x0000; break;
 case 6: VAR_7 |= 0x1000; break;
 case 7: VAR_7 |= 0x2000; break;
 case 8: VAR_7 |= 0x3000; break;
 default: return (VAR_0);
 }
 switch (VAR_4) {
 case 1: VAR_7 |= 0x0000; break;
 case 2: VAR_7 |= 0x4000; break;
 default: return (VAR_0);
 }
 switch (VAR_5) {
 case 132: VAR_7 |= 0x1a; break;
 case 131: VAR_7 |= 0x1f; break;
 case 130: VAR_7 |= 0x00; break;
 case 129: VAR_7 |= 0x10; break;
 case 128: VAR_7 |= 0x15; break;
 default: return (VAR_0);
 }
 FUNC_3(VAR_1, FUNC_1(VAR_1->chan - 1), VAR_7);
 return (0);
}
