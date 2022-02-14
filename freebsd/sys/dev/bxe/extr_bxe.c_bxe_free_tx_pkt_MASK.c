
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct eth_tx_start_bd {int nbd; } ;
struct bxe_sw_tx_bd {size_t first_bd; int * m; int m_map; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_4__ {int tx_chain_lost_mbuf; int mbuf_alloc_tx; } ;
struct bxe_fastpath {TYPE_2__ eth_q_stats; TYPE_1__* tx_chain; int tx_mbuf_tag; struct bxe_sw_tx_bd* tx_mbuf_chain; } ;
struct TYPE_3__ {struct eth_tx_start_bd start_bd; } ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static uint16_t
FUNC_5(struct bxe_softc *VAR_0,
                struct bxe_fastpath *VAR_1,
                uint16_t VAR_2)
{
    struct bxe_sw_tx_bd *VAR_3 = &VAR_1->tx_mbuf_chain[VAR_2];
    struct eth_tx_start_bd *VAR_4;
    uint16_t VAR_5 = FUNC_0(VAR_3->first_bd);
    uint16_t VAR_6;
    int VAR_7;


    FUNC_2(VAR_1->tx_mbuf_tag, VAR_3->m_map);

    VAR_4 = &VAR_1->tx_chain[VAR_5].start_bd;
    VAR_7 = FUNC_3(VAR_4->nbd) - 1;

    VAR_6 = (VAR_3->first_bd + VAR_7);


    if (FUNC_1(VAR_3->m != ((void*)0))) {
        FUNC_4(VAR_3->m);
        VAR_1->eth_q_stats.mbuf_alloc_tx--;
    } else {
        VAR_1->eth_q_stats.tx_chain_lost_mbuf++;
    }

    VAR_3->m = ((void*)0);
    VAR_3->first_bd = 0;

    return (VAR_6);
}
