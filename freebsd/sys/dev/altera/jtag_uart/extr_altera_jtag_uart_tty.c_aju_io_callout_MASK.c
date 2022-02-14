
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct altera_jtag_uart_softc {int ajus_io_callout; struct tty* ajus_ttyp; } ;


 int VAR_0 ;
 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int FUNC_2 (struct altera_jtag_uart_softc*,struct tty*) ;
 int FUNC_3 (struct altera_jtag_uart_softc*,struct tty*) ;
 int FUNC_4 (int *,int ,void (*) (void*),struct altera_jtag_uart_softc*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct altera_jtag_uart_softc *VAR_2 = VAR_1;
 struct tty *VAR_3 = VAR_2->ajus_ttyp;

 FUNC_5(VAR_3);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3);







 FUNC_4(&VAR_2->ajus_io_callout, VAR_0,
     FUNC_7, VAR_2);
 FUNC_1(VAR_2);
 FUNC_6(VAR_3);
}
