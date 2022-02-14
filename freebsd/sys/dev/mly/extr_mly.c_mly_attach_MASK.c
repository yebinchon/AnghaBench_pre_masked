
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mly_softc {int mly_timeout; TYPE_1__* mly_dev_t; int mly_dev; int mly_task_complete; int mly_lock; int mly_periodic; } ;
typedef int device_t ;
struct TYPE_2__ {struct mly_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mly_softc*) ;
 int FUNC_1 (struct mly_softc*) ;
 int FUNC_2 (struct mly_softc*) ;
 int FUNC_3 (struct mly_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ,struct mly_softc*) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int,int ,struct mly_softc*) ;
 int FUNC_7 (int) ;
 struct mly_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_10 (int *,int ,int ,int ,int,char*,scalar_t__) ;
 int FUNC_11 (struct mly_softc*) ;
 int FUNC_12 (struct mly_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (struct mly_softc*) ;
 int FUNC_14 (struct mly_softc*) ;
 int FUNC_15 (struct mly_softc*) ;
 int FUNC_16 (struct mly_softc*) ;
 int FUNC_17 (struct mly_softc*) ;
 int FUNC_18 (struct mly_softc*) ;
 int FUNC_19 (struct mly_softc*) ;
 int FUNC_20 (struct mly_softc*) ;
 int FUNC_21 (struct mly_softc*) ;
 int FUNC_22 (struct mly_softc*) ;
 int FUNC_23 (void*) ;
 int FUNC_24 (struct mly_softc*) ;
 int FUNC_25 (struct mly_softc*) ;
 struct mly_softc* VAR_9 ;
 int VAR_10 ;
 int FUNC_26 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_11)
{
    struct mly_softc *VAR_12 = FUNC_8(VAR_11);
    int VAR_13;

    FUNC_7(1);

    VAR_12->mly_dev = VAR_11;
    FUNC_26(&VAR_12->mly_lock, "mly", ((void*)0), VAR_2);
    FUNC_5(&VAR_12->mly_periodic, &VAR_12->mly_lock, 0);
    if ((VAR_13 = FUNC_22(VAR_12)) != 0)
 goto out;




    FUNC_21(VAR_12);
    FUNC_19(VAR_12);
    FUNC_20(VAR_12);




    FUNC_4(&VAR_12->mly_task_complete, 0, VAR_8, VAR_12);


    FUNC_1(VAR_12);






    if ((VAR_13 = FUNC_16(VAR_12)))
 goto out;




    if ((VAR_13 = FUNC_11(VAR_12)))
 goto out;




    FUNC_0(VAR_12);
    VAR_13 = FUNC_17(VAR_12);
    FUNC_2(VAR_12);
    if (VAR_13)
 goto out;




    FUNC_24(VAR_12);
    if ((VAR_13 = FUNC_11(VAR_12)))
 goto out;





    FUNC_0(VAR_12);
    VAR_13 = FUNC_18(VAR_12);




    if (VAR_13 == 0)
 VAR_13 = FUNC_14(VAR_12);
    FUNC_2(VAR_12);
    if (VAR_13)
 goto out;




    if ((VAR_13 = FUNC_12(VAR_12)))
 goto out;




    FUNC_13(VAR_12);




    FUNC_0(VAR_12);
    FUNC_25(VAR_12);






    FUNC_23((void *)VAR_12);
    FUNC_2(VAR_12);




    VAR_12->mly_dev_t = FUNC_10(&VAR_7, 0, VAR_5, VAR_0,
        VAR_3 | VAR_4, "mly%d", FUNC_9(VAR_12->mly_dev));
    VAR_12->mly_dev_t->si_drv1 = VAR_12;


    FUNC_3(VAR_12);





 out:
    if (VAR_13 != 0)
 FUNC_15(VAR_12);
    return(VAR_13);
}
