
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recv_sched_queue; int recv_sched; int recv_teardown; int recv_setup; int recv_rxbuf_init; int recv_tasklet; int recv_flush; int recv_start; int recv_stop; } ;
struct ath_softc {int sc_edma_bufsize; int sc_rx_statuslen; TYPE_1__ sc_rx; int sc_dev; int sc_ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*,int) ;

void
FUNC_3(struct ath_softc *VAR_10)
{


 VAR_10->sc_edma_bufsize = 4096;


 (void) FUNC_0(VAR_10->sc_ah, &VAR_10->sc_rx_statuslen);


 (void) FUNC_1(VAR_10->sc_ah, VAR_10->sc_edma_bufsize -
     VAR_10->sc_rx_statuslen);

 if (VAR_9) {
  FUNC_2(VAR_10->sc_dev, "RX status length: %d\n",
      VAR_10->sc_rx_statuslen);
  FUNC_2(VAR_10->sc_dev, "RX buffer size: %d\n",
      VAR_10->sc_edma_bufsize);
 }

 VAR_10->sc_rx.recv_stop = VAR_8;
 VAR_10->sc_rx.recv_start = VAR_7;
 VAR_10->sc_rx.recv_flush = VAR_2;
 VAR_10->sc_rx.recv_tasklet = VAR_5;
 VAR_10->sc_rx.recv_rxbuf_init = VAR_6;

 VAR_10->sc_rx.recv_setup = VAR_0;
 VAR_10->sc_rx.recv_teardown = VAR_1;

 VAR_10->sc_rx.recv_sched = VAR_3;
 VAR_10->sc_rx.recv_sched_queue = VAR_4;
}
