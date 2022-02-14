
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bxe_softc {scalar_t__ state; int * ifp; int ifmedia; int sp_err_timeout_task; int * chip_tq; int chip_tq_task; int chip_tq_flags; } ;
typedef int * if_t ;
typedef int device_t ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int FUNC_8 (struct bxe_softc*) ;
 int FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (struct bxe_softc*) ;
 int FUNC_12 (struct bxe_softc*,int ,int ) ;
 int FUNC_13 (struct bxe_softc*) ;
 int FUNC_14 (struct bxe_softc*) ;
 struct bxe_softc* FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_24(device_t VAR_8)
{
    struct bxe_softc *VAR_9;
    if_t VAR_10;

    VAR_9 = FUNC_15(VAR_8);

    FUNC_0(VAR_9, VAR_3, "Starting detach...\n");

    VAR_10 = VAR_9->ifp;
    if (VAR_10 != ((void*)0) && FUNC_18(VAR_10)) {
        FUNC_1(VAR_9, "Cannot detach while VLANs are in use.\n");
        return(VAR_4);
    }

    FUNC_6(VAR_9);


    FUNC_13(VAR_9);


    FUNC_4(&VAR_9->chip_tq_flags, VAR_2);
    if (VAR_9->chip_tq) {
        FUNC_21(VAR_9->chip_tq, &VAR_9->chip_tq_task);
        FUNC_23(VAR_9->chip_tq);
        VAR_9->chip_tq = ((void*)0);
        FUNC_22(VAR_7,
            &VAR_9->sp_err_timeout_task);
    }


    if (VAR_9->state != VAR_0) {
        FUNC_2(VAR_9);
        FUNC_12(VAR_9, VAR_6, VAR_5);
        VAR_9->state = VAR_1;
        FUNC_3(VAR_9);
    }


    if (VAR_10 != ((void*)0)) {
        FUNC_16(VAR_10);
    }
    FUNC_19(&VAR_9->ifmedia);




    FUNC_9(VAR_9);


    FUNC_10(VAR_9);

    FUNC_8(VAR_9);


    FUNC_11(VAR_9);


    FUNC_7(VAR_9);
    FUNC_14(VAR_9);



    FUNC_5(VAR_9);


    if (VAR_9->ifp != ((void*)0)) {
        FUNC_17(VAR_9->ifp);
    }

    FUNC_20(VAR_8);

    return (0);
}
