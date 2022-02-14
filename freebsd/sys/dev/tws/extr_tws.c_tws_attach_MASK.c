
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct tws_softc {int mfa_base; int irqs; int tws_clist; int io_lock; int gen_lock; int sim_lock; int q_lock; void* reg_res_id; int * reg_res; int tws_dev; void* mfa_res_id; int * mfa_res; int ** irq_res; void** irq_res_id; scalar_t__ cmd_tag; int cmd_map; scalar_t__ dma_mem; scalar_t__ dma_mem_phys; TYPE_1__* tws_cdev; int device_id; int intr_type; void* bus_mfa_handle; void* bus_mfa_tag; void* bus_handle; void* bus_tag; int * tws_oidp; int stats_timer; int subdevice_id; int subvendor_id; } ;
typedef int device_t ;
struct TYPE_3__ {struct tws_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int *,int ,int ,int ,int ,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int FUNC_4 (struct tws_softc*,char*,int ,void*) ;
 int FUNC_5 (struct tws_softc*,char*,int,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 void* FUNC_6 (int ,int ,void**,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int ,void*,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 struct tws_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 TYPE_1__* FUNC_16 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,void*,int) ;
 int FUNC_26 (char*) ;
 void* FUNC_27 (int *) ;
 void* FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (struct tws_softc*) ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_32 (struct tws_softc*) ;
 scalar_t__ FUNC_33 (struct tws_softc*) ;
 scalar_t__ FUNC_34 (struct tws_softc*) ;
 int FUNC_35 (struct tws_softc*,int ) ;
 int FUNC_36 (struct tws_softc*,int ) ;
 scalar_t__ FUNC_37 (struct tws_softc*) ;
 int FUNC_38 (struct tws_softc*) ;

__attribute__((used)) static int
FUNC_39(device_t VAR_30)
{
    struct tws_softc *VAR_31 = FUNC_14(VAR_30);
    u_int32_t VAR_32;
    int VAR_33=0,VAR_34;



    VAR_31->tws_dev = VAR_30;
    VAR_31->device_id = FUNC_22(VAR_30);
    VAR_31->subvendor_id = FUNC_24(VAR_30);
    VAR_31->subdevice_id = FUNC_23(VAR_30);


    FUNC_18( &VAR_31->q_lock, "tws_q_lock", ((void*)0), VAR_5);
    FUNC_18( &VAR_31->sim_lock, "tws_sim_lock", ((void*)0), VAR_5);
    FUNC_18( &VAR_31->gen_lock, "tws_gen_lock", ((void*)0), VAR_5);
    FUNC_18( &VAR_31->io_lock, "tws_io_lock", ((void*)0), VAR_5 | VAR_6);
    FUNC_11(&VAR_31->stats_timer, 1);

    if ( FUNC_34(VAR_31) == VAR_3 )
        FUNC_26("trace init failure\n");

    FUNC_19(&VAR_31->gen_lock);
    FUNC_36(VAR_31, VAR_20);
    FUNC_20(&VAR_31->gen_lock);



    FUNC_4(VAR_31, "BIG endian", 0, 0);


    FUNC_30(&VAR_31->tws_clist);
    VAR_31->tws_oidp = FUNC_0(&VAR_31->tws_clist,
                                   FUNC_3(VAR_27), VAR_7,
                                   FUNC_13(VAR_30),
                                   VAR_1, 0, "");
    if ( VAR_31->tws_oidp == ((void*)0) ) {
        FUNC_35(VAR_31, VAR_9);
        goto attach_fail_1;
    }
    FUNC_1(&VAR_31->tws_clist, FUNC_2(VAR_31->tws_oidp),
                      VAR_7, "driver_version", VAR_1,
                      VAR_17, 0, "TWS driver version");

    FUNC_21(VAR_30);

    VAR_32 = FUNC_25(VAR_30, VAR_23, 4);
    FUNC_5(VAR_31, "bar0 ", VAR_32, 0);
    VAR_32 = FUNC_25(VAR_30, VAR_24, 4);
    VAR_32 = VAR_32 & ~VAR_14;
    FUNC_5(VAR_31, "bar1 ", VAR_32, 0);






    VAR_31->mfa_base = (u_int64_t)FUNC_25(VAR_30, VAR_25, 4);
    VAR_31->mfa_base = VAR_31->mfa_base & ~VAR_14;
    FUNC_5(VAR_31, "bar2 ", VAR_31->mfa_base, 0);



    VAR_31->reg_res_id = VAR_24;
    if ((VAR_31->reg_res = FUNC_6(VAR_30, VAR_11,
                                &(VAR_31->reg_res_id), VAR_8))
                                == ((void*)0)) {
        FUNC_35(VAR_31, VAR_0);
        goto attach_fail_1;
    }
    VAR_31->bus_tag = FUNC_28(VAR_31->reg_res);
    VAR_31->bus_handle = FUNC_27(VAR_31->reg_res);



    VAR_31->mfa_res_id = VAR_25;
    if ((VAR_31->mfa_res = FUNC_6(VAR_30, VAR_11,
                          &(VAR_31->mfa_res_id), VAR_8))
                                == ((void*)0)) {
        FUNC_35(VAR_31, VAR_0);
        goto attach_fail_2;
    }
    VAR_31->bus_mfa_tag = FUNC_28(VAR_31->mfa_res);
    VAR_31->bus_mfa_handle = FUNC_27(VAR_31->mfa_res);



    VAR_31->intr_type = VAR_21;

    if ( VAR_29 )
        VAR_31->intr_type = VAR_22;
    if ( FUNC_37(VAR_31) == VAR_3 ) {
        FUNC_35(VAR_31, VAR_0);
        goto attach_fail_3;
    }







    VAR_31->tws_cdev = FUNC_16(&VAR_28, FUNC_15(VAR_30),
        VAR_26, VAR_4, VAR_12 | VAR_13, "tws%u",
        FUNC_15(VAR_30));
    VAR_31->tws_cdev->si_drv1 = VAR_31;

    if ( FUNC_32(VAR_31) == VAR_3 ) {
        FUNC_35(VAR_31, VAR_19);
        goto attach_fail_4;
    }
    if ( FUNC_33(VAR_31) == VAR_3 ) {
        FUNC_35(VAR_31, VAR_16);
        goto attach_fail_4;
    }
    if ((VAR_33 = FUNC_31(VAR_31))) {
        FUNC_35(VAR_31, VAR_15);
        goto attach_fail_4;
    }

    FUNC_19(&VAR_31->gen_lock);
    FUNC_36(VAR_31, VAR_18);
    FUNC_20(&VAR_31->gen_lock);

    FUNC_5(VAR_31, "attached successfully", 0, VAR_31->device_id);
    return(0);

attach_fail_4:
    FUNC_38(VAR_31);
    FUNC_12(VAR_31->tws_cdev);
    if (VAR_31->dma_mem_phys)
     FUNC_8(VAR_31->cmd_tag, VAR_31->cmd_map);
    if (VAR_31->dma_mem)
     FUNC_9(VAR_31->cmd_tag, VAR_31->dma_mem, VAR_31->cmd_map);
    if (VAR_31->cmd_tag)
     FUNC_7(VAR_31->cmd_tag);
attach_fail_3:
    for(VAR_34=0;VAR_34<VAR_31->irqs;VAR_34++) {
        if ( VAR_31->irq_res[VAR_34] ){
            if (FUNC_10(VAR_31->tws_dev,
                 VAR_10, VAR_31->irq_res_id[VAR_34], VAR_31->irq_res[VAR_34]))
                FUNC_4(VAR_31, "bus irq res", 0, 0);
        }
    }

attach_fail_2:

    if ( VAR_31->mfa_res ){
        if (FUNC_10(VAR_31->tws_dev,
                 VAR_11, VAR_31->mfa_res_id, VAR_31->mfa_res))
            FUNC_4(VAR_31, "bus release ", 0, VAR_31->mfa_res_id);
    }
    if ( VAR_31->reg_res ){
        if (FUNC_10(VAR_31->tws_dev,
                 VAR_11, VAR_31->reg_res_id, VAR_31->reg_res))
            FUNC_4(VAR_31, "bus release2 ", 0, VAR_31->reg_res_id);
    }
attach_fail_1:
    FUNC_17(&VAR_31->q_lock);
    FUNC_17(&VAR_31->sim_lock);
    FUNC_17(&VAR_31->gen_lock);
    FUNC_17(&VAR_31->io_lock);
    FUNC_29(&VAR_31->tws_clist);
    return (VAR_2);
}
