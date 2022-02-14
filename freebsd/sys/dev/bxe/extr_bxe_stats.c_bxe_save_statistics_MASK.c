
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host_port_stats {int pfc_frames_tx_lo; int pfc_frames_tx_hi; int pfc_frames_rx_lo; int pfc_frames_rx_hi; } ;
struct bxe_fw_port_stats_old {int pfc_frames_tx_lo; int pfc_frames_tx_hi; int pfc_frames_rx_lo; int pfc_frames_rx_hi; } ;
struct bxe_eth_stats {int dummy; } ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bxe_softc {int num_queues; struct bxe_fw_port_stats_old fw_stats_old; struct bxe_eth_stats eth_stats; TYPE_1__ port; struct bxe_fastpath* fp; } ;
struct bxe_eth_q_stats_old {int dummy; } ;
struct bxe_eth_q_stats {int dummy; } ;
struct bxe_fastpath {struct bxe_eth_q_stats_old eth_q_stats_old; struct bxe_eth_q_stats eth_q_stats; } ;


 struct host_port_stats* FUNC_0 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void
FUNC_4(struct bxe_softc *VAR_19)
{
    int VAR_20;


    for (VAR_20 = 0; VAR_20 < VAR_19->num_queues; VAR_20++) {
        struct bxe_fastpath *VAR_21 = &VAR_19->fp[VAR_20];
        struct bxe_eth_q_stats *VAR_22 = &VAR_21->eth_q_stats;
        struct bxe_eth_q_stats_old *VAR_23 = &VAR_21->eth_q_stats_old;

        FUNC_3(VAR_15);
        FUNC_3(VAR_16);
        FUNC_3(VAR_5);
        FUNC_3(VAR_6);
        FUNC_3(VAR_9);
        FUNC_3(VAR_10);
        FUNC_3(VAR_17);
        FUNC_3(VAR_18);
        FUNC_3(VAR_7);
        FUNC_3(VAR_8);
        FUNC_3(VAR_11);
        FUNC_3(VAR_12);
        FUNC_3(VAR_13);
        FUNC_3(VAR_14);
    }


    if (VAR_19->port.pmf) {
        struct bxe_eth_stats *VAR_24 = &VAR_19->eth_stats;
        struct bxe_fw_port_stats_old *VAR_25 = &VAR_19->fw_stats_old;
        struct host_port_stats *VAR_26 = FUNC_0(VAR_19, VAR_4);

        VAR_25->pfc_frames_rx_hi = VAR_26->pfc_frames_rx_hi;
        VAR_25->pfc_frames_rx_lo = VAR_26->pfc_frames_rx_lo;
        VAR_25->pfc_frames_tx_hi = VAR_26->pfc_frames_tx_hi;
        VAR_25->pfc_frames_tx_lo = VAR_26->pfc_frames_tx_lo;

        if (FUNC_1(VAR_19)) {
            FUNC_2(VAR_2);
            FUNC_2(VAR_3);
            FUNC_2(VAR_0);
            FUNC_2(VAR_1);
        }
    }
}
