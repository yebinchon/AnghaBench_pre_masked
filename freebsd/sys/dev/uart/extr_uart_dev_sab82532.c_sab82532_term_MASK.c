
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct uart_bas *VAR_3)
{
 uint8_t VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 switch (VAR_3->chan) {
 case 1:
  VAR_4 |= VAR_1;
  break;
 case 2:
  VAR_4 |= VAR_2;
  break;
 }
 FUNC_2(VAR_3, VAR_0, VAR_4);
 FUNC_0(VAR_3);
}
