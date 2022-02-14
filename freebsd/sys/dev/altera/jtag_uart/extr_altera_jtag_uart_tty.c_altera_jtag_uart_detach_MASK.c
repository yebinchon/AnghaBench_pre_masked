
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct altera_jtag_uart_softc {int ajus_flags; int ajus_ac_callout; int ajus_io_callout; int ajus_irq_cookie; int * ajus_irq_res; int ajus_dev; struct tty* ajus_ttyp; } ;


 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int FUNC_2 (struct altera_jtag_uart_softc*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (struct altera_jtag_uart_softc*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tty*) ;
 int FUNC_7 (struct tty*) ;

void
FUNC_8(struct altera_jtag_uart_softc *VAR_2)
{
 struct tty *VAR_3 = VAR_2->ajus_ttyp;





 if (VAR_2->ajus_irq_res != ((void*)0)) {
  FUNC_0(VAR_2);
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
  FUNC_4(VAR_2->ajus_dev, VAR_2->ajus_irq_res,
      VAR_2->ajus_irq_cookie);
 } else
  FUNC_5(&VAR_2->ajus_io_callout);
 FUNC_5(&VAR_2->ajus_ac_callout);
 if (VAR_2->ajus_flags & VAR_0)
  VAR_1 = ((void*)0);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);
 FUNC_1(VAR_2);
}
