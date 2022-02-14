
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_6__ {int csum_data; int csum_flags; int flowid; int ether_vtag; int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; int m_flags; int m_len; } ;
struct eth_end_agg_rx_cqe {int pkt_len; } ;
struct TYPE_5__ {struct mbuf* m; } ;
struct bxe_sw_tpa_info {int parsing_flags; int vlan_tag; int len_on_bd; int placement_offset; TYPE_1__ bd; } ;
struct bxe_softc {int ifp; } ;
struct TYPE_7__ {int mbuf_alloc_tpa; int rx_tpa_pkts; int rx_soft_errors; int rx_ofld_frames_csum_tcp_udp; int rx_ofld_frames_csum_ip; } ;
struct bxe_fastpath {int rx_tpa_queue_used; TYPE_4__* rx_tpa_info; TYPE_3__ eth_q_stats; int index; } ;
typedef int if_t ;
struct TYPE_8__ {int state; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,size_t,int ,int ,size_t,int ) ;
 int FUNC_1 (struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct bxe_fastpath*,size_t) ;
 int FUNC_3 (struct bxe_softc*,struct bxe_fastpath*,struct bxe_sw_tpa_info*,size_t,size_t,struct mbuf*,struct eth_end_agg_rx_cqe*,size_t) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,struct mbuf*) ;
 int FUNC_6 (struct mbuf*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*,int ) ;
 int FUNC_9 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_10(struct bxe_softc *VAR_9,
             struct bxe_fastpath *VAR_10,
             struct bxe_sw_tpa_info *VAR_11,
             uint16_t VAR_12,
             uint16_t VAR_13,
    struct eth_end_agg_rx_cqe *VAR_14,
             uint16_t VAR_15)
{
    if_t VAR_16 = VAR_9->ifp;
    struct mbuf *VAR_17;
    int VAR_18 = 0;

    FUNC_0(VAR_9, VAR_5,
          "fp[%02d].tpa[%02d] pad=%d pkt_len=%d pages=%d vlan=%d\n",
          VAR_10->index, VAR_12, VAR_11->placement_offset,
          FUNC_7(VAR_14->pkt_len), VAR_13, VAR_11->vlan_tag);

    VAR_17 = VAR_11->bd.m;


    VAR_18 = FUNC_2(VAR_10, VAR_12);
    if (VAR_18) {

        VAR_10->eth_q_stats.rx_soft_errors++;
        goto bxe_tpa_stop_exit;
    }


    FUNC_8(VAR_17, VAR_11->placement_offset);
    VAR_17->m_pkthdr.len = VAR_17->m_len = VAR_11->len_on_bd;


    VAR_10->eth_q_stats.rx_ofld_frames_csum_ip++;
    VAR_10->eth_q_stats.rx_ofld_frames_csum_tcp_udp++;
    VAR_17->m_pkthdr.csum_data = 0xffff;
    VAR_17->m_pkthdr.csum_flags |= (VAR_2 |
                               VAR_3 |
                               VAR_1 |
                               VAR_4);


    VAR_18 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_17, VAR_14, VAR_15);
    if (VAR_18) {

        VAR_10->eth_q_stats.rx_soft_errors++;
        FUNC_9(VAR_17);
    } else {
        if (VAR_11->parsing_flags & VAR_8) {
            VAR_17->m_pkthdr.ether_vtag = VAR_11->vlan_tag;
            VAR_17->m_flags |= VAR_7;
        }


        FUNC_6(VAR_17, VAR_16);







        FUNC_4(VAR_16, VAR_6, 1);
        VAR_10->eth_q_stats.rx_tpa_pkts++;


        FUNC_5(VAR_16, VAR_17);
    }


    VAR_10->eth_q_stats.mbuf_alloc_tpa--;

bxe_tpa_stop_exit:

    VAR_10->rx_tpa_info[VAR_12].state = VAR_0;
    VAR_10->rx_tpa_queue_used &= ~(1 << VAR_12);
}
