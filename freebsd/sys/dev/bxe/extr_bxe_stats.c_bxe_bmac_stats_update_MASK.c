
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct host_port_stats {int pfc_frames_tx_lo; int pfc_frames_tx_hi; int pfc_frames_rx_lo; int pfc_frames_rx_hi; TYPE_1__* mac_stx; } ;
struct bxe_fw_port_stats_old {int pfc_frames_rx_lo; int pfc_frames_rx_hi; int pfc_frames_tx_lo; int pfc_frames_tx_hi; } ;
struct bxe_eth_stats {int pfc_frames_sent_lo; int pfc_frames_sent_hi; int pfc_frames_received_lo; int pfc_frames_received_hi; int pause_frames_sent_lo; int pause_frames_sent_hi; int pause_frames_received_lo; int pause_frames_received_hi; } ;
struct bxe_softc {struct bxe_fw_port_stats_old fw_stats_old; struct bxe_eth_stats eth_stats; } ;
struct bmac2_stats {int rx_stat_grpp_lo; int rx_stat_grpp_hi; int tx_stat_gtpp_lo; int tx_stat_gtpp_hi; } ;
struct bmac1_stats {int dummy; } ;
struct TYPE_4__ {int bmac2_stats; int bmac1_stats; } ;
struct TYPE_3__ {int tx_stat_outxoffsent_lo; int tx_stat_outxoffsent_hi; int rx_stat_mac_xpf_lo; int rx_stat_mac_xpf_hi; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 void* FUNC_1 (struct bxe_softc*,int ) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_0 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;

__attribute__((used)) static void
FUNC_4(struct bxe_softc *VAR_46)
{
    struct host_port_stats *VAR_47 = FUNC_1(VAR_46, VAR_1);
    struct bxe_eth_stats *VAR_48 = &VAR_46->eth_stats;
    struct {
        uint32_t lo;
        uint32_t hi;
    } VAR_49;

    if (FUNC_2(VAR_46)) {
        struct bmac1_stats *VAR_50 = FUNC_1(VAR_46, VAR_0.bmac1_stats);


        FUNC_3(VAR_7, VAR_15);
        FUNC_3(VAR_8, VAR_2);
        FUNC_3(VAR_12, VAR_6);
        FUNC_3(VAR_11, VAR_3);
        FUNC_3(VAR_9, VAR_4);
        FUNC_3(VAR_10, VAR_5);
        FUNC_3(VAR_13, VAR_17);
        FUNC_3(VAR_14, VAR_18);
        FUNC_3(VAR_14, VAR_16);

        FUNC_3(VAR_39, VAR_45);
        FUNC_3(VAR_39, VAR_26);
        FUNC_3(VAR_35, VAR_24);
        FUNC_3(VAR_28,
                      VAR_25);
        FUNC_3(VAR_32,
                      VAR_21);
        FUNC_3(VAR_34,
                      VAR_22);
        FUNC_3(VAR_27,
                      VAR_23);
        FUNC_3(VAR_29,
                      VAR_20);
        FUNC_3(VAR_31, VAR_41);
        FUNC_3(VAR_33, VAR_42);
        FUNC_3(VAR_36, VAR_43);
        FUNC_3(VAR_30, VAR_40);
        FUNC_3(VAR_37,
                      VAR_19);
        FUNC_3(VAR_38, VAR_44);
    } else {
        struct bmac2_stats *VAR_51 = FUNC_1(VAR_46, VAR_0.bmac2_stats);
        struct bxe_fw_port_stats_old *VAR_52 = &VAR_46->fw_stats_old;


        FUNC_3(VAR_7, VAR_15);
        FUNC_3(VAR_8, VAR_2);
        FUNC_3(VAR_12, VAR_6);
        FUNC_3(VAR_11, VAR_3);
        FUNC_3(VAR_9, VAR_4);
        FUNC_3(VAR_10, VAR_5);
        FUNC_3(VAR_13, VAR_17);
        FUNC_3(VAR_14, VAR_18);
        FUNC_3(VAR_14, VAR_16);
        FUNC_3(VAR_39, VAR_45);
        FUNC_3(VAR_39, VAR_26);
        FUNC_3(VAR_35, VAR_24);
        FUNC_3(VAR_28,
                      VAR_25);
        FUNC_3(VAR_32,
                      VAR_21);
        FUNC_3(VAR_34,
                      VAR_22);
        FUNC_3(VAR_27,
                      VAR_23);
        FUNC_3(VAR_29,
                      VAR_20);
        FUNC_3(VAR_31, VAR_41);
        FUNC_3(VAR_33, VAR_42);
        FUNC_3(VAR_36, VAR_43);
        FUNC_3(VAR_30, VAR_40);
        FUNC_3(VAR_37,
                      VAR_19);
        FUNC_3(VAR_38, VAR_44);


        VAR_47->pfc_frames_tx_hi = VAR_51->tx_stat_gtpp_hi;
        VAR_47->pfc_frames_tx_lo = VAR_51->tx_stat_gtpp_lo;
        FUNC_0(VAR_47->pfc_frames_tx_hi, VAR_52->pfc_frames_tx_hi,
               VAR_47->pfc_frames_tx_lo, VAR_52->pfc_frames_tx_lo);

        VAR_47->pfc_frames_rx_hi = VAR_51->rx_stat_grpp_hi;
        VAR_47->pfc_frames_rx_lo = VAR_51->rx_stat_grpp_lo;
        FUNC_0(VAR_47->pfc_frames_rx_hi, VAR_52->pfc_frames_rx_hi,
               VAR_47->pfc_frames_rx_lo, VAR_52->pfc_frames_rx_lo);
    }

    VAR_48->pause_frames_received_hi = VAR_47->mac_stx[1].rx_stat_mac_xpf_hi;
    VAR_48->pause_frames_received_lo = VAR_47->mac_stx[1].rx_stat_mac_xpf_lo;

    VAR_48->pause_frames_sent_hi = VAR_47->mac_stx[1].tx_stat_outxoffsent_hi;
    VAR_48->pause_frames_sent_lo = VAR_47->mac_stx[1].tx_stat_outxoffsent_lo;

    VAR_48->pfc_frames_received_hi = VAR_47->pfc_frames_rx_hi;
    VAR_48->pfc_frames_received_lo = VAR_47->pfc_frames_rx_lo;
    VAR_48->pfc_frames_sent_hi = VAR_47->pfc_frames_tx_hi;
    VAR_48->pfc_frames_sent_lo = VAR_47->pfc_frames_tx_lo;
}
