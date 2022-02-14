
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct bxe_softc {int num_queues; struct bxe_fastpath* fp; } ;
struct TYPE_2__ {scalar_t__ mbuf_alloc_rx; scalar_t__ mbuf_alloc_sge; scalar_t__ mbuf_alloc_tpa; scalar_t__ mbuf_alloc_tx; } ;
struct bxe_fastpath {TYPE_1__ eth_q_stats; int * tx_br; int tx_mtx; } ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__) ;
 int FUNC_1 (struct bxe_fastpath*) ;
 int FUNC_2 (struct bxe_fastpath*) ;
 struct mbuf* FUNC_3 (int *) ;
 int FUNC_4 (struct bxe_fastpath*) ;
 int FUNC_5 (struct bxe_fastpath*) ;
 int FUNC_6 (struct bxe_fastpath*) ;
 int FUNC_7 (struct mbuf*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bxe_softc *VAR_0)
{
    struct bxe_fastpath *VAR_1;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
        VAR_1 = &VAR_0->fp[VAR_2];
        FUNC_4(VAR_1);
        FUNC_6(VAR_1);
        FUNC_5(VAR_1);

        if (VAR_1->eth_q_stats.mbuf_alloc_rx != 0) {
            FUNC_0(VAR_0, "failed to claim all rx mbufs (%d left)\n",
                  VAR_1->eth_q_stats.mbuf_alloc_rx);
        }

        if (VAR_1->eth_q_stats.mbuf_alloc_sge != 0) {
            FUNC_0(VAR_0, "failed to claim all sge mbufs (%d left)\n",
                  VAR_1->eth_q_stats.mbuf_alloc_sge);
        }

        if (VAR_1->eth_q_stats.mbuf_alloc_tpa != 0) {
            FUNC_0(VAR_0, "failed to claim all sge mbufs (%d left)\n",
                  VAR_1->eth_q_stats.mbuf_alloc_tpa);
        }

        if (VAR_1->eth_q_stats.mbuf_alloc_tx != 0) {
            FUNC_0(VAR_0, "failed to release tx mbufs (%d left)\n",
                  VAR_1->eth_q_stats.mbuf_alloc_tx);
        }


    }
}
