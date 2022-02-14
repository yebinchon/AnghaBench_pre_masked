
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tty {int dummy; } ;
struct altera_jtag_uart_softc {struct tty* ajus_ttyp; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct altera_jtag_uart_softc*) ;
 int FUNC_3 (struct altera_jtag_uart_softc*,struct tty*) ;
 int FUNC_4 (struct altera_jtag_uart_softc*,struct tty*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 struct altera_jtag_uart_softc *VAR_5 = VAR_4;
 struct tty *VAR_6 = VAR_5->ajus_ttyp;
 uint32_t VAR_7;

 FUNC_6(VAR_6);
 FUNC_0(VAR_5);
 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 & VAR_0) {
  FUNC_5(&VAR_2, 1);
  FUNC_3(VAR_5, VAR_6);
 }
 if (VAR_7 & VAR_1) {
  FUNC_5(&VAR_3, 1);
  FUNC_4(VAR_5, VAR_6);
 }
 FUNC_1(VAR_5);
 FUNC_7(VAR_6);
}
