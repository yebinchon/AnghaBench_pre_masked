
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct altera_jtag_uart_softc {int ajus_flags; int ajus_alt_break_state; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int FUNC_2 (struct altera_jtag_uart_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct altera_jtag_uart_softc*) ;
 scalar_t__ FUNC_4 (struct altera_jtag_uart_softc*) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct tty*,int ) ;
 int FUNC_7 (struct tty*,int,int ) ;
 int FUNC_8 (struct tty*) ;

__attribute__((used)) static void
FUNC_9(struct altera_jtag_uart_softc *VAR_2, struct tty *VAR_3)
{
 int VAR_4;

 FUNC_6(VAR_3, VAR_1);
 FUNC_1(VAR_2);

 while (FUNC_4(VAR_2)) {
  VAR_4 = FUNC_3(VAR_2);
  FUNC_2(VAR_2);




  FUNC_7(VAR_3, VAR_4, 0);
  FUNC_0(VAR_2);
 }
 FUNC_2(VAR_2);
 FUNC_8(VAR_3);
 FUNC_0(VAR_2);
}
