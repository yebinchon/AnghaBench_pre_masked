
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nig_stats {int dummy; } ;
struct host_func_stats {int dummy; } ;
struct TYPE_10__ {int egress_mac_pkt1_lo; int egress_mac_pkt0_lo; void* brb_truncate; void* brb_discard; } ;
struct TYPE_8__ {void* port_stx; scalar_t__ pmf; TYPE_4__ old_nig_stats; } ;
struct bxe_softc {int num_queues; scalar_t__ stats_init; TYPE_2__ port; int stats_state; void* func_stx; TYPE_4__ func_stats; TYPE_4__ eth_stats; TYPE_4__ eth_stats_old; TYPE_4__ fw_stats_old; TYPE_4__ net_stats_old; TYPE_1__* fp; scalar_t__ stats_counter; scalar_t__ executer_idx; scalar_t__ stats_pending; } ;
struct TYPE_11__ {int fw_mb_param; } ;
struct TYPE_9__ {int port_stx; } ;
struct TYPE_7__ {TYPE_4__ eth_q_stats_old; TYPE_4__ eth_q_stats; TYPE_4__ old_xclient; TYPE_4__ old_uclient; TYPE_4__ old_tclient; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,void*,void*) ;
 int FUNC_1 (struct bxe_softc*) ;
 TYPE_4__* FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_4 (struct bxe_softc*,scalar_t__) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int *,int) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 void* FUNC_8 (struct bxe_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (struct bxe_softc*) ;
 int FUNC_12 (struct bxe_softc*) ;
 int FUNC_13 (struct bxe_softc*) ;
 int FUNC_14 (struct bxe_softc*,int ) ;
 TYPE_5__* VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (TYPE_4__*,int ,int) ;
 TYPE_3__* VAR_10 ;

void
FUNC_16(struct bxe_softc *VAR_11)
{
    int VAR_12 = FUNC_7(VAR_11);
    int VAR_13 = FUNC_6(VAR_11);
    int VAR_14;

    VAR_11->stats_pending = 0;
    VAR_11->executer_idx = 0;
    VAR_11->stats_counter = 0;


    if (!FUNC_1(VAR_11)) {
        VAR_11->port.port_stx = FUNC_8(VAR_11, VAR_10[VAR_12].port_stx);
        VAR_11->func_stx = FUNC_8(VAR_11, VAR_8[VAR_13].fw_mb_param);
    } else {
        VAR_11->port.port_stx = 0;
        VAR_11->func_stx = 0;
    }

    FUNC_0(VAR_11, VAR_0, "port_stx 0x%x func_stx 0x%x\n",
          VAR_11->port.port_stx, VAR_11->func_stx);


    if (!VAR_11->stats_init && VAR_11->port.pmf && VAR_11->port.port_stx) {
        FUNC_14(VAR_11, VAR_6);
    }

    VAR_12 = FUNC_7(VAR_11);

    FUNC_15(&(VAR_11->port.old_nig_stats), 0, sizeof(struct nig_stats));
    VAR_11->port.old_nig_stats.brb_discard =
        FUNC_4(VAR_11, VAR_2 + VAR_12*0x38);
    VAR_11->port.old_nig_stats.brb_truncate =
        FUNC_4(VAR_11, VAR_3 + VAR_12*0x38);
    if (!FUNC_3(VAR_11)) {
        FUNC_5(VAR_11, VAR_4 + VAR_12*0x50,
                    &(VAR_11->port.old_nig_stats.egress_mac_pkt0_lo), 2);
        FUNC_5(VAR_11, VAR_5 + VAR_12*0x50,
                    &(VAR_11->port.old_nig_stats.egress_mac_pkt1_lo), 2);
    }


    for (VAR_14 = 0; VAR_14 < VAR_11->num_queues; VAR_14++) {
        FUNC_15(&VAR_11->fp[VAR_14].old_tclient, 0, sizeof(VAR_11->fp[VAR_14].old_tclient));
        FUNC_15(&VAR_11->fp[VAR_14].old_uclient, 0, sizeof(VAR_11->fp[VAR_14].old_uclient));
        FUNC_15(&VAR_11->fp[VAR_14].old_xclient, 0, sizeof(VAR_11->fp[VAR_14].old_xclient));
        if (VAR_11->stats_init) {
            FUNC_15(&VAR_11->fp[VAR_14].eth_q_stats, 0,
                   sizeof(VAR_11->fp[VAR_14].eth_q_stats));
            FUNC_15(&VAR_11->fp[VAR_14].eth_q_stats_old, 0,
                   sizeof(VAR_11->fp[VAR_14].eth_q_stats_old));
        }
    }


    FUNC_12(VAR_11);

    if (VAR_11->stats_init) {
        FUNC_15(&VAR_11->net_stats_old, 0, sizeof(VAR_11->net_stats_old));
        FUNC_15(&VAR_11->fw_stats_old, 0, sizeof(VAR_11->fw_stats_old));
        FUNC_15(&VAR_11->eth_stats_old, 0, sizeof(VAR_11->eth_stats_old));
        FUNC_15(&VAR_11->eth_stats, 0, sizeof(VAR_11->eth_stats));
        FUNC_15(&VAR_11->func_stats, 0, sizeof(VAR_11->func_stats));


        if (VAR_11->func_stx) {
            FUNC_15(FUNC_2(VAR_11, VAR_9), 0, sizeof(struct host_func_stats));
            FUNC_9(VAR_11);
            FUNC_10(VAR_11);
            FUNC_13(VAR_11);
        }
    }

    VAR_11->stats_state = VAR_7;

    if (VAR_11->port.pmf && VAR_11->port.port_stx) {
        FUNC_11(VAR_11);
    }


    VAR_11->stats_init = VAR_1;
}
