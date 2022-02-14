
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc_otg_softc {int sc_current_rx_bytes; scalar_t__ sc_last_rx_status; int sc_bounce_buffer; int sc_current_rx_fifo; int sc_io_hdl; int sc_io_tag; int sc_irq_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dwc_otg_softc*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct dwc_otg_softc *VAR_2)
{
 FUNC_0(5, "RX status clear\n");


 VAR_2->sc_irq_mask |= VAR_1;
 FUNC_1(VAR_2, VAR_0, VAR_2->sc_irq_mask);

 if (VAR_2->sc_current_rx_bytes != 0) {

  FUNC_2(VAR_2->sc_io_tag, VAR_2->sc_io_hdl,
      VAR_2->sc_current_rx_fifo, VAR_2->sc_bounce_buffer,
      VAR_2->sc_current_rx_bytes / 4);

  VAR_2->sc_current_rx_bytes = 0;
 }

 VAR_2->sc_last_rx_status = 0;
}
