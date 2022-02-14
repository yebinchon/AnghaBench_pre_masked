
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int intr_count; int num_queues; int * sp_tq; int sp_tq_task; struct bxe_fastpath* fp; TYPE_1__* intr; int dev; } ;
struct bxe_fastpath {int * tq; int tx_timeout_task; int tx_task; int tq_task; } ;
struct TYPE_2__ {scalar_t__ tag; scalar_t__ resource; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_1)
{
    struct bxe_fastpath *VAR_2;
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_1->intr_count; VAR_3++) {
        if (VAR_1->intr[VAR_3].resource && VAR_1->intr[VAR_3].tag) {
            FUNC_0(VAR_1, VAR_0, "Disabling interrupt vector %d\n", VAR_3);
            FUNC_1(VAR_1->dev, VAR_1->intr[VAR_3].resource, VAR_1->intr[VAR_3].tag);
        }
    }

    for (VAR_3 = 0; VAR_3 < VAR_1->num_queues; VAR_3++) {
        VAR_2 = &VAR_1->fp[VAR_3];
        if (VAR_2->tq) {
            FUNC_3(VAR_2->tq, &VAR_2->tq_task);
            FUNC_3(VAR_2->tq, &VAR_2->tx_task);
            while (FUNC_2(VAR_2->tq, &VAR_2->tx_timeout_task,
                ((void*)0)))
                FUNC_4(VAR_2->tq, &VAR_2->tx_timeout_task);
        }

        for (VAR_3 = 0; VAR_3 < VAR_1->num_queues; VAR_3++) {
            VAR_2 = &VAR_1->fp[VAR_3];
            if (VAR_2->tq != ((void*)0)) {
                FUNC_5(VAR_2->tq);
                VAR_2->tq = ((void*)0);
            }
        }
    }

    if (VAR_1->sp_tq) {
        FUNC_3(VAR_1->sp_tq, &VAR_1->sp_tq_task);
        FUNC_5(VAR_1->sp_tq);
        VAR_1->sp_tq = ((void*)0);
    }
}
