
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intr_config_hook {int dummy; } ;
struct TYPE_6__ {struct amr_softc* ich_arg; int ich_func; } ;
struct amr_softc {scalar_t__ amr_nextslot; scalar_t__ amr_maxio; int amr_dev; TYPE_3__ amr_ich; TYPE_1__* amr_dev_t; int * amr_pass; int amr_poll_command; int amr_get_work; int amr_submit_command; int amr_poll_command1; int amr_bioq; int amr_cmd_clusters; int amr_ready; int amr_freecmds; } ;
typedef int * device_t ;
struct TYPE_5__ {struct amr_softc* si_drv1; } ;


 scalar_t__ FUNC_0 (struct amr_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (struct amr_softc*) ;
 int VAR_6 ;
 int FUNC_3 (struct amr_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct amr_softc*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct amr_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (struct amr_softc*) ;
 int VAR_11 ;
 int FUNC_8 (struct amr_softc*) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (struct amr_softc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int) ;
 int * FUNC_16 (int ,char*,int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,struct amr_softc*) ;
 int VAR_15 ;
 TYPE_1__* FUNC_21 (int *,scalar_t__,int ,int ,int,char*,scalar_t__) ;
 int FUNC_22 (TYPE_1__*,char*) ;

int
FUNC_23(struct amr_softc *VAR_16)
{
    device_t VAR_17;

    FUNC_15(1);




    FUNC_4(&VAR_16->amr_freecmds);
    FUNC_4(&VAR_16->amr_ready);
    FUNC_1(&VAR_16->amr_cmd_clusters);
    FUNC_10(&VAR_16->amr_bioq);

    FUNC_14(2, "queue init done");




    if (FUNC_0(VAR_16)) {
 VAR_16->amr_submit_command = VAR_10;
 VAR_16->amr_get_work = VAR_7;
 VAR_16->amr_poll_command = VAR_8;
 VAR_16->amr_poll_command1 = VAR_9;
    } else {
 VAR_16->amr_submit_command = VAR_14;
 VAR_16->amr_get_work = VAR_12;
 VAR_16->amr_poll_command = VAR_13;
 FUNC_8(VAR_16);
    }
    FUNC_2(VAR_16);




    if (FUNC_7(VAR_16))
 return(VAR_1);

    FUNC_14(2, "controller query complete");




    while (VAR_16->amr_nextslot < VAR_16->amr_maxio)
 FUNC_2(VAR_16);




    FUNC_5(VAR_16);




    VAR_17 = FUNC_16(VAR_16->amr_dev, "amrp", -1);
    VAR_16->amr_pass = VAR_17;
    if (VAR_17 != ((void*)0)) {
 FUNC_20(VAR_17, VAR_16);
 FUNC_19(VAR_17, "SCSI Passthrough Bus");
 FUNC_11(VAR_16->amr_dev);
    }




    VAR_16->amr_dev_t = FUNC_21(&VAR_6, FUNC_17(VAR_16->amr_dev), VAR_5, VAR_2,
        VAR_3 | VAR_4, "amr%d", FUNC_17(VAR_16->amr_dev));
    VAR_16->amr_dev_t->si_drv1 = VAR_16;
    VAR_15++;
    if (FUNC_17(VAR_16->amr_dev) == 0)
 FUNC_22(VAR_16->amr_dev_t, "megadev0");





    FUNC_12(&VAR_16->amr_ich, sizeof(struct intr_config_hook));
    VAR_16->amr_ich.ich_func = VAR_11;
    VAR_16->amr_ich.ich_arg = VAR_16;
    if (FUNC_13(&VAR_16->amr_ich) != 0) {
 FUNC_18(VAR_16->amr_dev, "can't establish configuration hook\n");
 return(VAR_0);
    }




    FUNC_3(VAR_16);

    FUNC_14(2, "attach complete");
    return(0);
}
