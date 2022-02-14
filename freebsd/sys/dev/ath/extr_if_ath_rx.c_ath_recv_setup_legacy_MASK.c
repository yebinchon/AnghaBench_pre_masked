
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int recv_sched_queue; int recv_sched; int recv_teardown; int recv_setup; int recv_rxbuf_init; int recv_tasklet; int recv_flush; int recv_stop; int recv_start; } ;
struct ath_softc {int sc_rx_statuslen; TYPE_1__ sc_rx; } ;
struct ath_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_0(struct ath_softc *VAR_9)
{






 VAR_9->sc_rx_statuslen = sizeof(struct ath_desc);

 VAR_9->sc_rx.recv_start = VAR_7;
 VAR_9->sc_rx.recv_stop = VAR_8;
 VAR_9->sc_rx.recv_flush = VAR_2;
 VAR_9->sc_rx.recv_tasklet = VAR_5;
 VAR_9->sc_rx.recv_rxbuf_init = VAR_6;

 VAR_9->sc_rx.recv_setup = VAR_0;
 VAR_9->sc_rx.recv_teardown = VAR_1;
 VAR_9->sc_rx.recv_sched = VAR_3;
 VAR_9->sc_rx.recv_sched_queue = VAR_4;
}
