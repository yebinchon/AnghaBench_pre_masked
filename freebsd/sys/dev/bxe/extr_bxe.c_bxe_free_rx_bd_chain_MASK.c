
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_softc {int dummy; } ;
struct TYPE_4__ {int mbuf_alloc_rx; } ;
struct bxe_fastpath {TYPE_2__ eth_q_stats; TYPE_1__* rx_mbuf_chain; int * rx_mbuf_tag; struct bxe_softc* sc; } ;
struct TYPE_3__ {int * m; int * m_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bxe_fastpath *VAR_2)
{
    struct bxe_softc *VAR_3;
    int VAR_4;

    VAR_3 = VAR_2->sc;

    if (VAR_2->rx_mbuf_tag == ((void*)0)) {
        return;
    }


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_2->rx_mbuf_chain[VAR_4].m_map != ((void*)0)) {
            FUNC_0(VAR_2->rx_mbuf_tag,
                            VAR_2->rx_mbuf_chain[VAR_4].m_map,
                            VAR_0);
            FUNC_1(VAR_2->rx_mbuf_tag,
                              VAR_2->rx_mbuf_chain[VAR_4].m_map);
        }

        if (VAR_2->rx_mbuf_chain[VAR_4].m != ((void*)0)) {
            FUNC_2(VAR_2->rx_mbuf_chain[VAR_4].m);
            VAR_2->rx_mbuf_chain[VAR_4].m = ((void*)0);
            VAR_2->eth_q_stats.mbuf_alloc_rx--;
        }
    }
}
