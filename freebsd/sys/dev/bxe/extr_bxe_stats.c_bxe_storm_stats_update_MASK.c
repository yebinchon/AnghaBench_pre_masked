
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct xstorm_per_queue_stats {int ucast_bytes_sent; int mcast_bytes_sent; int bcast_bytes_sent; int mcast_pkts_sent; int bcast_pkts_sent; int ucast_pkts_sent; } ;
struct ustorm_per_queue_stats {int coalesced_bytes; } ;
struct tstorm_per_queue_stats {int rcv_ucast_bytes; int rcv_mcast_bytes; int rcv_bcast_bytes; } ;
struct tstorm_per_port_stats {int dummy; } ;
struct TYPE_7__ {int lo; int hi; } ;
struct tstorm_per_pf_stats {TYPE_1__ rcv_error_bytes; } ;
struct host_func_stats {scalar_t__ host_func_stats_end; scalar_t__ host_func_stats_start; } ;
struct bxe_fw_port_stats_old {int dummy; } ;
struct TYPE_8__ {scalar_t__ pmf; } ;
struct bxe_eth_stats_old {int dummy; } ;
struct bxe_eth_stats {int rx_stat_ifhcinbadoctets_lo; scalar_t__ error_bytes_received_lo; int rx_stat_ifhcinbadoctets_hi; scalar_t__ error_bytes_received_hi; scalar_t__ total_bytes_received_lo; scalar_t__ total_bytes_received_hi; } ;
struct bxe_softc {int num_queues; scalar_t__ stats_pending; struct bxe_fw_port_stats_old fw_stats_old; TYPE_2__ port; TYPE_6__* fw_stats_data; struct bxe_fastpath* fp; struct bxe_eth_stats_old eth_stats_old; struct bxe_eth_stats eth_stats; struct host_func_stats func_stats; } ;
struct bxe_eth_q_stats_old {int dummy; } ;
struct bxe_eth_q_stats {int total_multicast_bytes_transmitted_lo; scalar_t__ total_bytes_transmitted_lo; int total_multicast_bytes_transmitted_hi; scalar_t__ total_bytes_transmitted_hi; int total_broadcast_bytes_transmitted_lo; int total_broadcast_bytes_transmitted_hi; scalar_t__ total_unicast_bytes_transmitted_lo; scalar_t__ total_unicast_bytes_transmitted_hi; scalar_t__ total_bytes_received_lo; scalar_t__ valid_bytes_received_lo; scalar_t__ total_bytes_received_hi; scalar_t__ valid_bytes_received_hi; int total_unicast_bytes_received_lo; int total_unicast_bytes_received_hi; int total_multicast_bytes_received_lo; int total_multicast_bytes_received_hi; scalar_t__ total_broadcast_bytes_received_lo; scalar_t__ total_broadcast_bytes_received_hi; } ;
struct bxe_fastpath {struct bxe_eth_q_stats_old eth_q_stats_old; struct bxe_eth_q_stats eth_q_stats; struct xstorm_per_queue_stats old_xclient; struct ustorm_per_queue_stats old_uclient; struct tstorm_per_queue_stats old_tclient; } ;
struct TYPE_10__ {struct tstorm_per_pf_stats tstorm_pf_statistics; } ;
struct TYPE_9__ {struct tstorm_per_port_stats tstorm_port_statistics; } ;
struct TYPE_12__ {TYPE_5__* queue_stats; TYPE_4__ pf; TYPE_3__ port; } ;
struct TYPE_11__ {struct xstorm_per_queue_stats xstorm_queue_statistics; struct ustorm_per_queue_stats ustorm_queue_statistics; struct tstorm_per_queue_stats tstorm_queue_statistics; } ;


 int FUNC_0 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_14 (struct bxe_softc*) ;
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

__attribute__((used)) static int
FUNC_15(struct bxe_softc *VAR_45)
{
    struct tstorm_per_port_stats *VAR_46 =
        &VAR_45->fw_stats_data->port.tstorm_port_statistics;
    struct tstorm_per_pf_stats *VAR_47 =
        &VAR_45->fw_stats_data->pf.tstorm_pf_statistics;
    struct host_func_stats *VAR_48 = &VAR_45->func_stats;
    struct bxe_eth_stats *VAR_49 = &VAR_45->eth_stats;
    struct bxe_eth_stats_old *VAR_50 = &VAR_45->eth_stats_old;
    int VAR_51;


    if (FUNC_3(VAR_45) && FUNC_14(VAR_45)) {
        return (-VAR_1);
    }

    VAR_49->error_bytes_received_hi = 0;
    VAR_49->error_bytes_received_lo = 0;

    for (VAR_51 = 0; VAR_51 < VAR_45->num_queues; VAR_51++) {
        struct bxe_fastpath *VAR_52 = &VAR_45->fp[VAR_51];
        struct tstorm_per_queue_stats *VAR_53 =
            &VAR_45->fw_stats_data->queue_stats[VAR_51].tstorm_queue_statistics;
        struct tstorm_per_queue_stats *VAR_54 = &VAR_52->old_tclient;
        struct ustorm_per_queue_stats *VAR_55 =
            &VAR_45->fw_stats_data->queue_stats[VAR_51].ustorm_queue_statistics;
        struct ustorm_per_queue_stats *VAR_56 = &VAR_52->old_uclient;
        struct xstorm_per_queue_stats *VAR_57 =
            &VAR_45->fw_stats_data->queue_stats[VAR_51].xstorm_queue_statistics;
        struct xstorm_per_queue_stats *VAR_58 = &VAR_52->old_xclient;
        struct bxe_eth_q_stats *VAR_59 = &VAR_52->eth_q_stats;
        struct bxe_eth_q_stats_old *VAR_60 = &VAR_52->eth_q_stats_old;

        uint32_t VAR_61;

        FUNC_2(VAR_45, VAR_0,
              "queue[%d]: ucast_sent 0x%x bcast_sent 0x%x mcast_sent 0x%x\n",
              VAR_51, VAR_57->ucast_pkts_sent, VAR_57->bcast_pkts_sent,
              VAR_57->mcast_pkts_sent);

        FUNC_2(VAR_45, VAR_0, "---------------\n");

        FUNC_13(VAR_53->rcv_bcast_bytes,
                     VAR_21);
        FUNC_13(VAR_53->rcv_mcast_bytes,
                     VAR_27);
        FUNC_13(VAR_53->rcv_ucast_bytes,
                     VAR_37);





        VAR_59->total_bytes_received_hi =
            VAR_59->total_broadcast_bytes_received_hi;
        VAR_59->total_bytes_received_lo =
            VAR_59->total_broadcast_bytes_received_lo;

        FUNC_0(VAR_59->total_bytes_received_hi,
               VAR_59->total_multicast_bytes_received_hi,
               VAR_59->total_bytes_received_lo,
               VAR_59->total_multicast_bytes_received_lo);

        FUNC_0(VAR_59->total_bytes_received_hi,
               VAR_59->total_unicast_bytes_received_hi,
               VAR_59->total_bytes_received_lo,
               VAR_59->total_unicast_bytes_received_lo);

        VAR_59->valid_bytes_received_hi = VAR_59->total_bytes_received_hi;
        VAR_59->valid_bytes_received_lo = VAR_59->total_bytes_received_lo;

        FUNC_9(VAR_19, VAR_39);
        FUNC_9(VAR_18, VAR_29);
        FUNC_9(VAR_17, VAR_23);
        FUNC_7(VAR_16,
                              VAR_9, 32);
        FUNC_7(VAR_15, VAR_15, 16);

        FUNC_4(VAR_42, VAR_39);
        FUNC_4(VAR_12,
                         VAR_29);
        FUNC_4(VAR_2,
                         VAR_23);
        FUNC_8(VAR_42, VAR_15);
        FUNC_8(VAR_12, VAR_15);
        FUNC_8(VAR_2, VAR_15);

        FUNC_13(VAR_57->bcast_bytes_sent,
                     VAR_22);
        FUNC_13(VAR_57->mcast_bytes_sent,
                     VAR_28);
        FUNC_13(VAR_57->ucast_bytes_sent,
                     VAR_38);





        VAR_59->total_bytes_transmitted_hi =
            VAR_59->total_unicast_bytes_transmitted_hi;
        VAR_59->total_bytes_transmitted_lo =
            VAR_59->total_unicast_bytes_transmitted_lo;

        FUNC_0(VAR_59->total_bytes_transmitted_hi,
               VAR_59->total_broadcast_bytes_transmitted_hi,
               VAR_59->total_bytes_transmitted_lo,
               VAR_59->total_broadcast_bytes_transmitted_lo);

        FUNC_0(VAR_59->total_bytes_transmitted_hi,
               VAR_59->total_multicast_bytes_transmitted_hi,
               VAR_59->total_bytes_transmitted_lo,
               VAR_59->total_multicast_bytes_transmitted_lo);

        FUNC_10(VAR_43,
                            VAR_40);
        FUNC_10(VAR_13,
                            VAR_30);
        FUNC_10(VAR_3,
                            VAR_24);

        FUNC_9(VAR_5,
                            VAR_31);
        FUNC_9(VAR_41,
                            VAR_32);

        FUNC_10(VAR_8,
                            VAR_36);


        FUNC_8(VAR_6, VAR_34);

        FUNC_8(VAR_7, VAR_33);

        FUNC_13(VAR_55->coalesced_bytes, VAR_35);

        FUNC_6(VAR_35);

        FUNC_11(VAR_25);
        FUNC_11(VAR_26);
        FUNC_11(VAR_39);
        FUNC_11(VAR_29);
        FUNC_11(VAR_23);
        FUNC_11(VAR_40);
        FUNC_11(VAR_30);
        FUNC_11(VAR_24);
        FUNC_11(VAR_44);
    }

    FUNC_0(VAR_49->total_bytes_received_hi,
           VAR_49->rx_stat_ifhcinbadoctets_hi,
           VAR_49->total_bytes_received_lo,
           VAR_49->rx_stat_ifhcinbadoctets_lo);

    FUNC_1(VAR_49->total_bytes_received_hi,
              VAR_47->rcv_error_bytes.hi,
              VAR_49->total_bytes_received_lo,
              VAR_47->rcv_error_bytes.lo);

    FUNC_1(VAR_49->error_bytes_received_hi,
              VAR_47->rcv_error_bytes.hi,
              VAR_49->error_bytes_received_lo,
              VAR_47->rcv_error_bytes.lo);

    FUNC_5(VAR_9, VAR_20);

    FUNC_0(VAR_49->error_bytes_received_hi,
           VAR_49->rx_stat_ifhcinbadoctets_hi,
           VAR_49->error_bytes_received_lo,
           VAR_49->rx_stat_ifhcinbadoctets_lo);

    if (VAR_45->port.pmf) {
        struct bxe_fw_port_stats_old *VAR_62 = &VAR_45->fw_stats_old;
        FUNC_12(VAR_11);
        FUNC_12(VAR_14);
        FUNC_12(VAR_4);
        FUNC_12(VAR_10);
    }

    VAR_48->host_func_stats_start = ++VAR_48->host_func_stats_end;

    VAR_45->stats_pending = 0;

    return (0);
}
