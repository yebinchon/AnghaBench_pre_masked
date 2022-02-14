
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {int chan; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct uart_bas *VAR_0, int VAR_1)
{
 int VAR_2;
 uint16_t VAR_3;

 VAR_2 = VAR_0->chan - 1;
 while (FUNC_2(VAR_0, FUNC_1(VAR_2)) & 0x2000)
  FUNC_0(10);

 VAR_3 = 0x2000 | (VAR_1 & 0xff);
 FUNC_3(VAR_0, FUNC_1(VAR_2), VAR_3);
}
