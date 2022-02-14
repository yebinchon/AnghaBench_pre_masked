
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_5__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct eth_rx_sge {void* addr_lo; void* addr_hi; } ;
struct bxe_sw_rx_bd {struct mbuf* m; int * m_map; } ;
struct TYPE_6__ {int mbuf_alloc_sge; int mbuf_rx_sge_mapping_failed; int mbuf_rx_sge_alloc_failed; } ;
struct bxe_fastpath {struct eth_rx_sge* rx_sge_chain; int rx_sge_mbuf_tag; int * rx_sge_mbuf_spare_map; struct bxe_sw_rx_bd* rx_sge_mbuf_chain; TYPE_2__ eth_q_stats; } ;
typedef int * bus_dmamap_t ;
struct TYPE_7__ {int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int *,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct bxe_fastpath *VAR_8,
                      uint16_t VAR_9)
{
    struct bxe_sw_rx_bd *VAR_10;
    struct eth_rx_sge *VAR_11;
    bus_dma_segment_t VAR_12[1];
    bus_dmamap_t VAR_13;
    struct mbuf *VAR_14;
    int VAR_15;
    int VAR_16 = 0;


    VAR_14 = FUNC_9(VAR_5, VAR_4, VAR_6, VAR_7);
    if (FUNC_3(VAR_14 == ((void*)0))) {
        VAR_8->eth_q_stats.mbuf_rx_sge_alloc_failed++;
        return (VAR_3);
    }

    VAR_8->eth_q_stats.mbuf_alloc_sge++;


    VAR_14->m_pkthdr.len = VAR_14->m_len = VAR_7;


    VAR_16 = FUNC_4(VAR_8->rx_sge_mbuf_tag,
                                 VAR_8->rx_sge_mbuf_spare_map,
                                 VAR_14, VAR_12, &VAR_15, VAR_2);
    if (FUNC_3(VAR_16 != 0)) {
        VAR_8->eth_q_stats.mbuf_rx_sge_mapping_failed++;
        FUNC_8(VAR_14);
        VAR_8->eth_q_stats.mbuf_alloc_sge--;
        return (VAR_16);
    }


    FUNC_0((VAR_15 == 1), ("Too many segments, %d returned!", VAR_15));

    VAR_10 = &VAR_8->rx_sge_mbuf_chain[VAR_9];


    if (VAR_10->m_map != ((void*)0)) {
        FUNC_5(VAR_8->rx_sge_mbuf_tag, VAR_10->m_map,
                        VAR_0);
        FUNC_6(VAR_8->rx_sge_mbuf_tag, VAR_10->m_map);
    }


    VAR_13 = VAR_10->m_map;
    VAR_10->m_map = VAR_8->rx_sge_mbuf_spare_map;
    VAR_8->rx_sge_mbuf_spare_map = VAR_13;
    FUNC_5(VAR_8->rx_sge_mbuf_tag, VAR_10->m_map,
                    VAR_1);
    VAR_10->m = VAR_14;

    VAR_11 = &VAR_8->rx_sge_chain[VAR_9];
    VAR_11->addr_hi = FUNC_7(FUNC_1(VAR_12[0].ds_addr));
    VAR_11->addr_lo = FUNC_7(FUNC_2(VAR_12[0].ds_addr));

    return (VAR_16);
}
