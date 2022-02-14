
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bxe_softc {int num_queues; int * parent_dma_tag; int * def_sb; int def_sb_dma; int * eq; int eq_dma; int * sp; int sp_dma; int * spq; int spq_dma; int * gz_strm; int * gz_buf; int gz_buf_dma; struct bxe_fastpath* fp; } ;
struct bxe_fastpath {int * rx_sge_mbuf_tag; int * rx_sge_mbuf_spare_map; TYPE_5__* rx_sge_mbuf_chain; int * rx_mbuf_tag; int * rx_tpa_info_mbuf_spare_map; TYPE_4__* rx_tpa_info; int * rx_mbuf_spare_map; TYPE_2__* rx_mbuf_chain; int * tx_mbuf_tag; TYPE_1__* tx_mbuf_chain; int * rx_sge_chain; int rx_sge_dma; int * rcq_chain; int rcq_dma; int * rx_chain; int rx_dma; int * tx_chain; int tx_dma; int status_block; int sb_dma; } ;
struct TYPE_10__ {int * m_map; } ;
struct TYPE_8__ {int * m_map; } ;
struct TYPE_9__ {TYPE_3__ bd; } ;
struct TYPE_7__ {int * m_map; } ;
struct TYPE_6__ {int * m_map; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct bxe_softc*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_4)
{
    struct bxe_fastpath *VAR_5;
    int VAR_6;
    int VAR_7, VAR_8;

    if (VAR_4->parent_dma_tag == ((void*)0)) {
        return;
    }

    for (VAR_7 = 0; VAR_7 < VAR_4->num_queues; VAR_7++) {
        VAR_5 = &VAR_4->fp[VAR_7];





        FUNC_4(VAR_4, &VAR_5->sb_dma);
        FUNC_6(&VAR_5->status_block, 0, sizeof(VAR_5->status_block));





        FUNC_4(VAR_4, &VAR_5->tx_dma);
        VAR_5->tx_chain = ((void*)0);





        FUNC_4(VAR_4, &VAR_5->rx_dma);
        VAR_5->rx_chain = ((void*)0);





        FUNC_4(VAR_4, &VAR_5->rcq_dma);
        VAR_5->rcq_chain = ((void*)0);





        FUNC_4(VAR_4, &VAR_5->rx_sge_dma);
        VAR_5->rx_sge_chain = ((void*)0);





        if (VAR_5->tx_mbuf_tag != ((void*)0)) {
            for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
                if (VAR_5->tx_mbuf_chain[VAR_8].m_map != ((void*)0)) {
                    FUNC_3(VAR_5->tx_mbuf_tag,
                                      VAR_5->tx_mbuf_chain[VAR_8].m_map);
                    FUNC_2(VAR_5->tx_mbuf_tag,
                                       VAR_5->tx_mbuf_chain[VAR_8].m_map);
                }
            }

            FUNC_1(VAR_5->tx_mbuf_tag);
            VAR_5->tx_mbuf_tag = ((void*)0);
        }





        if (VAR_5->rx_mbuf_tag != ((void*)0)) {
            for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
                if (VAR_5->rx_mbuf_chain[VAR_8].m_map != ((void*)0)) {
                    FUNC_3(VAR_5->rx_mbuf_tag,
                                      VAR_5->rx_mbuf_chain[VAR_8].m_map);
                    FUNC_2(VAR_5->rx_mbuf_tag,
                                       VAR_5->rx_mbuf_chain[VAR_8].m_map);
                }
            }

            if (VAR_5->rx_mbuf_spare_map != ((void*)0)) {
                FUNC_3(VAR_5->rx_mbuf_tag, VAR_5->rx_mbuf_spare_map);
                FUNC_2(VAR_5->rx_mbuf_tag, VAR_5->rx_mbuf_spare_map);
            }





            VAR_6 = FUNC_0(VAR_4);

            for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
                if (VAR_5->rx_tpa_info[VAR_8].bd.m_map != ((void*)0)) {
                    FUNC_3(VAR_5->rx_mbuf_tag,
                                      VAR_5->rx_tpa_info[VAR_8].bd.m_map);
                    FUNC_2(VAR_5->rx_mbuf_tag,
                                       VAR_5->rx_tpa_info[VAR_8].bd.m_map);
                }
            }

            if (VAR_5->rx_tpa_info_mbuf_spare_map != ((void*)0)) {
                FUNC_3(VAR_5->rx_mbuf_tag,
                                  VAR_5->rx_tpa_info_mbuf_spare_map);
                FUNC_2(VAR_5->rx_mbuf_tag,
                                   VAR_5->rx_tpa_info_mbuf_spare_map);
            }

            FUNC_1(VAR_5->rx_mbuf_tag);
            VAR_5->rx_mbuf_tag = ((void*)0);
        }





        if (VAR_5->rx_sge_mbuf_tag != ((void*)0)) {
            for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
                if (VAR_5->rx_sge_mbuf_chain[VAR_8].m_map != ((void*)0)) {
                    FUNC_3(VAR_5->rx_sge_mbuf_tag,
                                      VAR_5->rx_sge_mbuf_chain[VAR_8].m_map);
                    FUNC_2(VAR_5->rx_sge_mbuf_tag,
                                       VAR_5->rx_sge_mbuf_chain[VAR_8].m_map);
                }
            }

            if (VAR_5->rx_sge_mbuf_spare_map != ((void*)0)) {
                FUNC_3(VAR_5->rx_sge_mbuf_tag,
                                  VAR_5->rx_sge_mbuf_spare_map);
                FUNC_2(VAR_5->rx_sge_mbuf_tag,
                                   VAR_5->rx_sge_mbuf_spare_map);
            }

            FUNC_1(VAR_5->rx_sge_mbuf_tag);
            VAR_5->rx_sge_mbuf_tag = ((void*)0);
        }
    }





    FUNC_4(VAR_4, &VAR_4->gz_buf_dma);
    VAR_4->gz_buf = ((void*)0);
    FUNC_5(VAR_4->gz_strm, VAR_0);
    VAR_4->gz_strm = ((void*)0);





    FUNC_4(VAR_4, &VAR_4->spq_dma);
    VAR_4->spq = ((void*)0);





    FUNC_4(VAR_4, &VAR_4->sp_dma);
    VAR_4->sp = ((void*)0);





    FUNC_4(VAR_4, &VAR_4->eq_dma);
    VAR_4->eq = ((void*)0);





    FUNC_4(VAR_4, &VAR_4->def_sb_dma);
    VAR_4->def_sb = ((void*)0);

    FUNC_1(VAR_4->parent_dma_tag);
    VAR_4->parent_dma_tag = ((void*)0);
}
