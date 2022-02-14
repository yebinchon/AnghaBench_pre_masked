
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int num_queues; struct bxe_fastpath* fp; } ;
struct TYPE_2__ {int paddr; } ;
struct bxe_fastpath {TYPE_1__ rcq_dma; int rx_sge_prod; int rx_cq_prod; int rx_bd_prod; scalar_t__ rx_bd_cons; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct bxe_softc*,struct bxe_fastpath*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_1)
{
    struct bxe_fastpath *VAR_2;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1->num_queues; VAR_3++) {
        VAR_2 = &VAR_1->fp[VAR_3];

        VAR_2->rx_bd_cons = 0;






        FUNC_6(VAR_1, VAR_2,
                           VAR_2->rx_bd_prod,
                           VAR_2->rx_cq_prod,
                           VAR_2->rx_sge_prod);

        if (VAR_3 != 0) {
            continue;
        }

        if (FUNC_0(VAR_1)) {
            FUNC_1(VAR_1,
                   (VAR_0 +
                    FUNC_5(FUNC_2(VAR_1))),
                   FUNC_4(VAR_2->rcq_dma.paddr));
            FUNC_1(VAR_1,
                   (VAR_0 +
                    FUNC_5(FUNC_2(VAR_1)) + 4),
                   FUNC_3(VAR_2->rcq_dma.paddr));
        }
    }
}
