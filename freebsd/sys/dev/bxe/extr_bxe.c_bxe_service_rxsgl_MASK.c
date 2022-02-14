
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct mbuf {size_t m_len; } ;
struct TYPE_6__ {int * sgl; } ;
struct eth_fast_path_rx_cqe {TYPE_3__ sgl_or_raw_data; } ;
struct TYPE_5__ {int mbuf_alloc_sge; } ;
struct bxe_fastpath {int sc; TYPE_2__ eth_q_stats; TYPE_1__* rx_sge_mbuf_chain; } ;
struct TYPE_4__ {struct mbuf* m; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_2 (struct bxe_fastpath*,size_t) ;
 int FUNC_3 (int ,struct bxe_fastpath*,size_t,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mbuf*,struct mbuf*) ;
 size_t FUNC_6 (size_t,size_t) ;

__attribute__((used)) static uint8_t
FUNC_7(
                 struct bxe_fastpath *VAR_3,
                 uint16_t VAR_4,
                 uint16_t VAR_5,
                 struct mbuf *VAR_6,
                 struct eth_fast_path_rx_cqe *VAR_7)
{
    struct mbuf *VAR_8;
    uint16_t VAR_9, VAR_10;
    uint16_t VAR_11 = 0;
    uint16_t VAR_12;
    uint8_t VAR_13, VAR_14 = 0;
    uint32_t VAR_15;


    VAR_6->m_len = VAR_5;

    VAR_15 = VAR_4 - VAR_5;
    VAR_9 = FUNC_1(VAR_15) >> VAR_1;

    for (VAR_13 = 0, VAR_12 = 0; VAR_13 < VAR_9; VAR_13 += VAR_0, VAR_12++) {
        VAR_11 = FUNC_0(FUNC_4(VAR_7->sgl_or_raw_data.sgl[VAR_12]));

        VAR_8 = VAR_3->rx_sge_mbuf_chain[VAR_11].m;
        VAR_10 = FUNC_6(VAR_15, (uint32_t)(VAR_2));
        VAR_8->m_len = VAR_10;


        VAR_14 = FUNC_2(VAR_3, VAR_11);
        if (VAR_14) {

            return (VAR_14);
        }
        VAR_3->eth_q_stats.mbuf_alloc_sge--;


        FUNC_5(VAR_6, VAR_8);

        VAR_15 -= VAR_10;
    }

    FUNC_3(VAR_3->sc, VAR_3, VAR_9, &VAR_7->sgl_or_raw_data);

    return VAR_14;
}
