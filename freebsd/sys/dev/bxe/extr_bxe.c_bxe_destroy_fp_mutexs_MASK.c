
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {int num_queues; struct bxe_fastpath* fp; } ;
struct bxe_fastpath {int rx_mtx; int tx_mtx; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_0)
{
    int VAR_1;
    struct bxe_fastpath *VAR_2;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_queues; VAR_1++) {

        VAR_2 = &VAR_0->fp[VAR_1];

        if (FUNC_1(&VAR_2->tx_mtx)) {
            FUNC_0(&VAR_2->tx_mtx);
        }

        if (FUNC_1(&VAR_2->rx_mtx)) {
            FUNC_0(&VAR_2->rx_mtx);
        }
    }
}
