
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union event_ring_elem {int dummy; } event_ring_elem ;
struct eth_tx_next_bd {void* addr_lo; void* addr_hi; } ;
union eth_tx_bd_types {struct eth_tx_next_bd next_bd; } ;
typedef union eth_rx_cqe {int dummy; } eth_rx_cqe ;
typedef union bxe_host_hc_status_block {int dummy; } bxe_host_hc_status_block ;
struct host_sp_status_block {int dummy; } ;
struct host_hc_status_block_e2 {int dummy; } ;
struct host_hc_status_block_e1x {int dummy; } ;
struct eth_spe {int dummy; } ;
struct eth_rx_sge {void* addr_lo; void* addr_hi; } ;
struct eth_rx_cqe_next_page {void* addr_lo; void* addr_hi; } ;
struct eth_rx_bd {void* addr_lo; void* addr_hi; } ;
struct TYPE_15__ {scalar_t__ paddr; scalar_t__ vaddr; } ;
struct bxe_softc {int num_queues; int parent_dma_tag; int ifp; struct bxe_fastpath* fp; struct host_sp_status_block* def_sb; TYPE_7__ def_sb_dma; union event_ring_elem* eq; TYPE_7__ eq_dma; struct bxe_slowpath* sp; TYPE_7__ sp_dma; struct eth_spe* spq; TYPE_7__ spq_dma; int * gz_buf; TYPE_7__ gz_buf_dma; int * gz_strm; int dev; } ;
struct bxe_slowpath {int dummy; } ;
struct TYPE_9__ {struct host_hc_status_block_e1x* e1x_sb; struct host_hc_status_block_e2* e2_sb; } ;
struct bxe_fastpath {int index; int rx_tpa_info_mbuf_spare_map; int rx_mbuf_tag; TYPE_6__* rx_tpa_info; int rx_sge_mbuf_spare_map; int rx_sge_mbuf_tag; TYPE_4__* rx_sge_mbuf_chain; int rx_mbuf_spare_map; TYPE_3__* rx_mbuf_chain; TYPE_2__* tx_mbuf_chain; int tx_mbuf_tag; TYPE_7__ rx_sge_dma; struct eth_rx_sge* rx_sge_chain; TYPE_7__ rcq_dma; union eth_rx_cqe* rcq_chain; TYPE_7__ rx_dma; struct eth_rx_bd* rx_chain; TYPE_7__ tx_dma; union eth_tx_bd_types* tx_chain; TYPE_7__ sb_dma; TYPE_1__ status_block; struct bxe_softc* sc; } ;
typedef int bus_size_t ;
typedef scalar_t__ bus_addr_t ;
typedef int buf ;
struct TYPE_13__ {int m_map; } ;
struct TYPE_14__ {TYPE_5__ bd; } ;
struct TYPE_12__ {int m_map; } ;
struct TYPE_11__ {int m_map; } ;
struct TYPE_10__ {int m_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct bxe_softc*,int,TYPE_7__*,char*) ;
 int FUNC_10 (struct bxe_softc*,TYPE_7__*) ;
 int FUNC_11 (struct bxe_fastpath*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int,int ,int ) ;
 int FUNC_15 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_16(struct bxe_softc *VAR_27)
{
    struct bxe_fastpath *VAR_28;
    bus_addr_t VAR_29;
    int VAR_30;
    int VAR_31;
    bus_size_t VAR_32;
    bus_size_t VAR_33;
    char VAR_34[32];
    int VAR_35;
    int VAR_36, VAR_37;




    VAR_35 = FUNC_5(FUNC_8(VAR_27->dev),
                            1,
                            0,
                            VAR_2,
                            VAR_2,
                            ((void*)0),
                            ((void*)0),
                            VAR_3,
                            VAR_4,
                            VAR_3,
                            0,
                            ((void*)0),
                            ((void*)0),
                            &VAR_27->parent_dma_tag);
    if (VAR_35 != 0) {
        FUNC_0(VAR_27, "Failed to alloc parent DMA tag (%d)!\n", VAR_35);
        return (1);
    }





    if (FUNC_9(VAR_27, sizeof(struct host_sp_status_block),
                      &VAR_27->def_sb_dma, "default status block") != 0) {

        FUNC_6(VAR_27->parent_dma_tag);
        return (1);
    }

    VAR_27->def_sb = (struct host_sp_status_block *)VAR_27->def_sb_dma.vaddr;





    if (FUNC_9(VAR_27, VAR_0,
                      &VAR_27->eq_dma, "event queue") != 0) {

        FUNC_10(VAR_27, &VAR_27->def_sb_dma);
        VAR_27->def_sb = ((void*)0);
        FUNC_6(VAR_27->parent_dma_tag);
        return (1);
    }

    VAR_27->eq = (union event_ring_elem * )VAR_27->eq_dma.vaddr;





    if (FUNC_9(VAR_27, sizeof(struct bxe_slowpath),
                      &VAR_27->sp_dma, "slow path") != 0) {

        FUNC_10(VAR_27, &VAR_27->eq_dma);
        VAR_27->eq = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->def_sb_dma);
        VAR_27->def_sb = ((void*)0);
        FUNC_6(VAR_27->parent_dma_tag);
        return (1);
    }

    VAR_27->sp = (struct bxe_slowpath *)VAR_27->sp_dma.vaddr;





    if (FUNC_9(VAR_27, VAR_0,
                      &VAR_27->spq_dma, "slow path queue") != 0) {

        FUNC_10(VAR_27, &VAR_27->sp_dma);
        VAR_27->sp = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->eq_dma);
        VAR_27->eq = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->def_sb_dma);
        VAR_27->def_sb = ((void*)0);
        FUNC_6(VAR_27->parent_dma_tag);
        return (1);
    }

    VAR_27->spq = (struct eth_spe *)VAR_27->spq_dma.vaddr;





    if (FUNC_9(VAR_27, VAR_9, &VAR_27->gz_buf_dma,
                      "fw decompression buffer") != 0) {

        FUNC_10(VAR_27, &VAR_27->spq_dma);
        VAR_27->spq = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->sp_dma);
        VAR_27->sp = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->eq_dma);
        VAR_27->eq = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->def_sb_dma);
        VAR_27->def_sb = ((void*)0);
        FUNC_6(VAR_27->parent_dma_tag);
        return (1);
    }

    VAR_27->gz_buf = (void *)VAR_27->gz_buf_dma.vaddr;

    if ((VAR_27->gz_strm =
         FUNC_14(sizeof(*VAR_27->gz_strm), VAR_14, VAR_15)) == ((void*)0)) {

        FUNC_10(VAR_27, &VAR_27->gz_buf_dma);
        VAR_27->gz_buf = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->spq_dma);
        VAR_27->spq = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->sp_dma);
        VAR_27->sp = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->eq_dma);
        VAR_27->eq = ((void*)0);
        FUNC_10(VAR_27, &VAR_27->def_sb_dma);
        VAR_27->def_sb = ((void*)0);
        FUNC_6(VAR_27->parent_dma_tag);
        return (1);
    }






    for (VAR_36 = 0; VAR_36 < VAR_27->num_queues; VAR_36++) {
        VAR_28 = &VAR_27->fp[VAR_36];
        VAR_28->sc = VAR_27;
        VAR_28->index = VAR_36;





        FUNC_15(VAR_34, sizeof(VAR_34), "fp %d status block", VAR_36);
        if (FUNC_9(VAR_27, sizeof(union bxe_host_hc_status_block),
                          &VAR_28->sb_dma, VAR_34) != 0) {

            FUNC_0(VAR_27, "Failed to alloc %s\n", VAR_34);
            return (1);
        } else {
            if (FUNC_1(VAR_27)) {
                VAR_28->status_block.e2_sb =
                    (struct host_hc_status_block_e2 *)VAR_28->sb_dma.vaddr;
            } else {
                VAR_28->status_block.e1x_sb =
                    (struct host_hc_status_block_e1x *)VAR_28->sb_dma.vaddr;
            }
        }





        FUNC_15(VAR_34, sizeof(VAR_34), "fp %d tx bd chain", VAR_36);
        if (FUNC_9(VAR_27, (VAR_0 * VAR_24),
                          &VAR_28->tx_dma, VAR_34) != 0) {

            FUNC_0(VAR_27, "Failed to alloc %s\n", VAR_34);
            return (1);
        } else {
            VAR_28->tx_chain = (union eth_tx_bd_types *)VAR_28->tx_dma.vaddr;
        }


        for (VAR_37 = 1; VAR_37 <= VAR_24; VAR_37++) {

            struct eth_tx_next_bd *VAR_38 =
                &VAR_28->tx_chain[VAR_26 * VAR_37 - 1].next_bd;

            VAR_29 = (VAR_28->tx_dma.paddr +
                       (VAR_0 * (VAR_37 % VAR_24)));
            VAR_38->addr_hi = FUNC_12(FUNC_3(VAR_29));
            VAR_38->addr_lo = FUNC_12(FUNC_4(VAR_29));
        }





        FUNC_15(VAR_34, sizeof(VAR_34), "fp %d rx bd chain", VAR_36);
        if (FUNC_9(VAR_27, (VAR_0 * VAR_18),
                          &VAR_28->rx_dma, VAR_34) != 0) {

            FUNC_0(VAR_27, "Failed to alloc %s\n", VAR_34);
            return (1);
        } else {
            VAR_28->rx_chain = (struct eth_rx_bd *)VAR_28->rx_dma.vaddr;
        }


        for (VAR_37 = 1; VAR_37 <= VAR_18; VAR_37++) {

            struct eth_rx_bd *VAR_39 =
                &VAR_28->rx_chain[VAR_20 * VAR_37 - 2];

            VAR_29 = (VAR_28->rx_dma.paddr +
                       (VAR_0 * (VAR_37 % VAR_18)));
            VAR_39->addr_hi = FUNC_12(FUNC_3(VAR_29));
            VAR_39->addr_lo = FUNC_12(FUNC_4(VAR_29));
        }





        FUNC_15(VAR_34, sizeof(VAR_34), "fp %d rcq chain", VAR_36);
        if (FUNC_9(VAR_27, (VAR_0 * VAR_16),
                          &VAR_28->rcq_dma, VAR_34) != 0) {

            FUNC_0(VAR_27, "Failed to alloc %s\n", VAR_34);
            return (1);
        } else {
            VAR_28->rcq_chain = (union eth_rx_cqe *)VAR_28->rcq_dma.vaddr;
        }


        for (VAR_37 = 1; VAR_37 <= VAR_16; VAR_37++) {

            struct eth_rx_cqe_next_page *VAR_40 =
                (struct eth_rx_cqe_next_page *)
                &VAR_28->rcq_chain[VAR_17 * VAR_37 - 1];

            VAR_29 = (VAR_28->rcq_dma.paddr +
                       (VAR_0 * (VAR_37 % VAR_16)));
            VAR_40->addr_hi = FUNC_12(FUNC_3(VAR_29));
            VAR_40->addr_lo = FUNC_12(FUNC_4(VAR_29));
        }





        FUNC_15(VAR_34, sizeof(VAR_34), "fp %d sge chain", VAR_36);
        if (FUNC_9(VAR_27, (VAR_0 * VAR_21),
                          &VAR_28->rx_sge_dma, VAR_34) != 0) {

            FUNC_0(VAR_27, "Failed to alloc %s\n", VAR_34);
            return (1);
        } else {
            VAR_28->rx_sge_chain = (struct eth_rx_sge *)VAR_28->rx_sge_dma.vaddr;
        }


        for (VAR_37 = 1; VAR_37 <= VAR_21; VAR_37++) {

            struct eth_rx_sge *VAR_41 =
                &VAR_28->rx_sge_chain[VAR_23 * VAR_37 - 2];

            VAR_29 = (VAR_28->rx_sge_dma.paddr +
                       (VAR_0 * (VAR_37 % VAR_21)));
            VAR_41->addr_hi = FUNC_12(FUNC_3(VAR_29));
            VAR_41->addr_lo = FUNC_12(FUNC_4(VAR_29));
        }






        if (FUNC_13(VAR_27->ifp) & (VAR_10 | VAR_11)) {
            VAR_32 = VAR_8;
            VAR_31 = VAR_6;
            VAR_33 = VAR_7;
        } else {
            VAR_32 = (VAR_12 * VAR_5);
            VAR_31 = VAR_5;
            VAR_33 = VAR_12;
        }


        VAR_35 = FUNC_5(VAR_27->parent_dma_tag,
                                1,
                                0,
                                VAR_2,
                                VAR_2,
                                ((void*)0),
                                ((void*)0),
                                VAR_32,
                                VAR_31,
                                VAR_33,
                                0,
                                ((void*)0),
                                ((void*)0),
                                &VAR_28->tx_mbuf_tag);
        if (VAR_35 != 0) {

            FUNC_0(VAR_27, "Failed to create dma tag for "
                      "'fp %d tx mbufs' (%d)\n", VAR_36, VAR_35);
            return (1);
        }


        for (VAR_37 = 0; VAR_37 < VAR_25; VAR_37++) {
            if (FUNC_7(VAR_28->tx_mbuf_tag,
                                  VAR_1,
                                  &VAR_28->tx_mbuf_chain[VAR_37].m_map)) {

                FUNC_0(VAR_27, "Failed to create dma map for "
                          "'fp %d tx mbuf %d' (%d)\n", VAR_36, VAR_37, VAR_35);
                return (1);
            }
        }






        VAR_35 = FUNC_5(VAR_27->parent_dma_tag,
                                1,
                                0,
                                VAR_2,
                                VAR_2,
                                ((void*)0),
                                ((void*)0),
                                VAR_13,
                                1,
                                VAR_13,
                                0,
                                ((void*)0),
                                ((void*)0),
                                &VAR_28->rx_mbuf_tag);
        if (VAR_35 != 0) {

            FUNC_0(VAR_27, "Failed to create dma tag for "
                      "'fp %d rx mbufs' (%d)\n", VAR_36, VAR_35);
            return (1);
        }


        for (VAR_37 = 0; VAR_37 < VAR_19; VAR_37++) {
            if (FUNC_7(VAR_28->rx_mbuf_tag,
                                  VAR_1,
                                  &VAR_28->rx_mbuf_chain[VAR_37].m_map)) {

                FUNC_0(VAR_27, "Failed to create dma map for "
                          "'fp %d rx mbuf %d' (%d)\n", VAR_36, VAR_37, VAR_35);
                return (1);
            }
        }


        if (FUNC_7(VAR_28->rx_mbuf_tag,
                              VAR_1,
                              &VAR_28->rx_mbuf_spare_map)) {

            FUNC_0(VAR_27, "Failed to create dma map for "
                      "'fp %d spare rx mbuf' (%d)\n", VAR_36, VAR_35);
            return (1);
        }






        VAR_35 = FUNC_5(VAR_27->parent_dma_tag,
                                1,
                                0,
                                VAR_2,
                                VAR_2,
                                ((void*)0),
                                ((void*)0),
                                VAR_0,
                                1,
                                VAR_0,
                                0,
                                ((void*)0),
                                ((void*)0),
                                &VAR_28->rx_sge_mbuf_tag);
        if (VAR_35 != 0) {

            FUNC_0(VAR_27, "Failed to create dma tag for "
                      "'fp %d rx sge mbufs' (%d)\n", VAR_36, VAR_35);
            return (1);
        }


        for (VAR_37 = 0; VAR_37 < VAR_22; VAR_37++) {
            if (FUNC_7(VAR_28->rx_sge_mbuf_tag,
                                  VAR_1,
                                  &VAR_28->rx_sge_mbuf_chain[VAR_37].m_map)) {

                FUNC_0(VAR_27, "Failed to create dma map for "
                          "'fp %d rx sge mbuf %d' (%d)\n", VAR_36, VAR_37, VAR_35);
                return (1);
            }
        }


        if (FUNC_7(VAR_28->rx_sge_mbuf_tag,
                              VAR_1,
                              &VAR_28->rx_sge_mbuf_spare_map)) {

            FUNC_0(VAR_27, "Failed to create dma map for "
                      "'fp %d spare rx sge mbuf' (%d)\n", VAR_36, VAR_35);
            return (1);
        }






        VAR_30 = FUNC_2(VAR_27);

        for (VAR_37 = 0; VAR_37 < VAR_30; VAR_37++) {
            if (FUNC_7(VAR_28->rx_mbuf_tag,
                                  VAR_1,
                                  &VAR_28->rx_tpa_info[VAR_37].bd.m_map)) {

                FUNC_0(VAR_27, "Failed to create dma map for "
                          "'fp %d rx tpa mbuf %d' (%d)\n", VAR_36, VAR_37, VAR_35);
                return (1);
            }
        }


        if (FUNC_7(VAR_28->rx_mbuf_tag,
                              VAR_1,
                              &VAR_28->rx_tpa_info_mbuf_spare_map)) {

            FUNC_0(VAR_27, "Failed to create dma map for "
                      "'fp %d spare rx tpa mbuf' (%d)\n", VAR_36, VAR_35);
            return (1);
        }

        FUNC_11(VAR_28);
    }

    return (0);
}
