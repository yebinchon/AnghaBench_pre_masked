
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bxe_softc {int unit; int num_queues; scalar_t__ interrupt_mode; TYPE_1__* intr; int dev; int state; struct bxe_softc* fp; int tq_name; void* tq; int tx_timeout_task; int tx_task; int tq_task; int sp_tq_name; void* sp_tq; int sp_tq_task; } ;
struct bxe_fastpath {int unit; int num_queues; scalar_t__ interrupt_mode; TYPE_1__* intr; int dev; int state; struct bxe_fastpath* fp; int tq_name; void* tq; int tx_timeout_task; int tx_task; int tq_task; int sp_tq_name; void* sp_tq; int sp_tq_task; } ;
struct TYPE_2__ {int tag; int resource; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int ,struct bxe_softc*) ;
 int FUNC_3 (void*,int *,int ,int ,struct bxe_softc*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,char*,...) ;
 int FUNC_6 (int ,int ,int,int *,int ,struct bxe_softc*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int ,int,char*,int,...) ;
 void* FUNC_8 (int ,int ,int ,void**) ;
 int FUNC_9 (void**,int,int ,char*,int ) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_10(struct bxe_softc *VAR_16)
{
    struct bxe_fastpath *VAR_17;
    int VAR_18 = 0;
    int VAR_19;

    FUNC_7(VAR_16->sp_tq_name, sizeof(VAR_16->sp_tq_name),
             "bxe%d_sp_tq", VAR_16->unit);
    FUNC_2(&VAR_16->sp_tq_task, 0, VAR_10, VAR_16);
    VAR_16->sp_tq = FUNC_8(VAR_16->sp_tq_name, VAR_6,
                                 VAR_15,
                                 &VAR_16->sp_tq);
    FUNC_9(&VAR_16->sp_tq, 1, VAR_8,
                            "%s", VAR_16->sp_tq_name);


    for (VAR_19 = 0; VAR_19 < VAR_16->num_queues; VAR_19++) {
        VAR_17 = &VAR_16->fp[VAR_19];
        FUNC_7(VAR_17->tq_name, sizeof(VAR_17->tq_name),
                 "bxe%d_fp%d_tq", VAR_16->unit, VAR_19);
        FUNC_2(&VAR_17->tq_task, 0, VAR_9, VAR_17);
        FUNC_2(&VAR_17->tx_task, 0, VAR_14, VAR_17);
        VAR_17->tq = FUNC_8(VAR_17->tq_name, VAR_6,
                                  VAR_15,
                                  &VAR_17->tq);
        FUNC_3(VAR_17->tq, &VAR_17->tx_timeout_task, 0,
                          VAR_14, VAR_17);
        FUNC_9(&VAR_17->tq, 1, VAR_7,
                                "%s", VAR_17->tq_name);
    }


    if (VAR_16->interrupt_mode == VAR_3) {
        FUNC_0(VAR_16, VAR_1, "Enabling slowpath MSI-X[0] vector\n");





        if ((VAR_18 = FUNC_6(VAR_16->dev, VAR_16->intr[0].resource,
                                 (VAR_5 | VAR_4),
                                 ((void*)0), VAR_13, VAR_16,
                                 &VAR_16->intr[0].tag)) != 0) {
            FUNC_1(VAR_16, "Failed to allocate MSI-X[0] vector (%d)\n", VAR_18);
            goto bxe_interrupt_attach_exit;
        }

        FUNC_5(VAR_16->dev, VAR_16->intr[0].resource,
                          VAR_16->intr[0].tag, "sp");




        for (VAR_19 = 0; VAR_19 < VAR_16->num_queues; VAR_19++) {
            VAR_17 = &VAR_16->fp[VAR_19];
            FUNC_0(VAR_16, VAR_1, "Enabling MSI-X[%d] vector\n", (VAR_19 + 1));






            if ((VAR_18 = FUNC_6(VAR_16->dev, VAR_16->intr[VAR_19 + 1].resource,
                                     (VAR_5 | VAR_4),
                                     ((void*)0), VAR_11, VAR_17,
                                     &VAR_16->intr[VAR_19 + 1].tag)) != 0) {
                FUNC_1(VAR_16, "Failed to allocate MSI-X[%d] vector (%d)\n",
                      (VAR_19 + 1), VAR_18);
                goto bxe_interrupt_attach_exit;
            }

            FUNC_5(VAR_16->dev, VAR_16->intr[VAR_19 + 1].resource,
                              VAR_16->intr[VAR_19 + 1].tag, "fp%02d", VAR_19);


            if (VAR_16->num_queues > 1) {
                FUNC_4(VAR_16->dev, VAR_16->intr[VAR_19 + 1].resource, VAR_19);
            }

            VAR_17->state = VAR_0;
        }
    } else if (VAR_16->interrupt_mode == VAR_2) {
        FUNC_0(VAR_16, VAR_1, "Enabling MSI[0] vector\n");






        if ((VAR_18 = FUNC_6(VAR_16->dev, VAR_16->intr[0].resource,
                                 (VAR_5 | VAR_4),
                                 ((void*)0), VAR_12, VAR_16,
                                 &VAR_16->intr[0].tag)) != 0) {
            FUNC_1(VAR_16, "Failed to allocate MSI[0] vector (%d)\n", VAR_18);
            goto bxe_interrupt_attach_exit;
        }

    } else {
        FUNC_0(VAR_16, VAR_1, "Enabling INTx interrupts\n");






        if ((VAR_18 = FUNC_6(VAR_16->dev, VAR_16->intr[0].resource,
                                 (VAR_5 | VAR_4),
                                 ((void*)0), VAR_12, VAR_16,
                                 &VAR_16->intr[0].tag)) != 0) {
            FUNC_1(VAR_16, "Failed to allocate INTx interrupt (%d)\n", VAR_18);
            goto bxe_interrupt_attach_exit;
        }
    }

bxe_interrupt_attach_exit:

    return (VAR_18);
}
