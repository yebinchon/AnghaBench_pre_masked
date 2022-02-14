
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pcie_cap_flags; } ;
struct bxe_softc {void* interrupt_mode; int num_queues; int intr_count; TYPE_2__* intr; int dev; TYPE_1__ devinfo; } ;
struct TYPE_4__ {int rid; int * resource; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int FUNC_1 (struct bxe_softc*,char*,...) ;
 int FUNC_2 (struct bxe_softc*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int,int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct bxe_softc *VAR_9)
{
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16;
    int VAR_17;


    if (VAR_9->interrupt_mode > 0) {
        if (VAR_9->devinfo.pcie_cap_flags & VAR_0) {
            VAR_10 = FUNC_9(VAR_9->dev);
        }

        if (VAR_9->devinfo.pcie_cap_flags & VAR_1) {
            VAR_11 = FUNC_8(VAR_9->dev);
        }

        FUNC_0(VAR_9, VAR_2, "%d MSI and %d MSI-X vectors available\n",
              VAR_11, VAR_10);
    }

    do {
        if (VAR_9->interrupt_mode != VAR_5) {
            break;
        }

        if (((VAR_9->devinfo.pcie_cap_flags & VAR_0) == 0) ||
            (VAR_10 < 2)) {
            VAR_9->interrupt_mode = VAR_4;
            break;
        }


        VAR_12 = FUNC_5((VAR_9->num_queues + 1), VAR_10);

        FUNC_0(VAR_9, VAR_2, "Requesting %d MSI-X vectors\n", VAR_12);

        VAR_13 = VAR_12;
        if ((VAR_17 = FUNC_7(VAR_9->dev, &VAR_13)) != 0) {
            FUNC_1(VAR_9, "MSI-X alloc failed! (%d)\n", VAR_17);
            VAR_9->interrupt_mode = VAR_4;
            break;
        }

        if (VAR_13 < 2) {
            FUNC_1(VAR_9, "MSI-X allocation less than 2!\n");
            VAR_9->interrupt_mode = VAR_4;
            FUNC_10(VAR_9->dev);
            break;
        }

        FUNC_2(VAR_9, "MSI-X vectors Requested %d and Allocated %d\n",
              VAR_12, VAR_13);


        VAR_9->intr_count = VAR_13;
        VAR_9->num_queues = VAR_13 - 1;

        VAR_14 = 1;


        for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
            VAR_9->intr[VAR_15].rid = (VAR_14 + VAR_15);

            if ((VAR_9->intr[VAR_15].resource =
                 FUNC_3(VAR_9->dev,
                                        VAR_8,
                                        &VAR_9->intr[VAR_15].rid,
                                        VAR_6)) == ((void*)0)) {
                FUNC_1(VAR_9, "Failed to map MSI-X[%d] (rid=%d)!\n",
                      VAR_15, (VAR_14 + VAR_15));

                for (VAR_16 = (VAR_15 - 1); VAR_16 >= 0; VAR_16--) {
                    FUNC_4(VAR_9->dev,
                                         VAR_8,
                                         VAR_9->intr[VAR_16].rid,
                                         VAR_9->intr[VAR_16].resource);
                }

                VAR_9->intr_count = 0;
                VAR_9->num_queues = 0;
                VAR_9->interrupt_mode = VAR_4;
                FUNC_10(VAR_9->dev);
                break;
            }

            FUNC_0(VAR_9, VAR_2, "Mapped MSI-X[%d] (rid=%d)\n", VAR_15, (VAR_14 + VAR_15));
        }
    } while (0);

    do {
        if (VAR_9->interrupt_mode != VAR_4) {
            break;
        }

        if (((VAR_9->devinfo.pcie_cap_flags & VAR_1) == 0) ||
            (VAR_11 < 1)) {
            VAR_9->interrupt_mode = VAR_3;
            break;
        }


        VAR_12 = 1;

        FUNC_0(VAR_9, VAR_2, "Requesting %d MSI vectors\n", VAR_12);

        VAR_13 = VAR_12;
        if ((VAR_17 = FUNC_6(VAR_9->dev, &VAR_13)) != 0) {
            FUNC_1(VAR_9, "MSI alloc failed (%d)!\n", VAR_17);
            VAR_9->interrupt_mode = VAR_3;
            break;
        }

        if (VAR_13 != 1) {
            FUNC_1(VAR_9, "MSI allocation is not 1!\n");
            VAR_9->interrupt_mode = VAR_3;
            FUNC_10(VAR_9->dev);
            break;
        }

        FUNC_2(VAR_9, "MSI vectors Requested %d and Allocated %d\n",
              VAR_12, VAR_13);


        VAR_9->intr_count = VAR_13;
        VAR_9->num_queues = VAR_13;

        VAR_14 = 1;

        VAR_9->intr[0].rid = VAR_14;

        if ((VAR_9->intr[0].resource =
             FUNC_3(VAR_9->dev,
                                    VAR_8,
                                    &VAR_9->intr[0].rid,
                                    VAR_6)) == ((void*)0)) {
            FUNC_1(VAR_9, "Failed to map MSI[0] (rid=%d)!\n", VAR_14);
            VAR_9->intr_count = 0;
            VAR_9->num_queues = 0;
            VAR_9->interrupt_mode = VAR_3;
            FUNC_10(VAR_9->dev);
            break;
        }

        FUNC_0(VAR_9, VAR_2, "Mapped MSI[0] (rid=%d)\n", VAR_14);
    } while (0);

    do {
        if (VAR_9->interrupt_mode != VAR_3) {
            break;
        }

        FUNC_0(VAR_9, VAR_2, "Requesting legacy INTx interrupt\n");


        VAR_9->intr_count = 1;
        VAR_9->num_queues = 1;

        VAR_14 = 0;

        VAR_9->intr[0].rid = VAR_14;

        if ((VAR_9->intr[0].resource =
             FUNC_3(VAR_9->dev,
                                    VAR_8,
                                    &VAR_9->intr[0].rid,
                                    (VAR_6 | VAR_7))) == ((void*)0)) {
            FUNC_1(VAR_9, "Failed to map INTx (rid=%d)!\n", VAR_14);
            VAR_9->intr_count = 0;
            VAR_9->num_queues = 0;
            VAR_9->interrupt_mode = -1;
            break;
        }

        FUNC_0(VAR_9, VAR_2, "Mapped INTx (rid=%d)\n", VAR_14);
    } while (0);

    if (VAR_9->interrupt_mode == -1) {
        FUNC_1(VAR_9, "Interrupt Allocation: FAILED!!!\n");
        VAR_17 = 1;
    } else {
        FUNC_0(VAR_9, VAR_2,
              "Interrupt Allocation: interrupt_mode=%d, num_queues=%d\n",
              VAR_9->interrupt_mode, VAR_9->num_queues);
        VAR_17 = 0;
    }

    return (VAR_17);
}
