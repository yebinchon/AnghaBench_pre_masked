
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tty {int dummy; } ;
struct altera_jtag_uart_softc {int* ajus_jtag_presentp; scalar_t__* ajus_jtag_missedp; int ajus_ac_callout; struct tty* ajus_ttyp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct altera_jtag_uart_softc*) ;
 int FUNC_3 (struct altera_jtag_uart_softc*,int) ;
 int FUNC_4 (struct altera_jtag_uart_softc*,struct tty*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,void (*) (void*),struct altera_jtag_uart_softc*) ;
 int FUNC_7 (struct tty*) ;
 int FUNC_8 (struct tty*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_5)
{
 struct altera_jtag_uart_softc *VAR_6 = VAR_5;
 struct tty *VAR_7 = VAR_6->ajus_ttyp;
 uint32_t VAR_8;

 FUNC_7(VAR_7);
 FUNC_0(VAR_6);
 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 & VAR_2) {
  VAR_8 &= ~VAR_2;
  FUNC_3(VAR_6, VAR_8);
  if (*VAR_6->ajus_jtag_presentp == 0) {
   *VAR_6->ajus_jtag_presentp = 1;
   FUNC_5(&VAR_3, 1);
   FUNC_4(VAR_6, VAR_7);
  }


  *VAR_6->ajus_jtag_missedp = 0;
 } else if (*VAR_6->ajus_jtag_presentp != 0) {





  if (*VAR_6->ajus_jtag_missedp > VAR_1) {
   *VAR_6->ajus_jtag_presentp = 0;
   FUNC_5(&VAR_4, 1);
   FUNC_4(VAR_6, VAR_7);
  } else
   (*VAR_6->ajus_jtag_missedp)++;
 }
 FUNC_6(&VAR_6->ajus_ac_callout, VAR_0,
     FUNC_9, VAR_6);
 FUNC_1(VAR_6);
 FUNC_8(VAR_7);
}
