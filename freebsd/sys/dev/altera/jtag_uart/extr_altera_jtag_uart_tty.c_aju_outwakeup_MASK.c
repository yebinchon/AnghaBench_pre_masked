
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct altera_jtag_uart_softc {int dummy; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct altera_jtag_uart_softc*,struct tty*) ;
 int FUNC_3 (struct tty*,int ) ;
 struct altera_jtag_uart_softc* FUNC_4 (struct tty*) ;

__attribute__((used)) static void
FUNC_5(struct tty *VAR_1)
{
 struct altera_jtag_uart_softc *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1, VAR_0);

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2);
}
