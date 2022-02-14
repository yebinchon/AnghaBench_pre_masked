
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct altera_jtag_uart_softc {int ajus_flags; int ajus_ac_callout; int ajus_io_callout; int * ajus_irq_res; int ajus_unit; struct tty* ajus_ttyp; int ajus_dev; int ajus_irq_cookie; int ajus_jtag_missed; int * ajus_jtag_missedp; int ajus_jtag_present; int * ajus_jtag_presentp; int ajus_buffer_data; int * ajus_buffer_datap; int ajus_buffer_valid; int * ajus_buffer_validp; int ajus_lock; int * ajus_lockp; int ajus_mem_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct altera_jtag_uart_softc*) ;
 int FUNC_1 (struct altera_jtag_uart_softc*) ;
 int FUNC_2 (struct altera_jtag_uart_softc*) ;
 int VAR_2 ;
 int FUNC_3 (struct altera_jtag_uart_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct altera_jtag_uart_softc* VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct altera_jtag_uart_softc*) ;
 int FUNC_5 (struct altera_jtag_uart_softc*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ,int *,int,int *,int ,struct altera_jtag_uart_softc*,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int ,struct altera_jtag_uart_softc*) ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 struct tty* FUNC_11 (int *,struct altera_jtag_uart_softc*) ;
 int FUNC_12 (struct tty*,int ) ;
 int FUNC_13 (struct tty*,int *,char*,int ,int ) ;

int
FUNC_14(struct altera_jtag_uart_softc *VAR_18)
{
 struct tty *VAR_19;
 int VAR_20;

 FUNC_2(VAR_18);






 if (FUNC_10(VAR_18->ajus_mem_res) == VAR_4) {
  VAR_18->ajus_lockp = &VAR_13;
  VAR_18->ajus_buffer_validp = &VAR_10;
  VAR_18->ajus_buffer_datap = &VAR_9;
  VAR_18->ajus_jtag_presentp = &VAR_12;
  VAR_18->ajus_jtag_missedp = &VAR_11;
  VAR_18->ajus_flags |= VAR_3;
 } else {
  VAR_18->ajus_lockp = &VAR_18->ajus_lock;
  VAR_18->ajus_buffer_validp = &VAR_18->ajus_buffer_valid;
  VAR_18->ajus_buffer_datap = &VAR_18->ajus_buffer_data;
  VAR_18->ajus_jtag_presentp = &VAR_18->ajus_jtag_present;
  VAR_18->ajus_jtag_missedp = &VAR_18->ajus_jtag_missed;
 }







 FUNC_0(VAR_18);
 FUNC_4(VAR_18);
 FUNC_3(VAR_18);
 if (VAR_18->ajus_irq_res != ((void*)0)) {
  VAR_20 = FUNC_6(VAR_18->ajus_dev, VAR_18->ajus_irq_res,
      VAR_5 | VAR_7 | VAR_6, ((void*)0),
      VAR_15, VAR_18, &VAR_18->ajus_irq_cookie);
  if (VAR_20) {
   FUNC_9(VAR_18->ajus_dev,
       "could not activate interrupt\n");
   FUNC_1(VAR_18);
   return (VAR_20);
  }
 }
 VAR_19 = VAR_18->ajus_ttyp = FUNC_11(&VAR_17, VAR_18);
 if (VAR_18->ajus_flags & VAR_3) {
  VAR_14 = VAR_18;
  FUNC_12(VAR_19, 0);
 }
 FUNC_13(VAR_19, ((void*)0), "%s%d", VAR_2, VAR_18->ajus_unit);





 if (VAR_18->ajus_irq_res != ((void*)0)) {
  FUNC_0(VAR_18);
  FUNC_5(VAR_18);
  FUNC_3(VAR_18);
 } else {
  FUNC_7(&VAR_18->ajus_io_callout, 1);
  FUNC_8(&VAR_18->ajus_io_callout, VAR_1,
      VAR_16, VAR_18);
 }
 FUNC_7(&VAR_18->ajus_ac_callout, 1);
 FUNC_8(&VAR_18->ajus_ac_callout, VAR_0,
     VAR_8, VAR_18);
 return (0);
}
