
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct twe_softc* ich_arg; int ich_func; } ;
struct twe_softc {TYPE_2__ twe_ich; TYPE_1__* twe_dev_t; int twe_dev; int twe_immediate_map; int twe_immediate; int twe_immediate_dmat; int twe_parent_dmat; int twe_buffer_dmat; int twe_io_lock; int twe_cmd; int twe_cmdmap; int twe_cmd_dmat; int twe_intr; int * twe_irq; int * twe_io; int twe_config_lock; } ;
struct sysctl_oid {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {struct twe_softc* si_drv1; } ;
typedef int TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 struct sysctl_oid* FUNC_0 (int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int,int ,struct twe_softc*,int ) ;
 scalar_t__ FUNC_7 (int ,void**,int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *,int,int *,int ,struct twe_softc*,int *) ;
 int * VAR_29 ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 struct twe_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 TYPE_1__* FUNC_17 (int *,int ,int ,int ,int,char*,int ) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,char*) ;
 int VAR_30 ;
 int FUNC_21 (struct twe_softc*) ;
 int FUNC_22 (struct twe_softc*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_23 (struct twe_softc*,char*) ;
 int FUNC_24 (struct twe_softc*) ;
 int VAR_33 ;

__attribute__((used)) static int
FUNC_25(device_t VAR_34)
{
    struct twe_softc *VAR_35;
    struct sysctl_oid *VAR_36;
    int VAR_37, VAR_38;

    FUNC_12(4);




    VAR_35 = FUNC_14(VAR_34);
    VAR_35->twe_dev = VAR_34;
    FUNC_18(&VAR_35->twe_io_lock, "twe I/O", ((void*)0), VAR_14);
    FUNC_20(&VAR_35->twe_config_lock, "twe config");







    VAR_36 = FUNC_0(FUNC_15(VAR_34),
 FUNC_3(VAR_28), VAR_15,
 FUNC_13(VAR_34), VAR_6, 0, "");
    if (VAR_36 == ((void*)0)) {
 FUNC_23(VAR_35, "cannot add sysctl tree node\n");
 return (VAR_9);
    }
    FUNC_1(FUNC_15(VAR_34), FUNC_2(VAR_36),
 VAR_15, "driver_version", VAR_6, VAR_23, 0,
 "TWE driver version");




    FUNC_19(VAR_34);




    VAR_37 = VAR_24;
    if ((VAR_35->twe_io = FUNC_4(VAR_34, VAR_19, &VAR_37,
        VAR_17)) == ((void*)0)) {
 FUNC_23(VAR_35, "can't allocate register window\n");
 FUNC_22(VAR_35);
 return(VAR_9);
    }




    if (FUNC_5(FUNC_8(VAR_34),
      1, 0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      VAR_4,
      VAR_5,
      VAR_4,
      0,
      ((void*)0),
      ((void*)0),
      &VAR_35->twe_parent_dmat)) {
 FUNC_23(VAR_35, "can't allocate parent DMA tag\n");
 FUNC_22(VAR_35);
 return(VAR_8);
    }




    VAR_37 = 0;
    if ((VAR_35->twe_irq = FUNC_4(VAR_35->twe_dev, VAR_20,
        &VAR_37, VAR_18 | VAR_17)) == ((void*)0)) {
 FUNC_23(VAR_35, "can't allocate interrupt\n");
 FUNC_22(VAR_35);
 return(VAR_9);
    }
    if (FUNC_9(VAR_35->twe_dev, VAR_35->twe_irq, VAR_13 | VAR_11 | VAR_12,
         ((void*)0), VAR_32, VAR_35, &VAR_35->twe_intr)) {
 FUNC_23(VAR_35, "can't set up interrupt\n");
 FUNC_22(VAR_35);
 return(VAR_9);
    }




    if (FUNC_5(VAR_35->twe_parent_dmat,
      1, 0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      sizeof(TWE_Command) *
      VAR_26, 1,
      VAR_4,
      0,
      ((void*)0),
      ((void*)0),
      &VAR_35->twe_cmd_dmat)) {
 FUNC_23(VAR_35, "can't allocate data buffer DMA tag\n");
 FUNC_22(VAR_35);
 return(VAR_8);
    }



    if (FUNC_7(VAR_35->twe_cmd_dmat, (void **)&VAR_35->twe_cmd,
    VAR_1, &VAR_35->twe_cmdmap)) {
 FUNC_23(VAR_35, "can't allocate command memory\n");
 return(VAR_8);
    }
    FUNC_6(VAR_35->twe_cmd_dmat, VAR_35->twe_cmdmap, VAR_35->twe_cmd,
      sizeof(TWE_Command) * VAR_26,
      VAR_33, VAR_35, 0);
    FUNC_10(VAR_35->twe_cmd, sizeof(TWE_Command) * VAR_26);




    if (FUNC_5(VAR_35->twe_parent_dmat,
      1, 0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      (VAR_25 - 1) * VAR_16,
      VAR_25,
      VAR_4,
      VAR_0,
      VAR_29,
      &VAR_35->twe_io_lock,
      &VAR_35->twe_buffer_dmat)) {
 FUNC_23(VAR_35, "can't allocate data buffer DMA tag\n");
 FUNC_22(VAR_35);
 return(VAR_8);
    }




    if (FUNC_5(VAR_35->twe_parent_dmat,
      1, 0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      VAR_7, 1,
      VAR_4,
      0,
      ((void*)0),
      ((void*)0),
      &VAR_35->twe_immediate_dmat)) {
 FUNC_23(VAR_35, "can't allocate data buffer DMA tag\n");
 FUNC_22(VAR_35);
 return(VAR_8);
    }



     if (FUNC_7(VAR_35->twe_immediate_dmat, (void **)&VAR_35->twe_immediate,
     VAR_1, &VAR_35->twe_immediate_map)) {
 FUNC_23(VAR_35, "can't allocate memory for immediate requests\n");
 return(VAR_8);
     }




    if ((VAR_38 = FUNC_24(VAR_35))) {
 FUNC_22(VAR_35);
 return(VAR_38);
    }




    FUNC_21(VAR_35);




    VAR_35->twe_dev_t = FUNC_17(&VAR_30, FUNC_16(VAR_35->twe_dev), VAR_27, VAR_10,
        VAR_21 | VAR_22, "twe%d", FUNC_16(VAR_35->twe_dev));
    VAR_35->twe_dev_t->si_drv1 = VAR_35;






    VAR_35->twe_ich.ich_func = VAR_31;
    VAR_35->twe_ich.ich_arg = VAR_35;
    if (FUNC_11(&VAR_35->twe_ich) != 0) {
 FUNC_23(VAR_35, "can't establish configuration hook\n");
 FUNC_22(VAR_35);
 return(VAR_9);
    }

    return(0);
}
