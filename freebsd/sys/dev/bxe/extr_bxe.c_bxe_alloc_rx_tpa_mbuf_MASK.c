
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;
struct TYPE_6__ {struct mbuf* m; int * m_map; } ;
struct bxe_sw_tpa_info {int seg; TYPE_3__ bd; } ;
struct TYPE_5__ {int mbuf_alloc_tpa; int mbuf_rx_tpa_mapping_failed; int mbuf_rx_tpa_alloc_failed; } ;
struct bxe_fastpath {int rx_mbuf_tag; int * rx_tpa_info_mbuf_spare_map; TYPE_2__ eth_q_stats; int rx_buf_size; int mbuf_alloc_size; struct bxe_sw_tpa_info* rx_tpa_info; } ;
typedef int * bus_dmamap_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int *,struct mbuf*,int *,int*,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct bxe_fastpath *VAR_7,
                      int VAR_8)
{
    struct bxe_sw_tpa_info *VAR_9 = &VAR_7->rx_tpa_info[VAR_8];
    bus_dma_segment_t VAR_10[1];
    bus_dmamap_t VAR_11;
    struct mbuf *VAR_12;
    int VAR_13;
    int VAR_14 = 0;


    VAR_12 = FUNC_6(VAR_5, VAR_4, VAR_6, VAR_7->mbuf_alloc_size);
    if (FUNC_1(VAR_12 == ((void*)0))) {
        VAR_7->eth_q_stats.mbuf_rx_tpa_alloc_failed++;
        return (VAR_3);
    }

    VAR_7->eth_q_stats.mbuf_alloc_tpa++;


    VAR_12->m_pkthdr.len = VAR_12->m_len = VAR_7->rx_buf_size;


    VAR_14 = FUNC_2(VAR_7->rx_mbuf_tag,
                                 VAR_7->rx_tpa_info_mbuf_spare_map,
                                 VAR_12, VAR_10, &VAR_13, VAR_2);
    if (FUNC_1(VAR_14 != 0)) {
        VAR_7->eth_q_stats.mbuf_rx_tpa_mapping_failed++;
        FUNC_5(VAR_12);
        VAR_7->eth_q_stats.mbuf_alloc_tpa--;
        return (VAR_14);
    }


    FUNC_0((VAR_13 == 1), ("Too many segments, %d returned!", VAR_13));


    if (VAR_9->bd.m_map != ((void*)0)) {
        FUNC_3(VAR_7->rx_mbuf_tag, VAR_9->bd.m_map,
                        VAR_0);
        FUNC_4(VAR_7->rx_mbuf_tag, VAR_9->bd.m_map);
    }


    VAR_11 = VAR_9->bd.m_map;
    VAR_9->bd.m_map = VAR_7->rx_tpa_info_mbuf_spare_map;
    VAR_7->rx_tpa_info_mbuf_spare_map = VAR_11;
    FUNC_3(VAR_7->rx_mbuf_tag, VAR_9->bd.m_map,
                    VAR_1);
    VAR_9->bd.m = VAR_12;
    VAR_9->seg = VAR_10[0];

    return (VAR_14);
}
