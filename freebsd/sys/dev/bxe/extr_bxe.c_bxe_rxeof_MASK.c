
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct eth_fast_path_rx_cqe {size_t type_error_flags; int status_flags; size_t placement_offset; int vlan_tag; TYPE_1__ pars_flags; int len_on_bd; int pkt_len_or_gro_seg_len; int queue_index; int rss_hash_result; } ;
struct TYPE_8__ {size_t queue_index; int sgl_or_raw_data; int pkt_len; } ;
union eth_rx_cqe {struct eth_fast_path_rx_cqe fast_path_cqe; TYPE_4__ end_agg_cqe; } ;
typedef size_t uint8_t ;
typedef size_t uint16_t ;
struct TYPE_6__ {size_t len; int csum_flags; int csum_data; size_t flowid; int ether_vtag; } ;
struct mbuf {size_t m_len; TYPE_2__ m_pkthdr; int m_flags; } ;
struct bxe_sw_tpa_info {size_t len_on_bd; } ;
struct bxe_sw_rx_bd {struct mbuf* m; } ;
struct bxe_softc {scalar_t__ max_rx_bufs; int rx_budget; int ifp; } ;
struct TYPE_7__ {int rx_pkts; int rx_calls; int rx_budget_reached; int rx_ofld_frames_csum_tcp_udp; int rx_hw_csum_errors; int rx_ofld_frames_csum_ip; int rx_erroneous_jumbo_sge_pkts; int rx_jumbo_sge_pkts; int rx_bxe_service_rxsgl; int mbuf_alloc_rx; int rx_soft_errors; } ;
struct bxe_fastpath {size_t rx_bd_cons; size_t rx_bd_prod; size_t rx_cq_cons; size_t rx_cq_prod; int index; TYPE_3__ eth_q_stats; int rx_sge_prod; struct bxe_sw_rx_bd* rx_mbuf_chain; struct bxe_sw_tpa_info* rx_tpa_info; union eth_rx_cqe* rcq_chain; int * rx_cq_cons_sb; } ;
typedef int if_t ;
typedef enum eth_rx_cqe_type { ____Placeholder_eth_rx_cqe_type } eth_rx_cqe_type ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int,size_t,...) ;
 int FUNC_1 (struct bxe_softc*,char*,size_t,int) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 int FUNC_3 (struct bxe_fastpath*) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int) ;
 size_t FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 size_t FUNC_11 (size_t) ;
 size_t FUNC_12 (size_t) ;
 size_t VAR_16 ;
 size_t FUNC_13 (size_t) ;
 size_t FUNC_14 (size_t) ;
 scalar_t__ VAR_17 ;
 size_t FUNC_15 (size_t) ;
 size_t VAR_18 ;
 scalar_t__ FUNC_16 (size_t) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct bxe_fastpath*,size_t,size_t) ;
 int FUNC_19 (struct bxe_fastpath*,size_t,size_t,struct mbuf*,struct eth_fast_path_rx_cqe*) ;
 int FUNC_20 (struct bxe_softc*,struct bxe_fastpath*,union eth_rx_cqe*) ;
 int FUNC_21 (struct bxe_softc*,struct bxe_fastpath*,int ,size_t,size_t,struct eth_fast_path_rx_cqe*) ;
 int FUNC_22 (struct bxe_softc*,struct bxe_fastpath*,struct bxe_sw_tpa_info*,size_t,size_t,TYPE_4__*,size_t) ;
 int FUNC_23 (struct bxe_softc*,struct bxe_fastpath*,size_t,size_t,int ) ;
 int FUNC_24 (struct bxe_softc*,struct bxe_fastpath*,size_t,int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ,int) ;
 int FUNC_27 (int ,struct mbuf*) ;
 int FUNC_28 (struct mbuf*,int ) ;
 size_t FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (struct mbuf*,size_t) ;
 int FUNC_32 (struct bxe_sw_rx_bd*,struct bxe_sw_rx_bd*,int) ;
 int FUNC_33 (struct bxe_sw_rx_bd*,int ,int) ;
 int FUNC_34 () ;

__attribute__((used)) static uint8_t
FUNC_35(struct bxe_softc *VAR_19,
          struct bxe_fastpath *VAR_20)
{
    if_t VAR_21 = VAR_19->ifp;
    uint16_t VAR_22, VAR_23, VAR_24, VAR_25;
    uint16_t VAR_26, VAR_27, VAR_28;
    int VAR_29 = 0;
    int VAR_30 = 0;

    FUNC_2(VAR_20);


    VAR_26 = FUNC_29(*VAR_20->rx_cq_cons_sb);
    if ((VAR_26 & VAR_16) == VAR_16) {
        VAR_26++;
    }

    VAR_22 = VAR_20->rx_bd_cons;
    VAR_23 = VAR_20->rx_bd_prod;
    VAR_24 = VAR_23;
    VAR_27 = VAR_20->rx_cq_cons;
    VAR_28 = VAR_20->rx_cq_prod;





    FUNC_34();

    FUNC_0(VAR_19, VAR_5,
          "fp[%02d] Rx START hw_cq_cons=%u sw_cq_cons=%u\n",
          VAR_20->index, VAR_26, VAR_27);

    while (VAR_27 != VAR_26) {
        struct bxe_sw_rx_bd *VAR_31 = ((void*)0);
        union eth_rx_cqe *VAR_32;
        struct eth_fast_path_rx_cqe *VAR_33;
        uint8_t VAR_34;
        enum eth_rx_cqe_type VAR_35;
        uint16_t VAR_36, VAR_37, VAR_38;
        struct mbuf *VAR_39 = ((void*)0);

        VAR_25 = FUNC_11(VAR_27);
        VAR_23 = FUNC_13(VAR_23);
        VAR_22 = FUNC_13(VAR_22);

        VAR_32 = &VAR_20->rcq_chain[VAR_25];
        VAR_33 = &VAR_32->fast_path_cqe;
        VAR_34 = VAR_33->type_error_flags;
        VAR_35 = VAR_34 & VAR_11;

        FUNC_0(VAR_19, VAR_5,
              "fp[%02d] Rx hw_cq_cons=%d hw_sw_cons=%d "
              "BD prod=%d cons=%d CQE type=0x%x err=0x%x "
              "status=0x%x rss_hash=0x%x vlan=0x%x len=%u lenonbd=%u\n",
              VAR_20->index,
              VAR_26,
              VAR_27,
              VAR_23,
              VAR_22,
              FUNC_5(VAR_34),
              VAR_34,
              VAR_33->status_flags,
              FUNC_30(VAR_33->rss_hash_result),
              FUNC_29(VAR_33->vlan_tag),
              FUNC_29(VAR_33->pkt_len_or_gro_seg_len),
              FUNC_29(VAR_33->len_on_bd));


        if (FUNC_16(FUNC_7(VAR_35))) {
            FUNC_20(VAR_19, VAR_20, VAR_32);
            goto next_cqe;
        }

        VAR_31 = &VAR_20->rx_mbuf_chain[VAR_22];

        if (!FUNC_6(VAR_35)) {
            struct bxe_sw_tpa_info *VAR_40;
            uint16_t VAR_41, VAR_42;
            uint8_t VAR_43;

            if (FUNC_8(VAR_35)) {
                FUNC_21(VAR_19, VAR_20, VAR_33->queue_index,
                              VAR_22, VAR_23, VAR_33);
                VAR_39 = ((void*)0);
                goto next_rx;
            }

            FUNC_10(FUNC_9(VAR_35),
                    ("CQE type is not STOP! (0x%x)\n", VAR_35));

            VAR_43 = VAR_32->end_agg_cqe.queue_index;
            VAR_40 = &VAR_20->rx_tpa_info[VAR_43];

            FUNC_0(VAR_19, VAR_4, "fp[%02d].tpa[%02d] TPA STOP\n",
                  VAR_20->index, VAR_43);

            VAR_41 = (FUNC_29(VAR_32->end_agg_cqe.pkt_len) -
                         VAR_40->len_on_bd);
            VAR_42 = FUNC_15(VAR_41) >> VAR_18;

            FUNC_22(VAR_19, VAR_20, VAR_40, VAR_43, VAR_42,
                         &VAR_32->end_agg_cqe, VAR_25);

            FUNC_24(VAR_19, VAR_20, VAR_42, &VAR_32->end_agg_cqe.sgl_or_raw_data);

            goto next_cqe;
        }




        if (FUNC_16(VAR_34 &
                            VAR_10)) {
            FUNC_1(VAR_19, "flags 0x%x rx packet %u\n", VAR_34, VAR_27);
            VAR_20->eth_q_stats.rx_soft_errors++;
            goto next_rx;
        }

        VAR_36 = FUNC_29(VAR_33->pkt_len_or_gro_seg_len);
        VAR_37 = FUNC_29(VAR_33->len_on_bd);
        VAR_38 = VAR_33->placement_offset;

        VAR_39 = VAR_31->m;

        if (FUNC_16(VAR_39 == ((void*)0))) {
            FUNC_1(VAR_19, "No mbuf in rx chain descriptor %d for fp[%02d]\n",
                  VAR_22, VAR_20->index);
            goto next_rx;
        }
        VAR_30 = FUNC_18(VAR_20, VAR_22,
                                  (VAR_19->max_rx_bufs != VAR_17) ?
                                      VAR_23 : VAR_22);
        if (VAR_30 != 0) {


            VAR_39 = ((void*)0);

            FUNC_1(VAR_19, "mbuf alloc fail for fp[%02d] rx chain (%d)\n",
                  VAR_20->index, VAR_30);
            VAR_20->eth_q_stats.rx_soft_errors++;

            if (VAR_19->max_rx_bufs != VAR_17) {

                FUNC_32(&VAR_20->rx_mbuf_chain[VAR_23], VAR_31,
                       sizeof(struct bxe_sw_rx_bd));
                FUNC_33(VAR_31, 0, sizeof(struct bxe_sw_rx_bd));
            }

            goto next_rx;
        }


        VAR_20->eth_q_stats.mbuf_alloc_rx--;


        FUNC_31(VAR_39, VAR_38);
        VAR_39->m_pkthdr.len = VAR_39->m_len = VAR_36;

        if ((VAR_36 > 60) && (VAR_36 > VAR_37)) {
            VAR_20->eth_q_stats.rx_bxe_service_rxsgl++;
            VAR_30 = FUNC_19(VAR_20, VAR_36, VAR_37, VAR_39, VAR_33);
            if (VAR_30)
                break;
            VAR_20->eth_q_stats.rx_jumbo_sge_pkts++;
        } else if (VAR_37 < VAR_36) {
            VAR_20->eth_q_stats.rx_erroneous_jumbo_sge_pkts++;
        }


 FUNC_28(VAR_39, VAR_21);


        VAR_39->m_pkthdr.csum_flags = 0;


        if (FUNC_25(VAR_21) & VAR_12) {

            if (!(VAR_32->fast_path_cqe.status_flags &
                  VAR_7)) {
                VAR_39->m_pkthdr.csum_flags |= VAR_1;
                if (FUNC_16(VAR_34 &
                                    VAR_6)) {
                    VAR_20->eth_q_stats.rx_hw_csum_errors++;
                } else {
                    VAR_20->eth_q_stats.rx_ofld_frames_csum_ip++;
                    VAR_39->m_pkthdr.csum_flags |= VAR_2;
                }
            }


            if (!(VAR_32->fast_path_cqe.status_flags &
                  VAR_9)) {
                if (FUNC_16(VAR_34 &
                                    VAR_8)) {
                    VAR_20->eth_q_stats.rx_hw_csum_errors++;
                } else {
                    VAR_20->eth_q_stats.rx_ofld_frames_csum_tcp_udp++;
                    VAR_39->m_pkthdr.csum_data = 0xFFFF;
                    VAR_39->m_pkthdr.csum_flags |= (VAR_0 |
                                               VAR_3);
                }
            }
        }


        if (VAR_32->fast_path_cqe.pars_flags.flags & VAR_15) {
            VAR_39->m_pkthdr.ether_vtag = VAR_32->fast_path_cqe.vlan_tag;
            VAR_39->m_flags |= VAR_14;
        }







next_rx:

        VAR_22 = FUNC_14(VAR_22);
        VAR_23 = FUNC_14(VAR_23);
        VAR_24 = FUNC_14(VAR_24);


        if (FUNC_17(VAR_39 != ((void*)0))) {
            FUNC_26(VAR_21, VAR_13, 1);
            VAR_29++;
            FUNC_27(VAR_21, VAR_39);
        }

next_cqe:

        VAR_28 = FUNC_12(VAR_28);
        VAR_27 = FUNC_12(VAR_27);


        if (VAR_30 != 0)
            break;

        if (VAR_29 == VAR_19->rx_budget) {
            VAR_20->eth_q_stats.rx_budget_reached++;
            break;
        }
    }

    VAR_20->rx_bd_cons = VAR_22;
    VAR_20->rx_bd_prod = VAR_24;
    VAR_20->rx_cq_cons = VAR_27;
    VAR_20->rx_cq_prod = VAR_28;


    FUNC_23(VAR_19, VAR_20, VAR_24, VAR_28, VAR_20->rx_sge_prod);

    VAR_20->eth_q_stats.rx_pkts += VAR_29;
    VAR_20->eth_q_stats.rx_calls++;

    FUNC_3(VAR_20);

    return (VAR_27 != VAR_26);
}
