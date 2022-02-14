
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct host_port_stats {TYPE_1__* mac_stx; } ;
struct emac_stats {int dummy; } ;
struct bxe_eth_stats {int pause_frames_sent_lo; int pause_frames_sent_hi; int pause_frames_received_lo; int pause_frames_received_hi; } ;
struct bxe_softc {struct bxe_eth_stats eth_stats; } ;
struct TYPE_4__ {int emac_stats; } ;
struct TYPE_3__ {int tx_stat_outxoffsent_lo; int tx_stat_outxoffsent_hi; int tx_stat_outxonsent_lo; int tx_stat_outxonsent_hi; int rx_stat_xoffpauseframesreceived_lo; int rx_stat_xoffpauseframesreceived_hi; int rx_stat_xonpauseframesreceived_lo; int rx_stat_xonpauseframesreceived_hi; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 void* FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (int ) ;
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

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_33)
{
    struct emac_stats *VAR_34 = FUNC_1(VAR_33, VAR_0.emac_stats);
    struct host_port_stats *VAR_35 = FUNC_1(VAR_33, VAR_1);
    struct bxe_eth_stats *VAR_36 = &VAR_33->eth_stats;

    FUNC_2(VAR_10);
    FUNC_2(VAR_30);
    FUNC_2(VAR_4);
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    FUNC_2(VAR_9);
    FUNC_2(VAR_8);
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    FUNC_2(VAR_11);
    FUNC_2(VAR_13);
    FUNC_2(VAR_14);
    FUNC_2(VAR_12);
    FUNC_2(VAR_32);
    FUNC_2(VAR_31);
    FUNC_2(VAR_29);
    FUNC_2(VAR_21);
    FUNC_2(VAR_20);
    FUNC_2(VAR_19);
    FUNC_2(VAR_15);
    FUNC_2(VAR_16);
    FUNC_2(VAR_18);
    FUNC_2(VAR_26);
    FUNC_2(VAR_27);
    FUNC_2(VAR_23);
    FUNC_2(VAR_24);
    FUNC_2(VAR_25);
    FUNC_2(VAR_22);
    FUNC_2(VAR_28);
    FUNC_2(VAR_17);

    VAR_36->pause_frames_received_hi =
        VAR_35->mac_stx[1].rx_stat_xonpauseframesreceived_hi;
    VAR_36->pause_frames_received_lo =
        VAR_35->mac_stx[1].rx_stat_xonpauseframesreceived_lo;
    FUNC_0(VAR_36->pause_frames_received_hi,
           VAR_35->mac_stx[1].rx_stat_xoffpauseframesreceived_hi,
           VAR_36->pause_frames_received_lo,
           VAR_35->mac_stx[1].rx_stat_xoffpauseframesreceived_lo);

    VAR_36->pause_frames_sent_hi =
        VAR_35->mac_stx[1].tx_stat_outxonsent_hi;
    VAR_36->pause_frames_sent_lo =
        VAR_35->mac_stx[1].tx_stat_outxonsent_lo;
    FUNC_0(VAR_36->pause_frames_sent_hi,
           VAR_35->mac_stx[1].tx_stat_outxoffsent_hi,
           VAR_36->pause_frames_sent_lo,
           VAR_35->mac_stx[1].tx_stat_outxoffsent_lo);
}
