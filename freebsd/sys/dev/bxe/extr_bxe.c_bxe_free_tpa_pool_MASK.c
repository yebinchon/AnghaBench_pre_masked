
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bxe_softc {int dummy; } ;
struct TYPE_6__ {int mbuf_alloc_tpa; } ;
struct bxe_fastpath {TYPE_3__ eth_q_stats; TYPE_2__* rx_tpa_info; int * rx_mbuf_tag; struct bxe_softc* sc; } ;
struct TYPE_4__ {int * m; int * m_map; } ;
struct TYPE_5__ {TYPE_1__ bd; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bxe_fastpath *VAR_1)
{
    struct bxe_softc *VAR_2;
    int VAR_3, VAR_4;

    VAR_2 = VAR_1->sc;

    if (VAR_1->rx_mbuf_tag == ((void*)0)) {
        return;
    }

    VAR_4 = FUNC_0(VAR_2);


    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        if (VAR_1->rx_tpa_info[VAR_3].bd.m_map != ((void*)0)) {
            FUNC_1(VAR_1->rx_mbuf_tag,
                            VAR_1->rx_tpa_info[VAR_3].bd.m_map,
                            VAR_0);
            FUNC_2(VAR_1->rx_mbuf_tag,
                              VAR_1->rx_tpa_info[VAR_3].bd.m_map);
        }

        if (VAR_1->rx_tpa_info[VAR_3].bd.m != ((void*)0)) {
            FUNC_3(VAR_1->rx_tpa_info[VAR_3].bd.m);
            VAR_1->rx_tpa_info[VAR_3].bd.m = ((void*)0);
            VAR_1->eth_q_stats.mbuf_alloc_tpa--;
        }
    }
}
