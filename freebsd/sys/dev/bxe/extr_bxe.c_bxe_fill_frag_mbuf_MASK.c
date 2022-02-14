
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int len; } ;
struct mbuf {int m_len; TYPE_4__ m_pkthdr; } ;
struct TYPE_5__ {int * sgl; } ;
struct eth_end_agg_rx_cqe {TYPE_1__ sgl_or_raw_data; int pkt_len; } ;
struct bxe_sw_tpa_info {int len_on_bd; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_7__ {int mbuf_alloc_sge; } ;
struct bxe_fastpath {int index; TYPE_3__ eth_q_stats; TYPE_2__* rx_sge_mbuf_chain; } ;
struct TYPE_6__ {struct mbuf* m; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ,int,int,...) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int,int,int,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct bxe_fastpath*,int) ;
 int FUNC_4 (struct bxe_softc*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mbuf*,struct mbuf*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int
FUNC_8(struct bxe_softc *VAR_4,
                   struct bxe_fastpath *VAR_5,
                   struct bxe_sw_tpa_info *VAR_6,
                   uint16_t VAR_7,
                   uint16_t VAR_8,
                   struct mbuf *VAR_9,
          struct eth_end_agg_rx_cqe *VAR_10,
                   uint16_t VAR_11)
{
    struct mbuf *VAR_12;
    uint32_t VAR_13, VAR_14, VAR_15;
    uint16_t VAR_16;
    int VAR_17 = 0;
    int VAR_18;

    VAR_14 = FUNC_5(VAR_10->pkt_len) - VAR_6->len_on_bd;

    FUNC_0(VAR_4, VAR_0,
          "fp[%02d].tpa[%02d] TPA fill len_on_bd=%d frag_size=%d pages=%d\n",
          VAR_5->index, VAR_7, VAR_6->len_on_bd, VAR_14, VAR_8);


    if (VAR_8 > 8 * VAR_2) {

        uint32_t *VAR_19 = (uint32_t *)VAR_10;

        FUNC_1(VAR_4, "fp[%02d].sge[0x%04x] has too many pages (%d)! "
                  "pkt_len=%d len_on_bd=%d frag_size=%d\n",
              VAR_5->index, VAR_11, VAR_8, FUNC_5(VAR_10->pkt_len),
              VAR_6->len_on_bd, VAR_14);

        FUNC_1(VAR_4, "cqe [0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x]\n",
            *VAR_19, *(VAR_19+1), *(VAR_19+2), *(VAR_19+3), *(VAR_19+4), *(VAR_19+5), *(VAR_19+6), *(VAR_19+7));

        FUNC_4(VAR_4, ("sge page count error\n"));
        return (VAR_1);
    }





    for (VAR_15 = 0, VAR_18 = 0; VAR_15 < VAR_8; VAR_15 += VAR_2, VAR_18++) {
        VAR_16 = FUNC_2(FUNC_5(VAR_10->sgl_or_raw_data.sgl[VAR_18]));





        VAR_13 = FUNC_7(VAR_14, (uint32_t)(VAR_3));

        FUNC_0(VAR_4, VAR_0, "fp[%02d].tpa[%02d] TPA fill i=%d j=%d "
                           "sge_idx=%d frag_size=%d frag_len=%d\n",
              VAR_5->index, VAR_7, VAR_15, VAR_18, VAR_16, VAR_14, VAR_13);

        VAR_12 = VAR_5->rx_sge_mbuf_chain[VAR_16].m;


        VAR_17 = FUNC_3(VAR_5, VAR_16);
        if (VAR_17) {

            return (VAR_17);
        }


        VAR_12->m_len = VAR_13;


        FUNC_6(VAR_9, VAR_12);
        VAR_5->eth_q_stats.mbuf_alloc_sge--;


        VAR_9->m_pkthdr.len += VAR_13;
        VAR_14 -= VAR_13;
    }

    FUNC_0(VAR_4, VAR_0,
          "fp[%02d].tpa[%02d] TPA fill done frag_size=%d\n",
          VAR_5->index, VAR_7, VAR_14);

    return (VAR_17);
}
