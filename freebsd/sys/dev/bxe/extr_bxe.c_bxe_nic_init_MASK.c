
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shmem2_base; int shmem_base; int chip_id; } ;
struct bxe_softc {int num_queues; TYPE_1__ devinfo; int link_vars; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*,int) ;
 int FUNC_7 (struct bxe_softc*,int) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (struct bxe_softc*) ;
 int FUNC_12 (struct bxe_softc*) ;
 int FUNC_13 (struct bxe_softc*) ;
 int FUNC_14 (struct bxe_softc*) ;
 int FUNC_15 (struct bxe_softc*,int *,int ,int ,int ,int) ;
 int FUNC_16 () ;
 int FUNC_17 () ;

__attribute__((used)) static void
FUNC_18(struct bxe_softc *VAR_2,
             int VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->num_queues; VAR_4++) {
        FUNC_6(VAR_2, VAR_4);
    }

    FUNC_17();

    FUNC_8(VAR_2);
    FUNC_10(VAR_2);

    if (FUNC_0(VAR_2)) {
        return;
    }


    FUNC_15(VAR_2, &VAR_2->link_vars,
                           VAR_2->devinfo.chip_id,
                           VAR_2->devinfo.shmem_base,
                           VAR_2->devinfo.shmem2_base,
                           FUNC_2(VAR_2));

    FUNC_4(VAR_2);
    FUNC_14(VAR_2);
    FUNC_9(VAR_2);
    FUNC_5(VAR_2);
    FUNC_7(VAR_2, VAR_3);
    FUNC_12(VAR_2);
    FUNC_13(VAR_2);


    FUNC_16();

    FUNC_11(VAR_2);


    FUNC_3(VAR_2,
                             FUNC_1(VAR_2,
                                    (VAR_1 +
                                     FUNC_2(VAR_2)*4)) &
                             VAR_0);
}
