
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int sim_lock; int * sim; int path; int tws_dev; } ;
struct cam_devq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tws_softc*,char*,int,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_1 (int ,int ,char*,struct tws_softc*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct cam_devq* FUNC_4 (int) ;
 int FUNC_5 (struct cam_devq*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct tws_softc*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 (int *,int *,int ,int ,int ) ;

int
FUNC_13(struct tws_softc *VAR_16)
{
    struct cam_devq *VAR_17;

    FUNC_0(VAR_16, "entry", 0, VAR_16);






    if ( VAR_13 < 1 )
        VAR_13 = 1;
    if ( VAR_13 > (VAR_15 - VAR_9) )
        VAR_13 = VAR_15 - VAR_9;

    FUNC_0(VAR_16, "depths,ctlr,cam", VAR_15, VAR_13);

    if ((VAR_17 = FUNC_4(VAR_13)) == ((void*)0)) {
        FUNC_9(VAR_16, VAR_2);
        return(VAR_6);
    }







    VAR_16->sim = FUNC_1(VAR_12, VAR_14, "tws", VAR_16,
                      FUNC_6(VAR_16->tws_dev),
                      &VAR_16->sim_lock,
                      VAR_13, 1, VAR_17);

    if (VAR_16->sim == ((void*)0)) {
        FUNC_5(VAR_17);
        FUNC_9(VAR_16, VAR_3);
    }

    FUNC_7(&VAR_16->sim_lock);
    if (FUNC_11(VAR_16->sim,
                         VAR_16->tws_dev,
                         0) != VAR_4) {
        FUNC_2(VAR_16->sim, VAR_8);
        VAR_16->sim = ((void*)0);
        FUNC_8(&VAR_16->sim_lock);
        FUNC_9(VAR_16, VAR_10);
        return(VAR_7);
    }
    if (FUNC_12(&VAR_16->path, ((void*)0), FUNC_3(VAR_16->sim),
                         VAR_5,
                         VAR_0) != VAR_1) {
        FUNC_10(FUNC_3(VAR_16->sim));

        FUNC_2(VAR_16->sim, VAR_8);
        FUNC_9(VAR_16, VAR_11);
        FUNC_8(&VAR_16->sim_lock);
        return(VAR_7);
    }
    FUNC_8(&VAR_16->sim_lock);

    return(0);
}
