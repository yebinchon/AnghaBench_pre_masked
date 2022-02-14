
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct aac_softc* ich_arg; int ich_func; } ;
struct TYPE_5__ {int buildNumber; } ;
struct aac_softc {int flags; int aac_io_lock; int aac_daemontime; int aac_sim_tqh; int aac_dev; int * eh; int aifthread; TYPE_2__* aac_dev_t; TYPE_4__ aac_ich; TYPE_1__ aac_revision; int aac_ev_cmfree; int aac_container_tqh; int aac_container_lock; int aac_aifq_lock; int aac_state; int aac_task_complete; } ;
struct TYPE_6__ {struct aac_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,struct aac_softc*) ;
 int VAR_9 ;
 int FUNC_5 (struct aac_softc*) ;
 int VAR_10 ;
 int FUNC_6 (struct aac_softc*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct aac_softc*) ;
 int FUNC_8 (struct aac_softc*) ;
 int FUNC_9 (struct aac_softc*) ;
 int FUNC_10 (struct aac_softc*) ;
 int FUNC_11 (struct aac_softc*) ;
 int FUNC_12 (struct aac_softc*) ;
 int FUNC_13 (struct aac_softc*) ;
 int FUNC_14 (struct aac_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *,int,int ,struct aac_softc*) ;
 scalar_t__ FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (struct aac_softc*,char*,char*) ;
 int VAR_16 ;
 scalar_t__ FUNC_23 (void (*) (void*),struct aac_softc*,int *,int ,int ,char*,int) ;
 TYPE_2__* FUNC_24 (int *,int,int ,int ,int,char*,int) ;
 int FUNC_25 (TYPE_2__*,char*,int) ;
 int FUNC_26 (int *,char*,int *,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (char*) ;
 int VAR_17 ;

int
FUNC_30(struct aac_softc *VAR_18)
{
 int VAR_19, VAR_20;

 FUNC_22(VAR_18, VAR_5, "");




 FUNC_12(VAR_18);
 FUNC_13(VAR_18);
 FUNC_11(VAR_18);
 FUNC_10(VAR_18);




 FUNC_4(&VAR_18->aac_task_complete, 0, VAR_12, VAR_18);


 VAR_18->aac_state |= VAR_1;




 if ((VAR_19 = FUNC_6(VAR_18)) != 0)
  return(VAR_19);




 FUNC_26(&VAR_18->aac_aifq_lock, "AAC AIF lock", ((void*)0), VAR_6);
 FUNC_26(&VAR_18->aac_io_lock, "AAC I/O lock", ((void*)0), VAR_6);
 FUNC_26(&VAR_18->aac_container_lock, "AAC container lock", ((void*)0), VAR_6);
 FUNC_3(&VAR_18->aac_container_tqh);
 FUNC_3(&VAR_18->aac_ev_cmfree);


 FUNC_15(&VAR_18->aac_daemontime, &VAR_18->aac_io_lock, 0);




 if ((VAR_19 = FUNC_5(VAR_18)) != 0)
  return(VAR_19);
 if ((VAR_19 = FUNC_9(VAR_18)) != 0)
  return(VAR_19);




 if ((VAR_19 = FUNC_14(VAR_18)) != 0)
  return(VAR_19);




 FUNC_7(VAR_18);




 FUNC_1(FUNC_18(VAR_18->aac_dev),
     FUNC_2(FUNC_19(VAR_18->aac_dev)),
     VAR_7, "firmware_build", VAR_2,
     &VAR_18->aac_revision.buildNumber, 0,
     "firmware build number");




 VAR_18->aac_ich.ich_func = VAR_15;
 VAR_18->aac_ich.ich_arg = VAR_18;
 if (FUNC_17(&VAR_18->aac_ich) != 0) {
  FUNC_21(VAR_18->aac_dev,
         "can't establish configuration hook\n");
  return(VAR_3);
 }




 VAR_20 = FUNC_20(VAR_18->aac_dev);
 VAR_18->aac_dev_t = FUNC_24(&VAR_10, VAR_20, VAR_9, VAR_4,
     0640, "aac%d", VAR_20);
 (void)FUNC_25(VAR_18->aac_dev_t, "afa%d", VAR_20);
 (void)FUNC_25(VAR_18->aac_dev_t, "hpn%d", VAR_20);
 VAR_18->aac_dev_t->si_drv1 = VAR_18;


 if (FUNC_23((void(*)(void *))VAR_11, VAR_18,
     &VAR_18->aifthread, 0, 0, "aac%daif", VAR_20))
  FUNC_29("Could not create AIF thread");


 if ((VAR_18->eh = FUNC_0(VAR_17, VAR_14,
     VAR_18->aac_dev, VAR_8)) == ((void*)0))
  FUNC_21(VAR_18->aac_dev,
         "shutdown event registration failed\n");


 if ((VAR_18->flags & VAR_0) != 0) {
  FUNC_3(&VAR_18->aac_sim_tqh);
  FUNC_8(VAR_18);
 }

 FUNC_27(&VAR_18->aac_io_lock);
 FUNC_16(&VAR_18->aac_daemontime, 60 * VAR_16, VAR_13, VAR_18);
 FUNC_28(&VAR_18->aac_io_lock);

 return(0);
}
