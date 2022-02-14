
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct aac_softc {int flags; int timeout_id; int aac_io_lock; int aac_daemontime; int aac_state; int aac_dev; int aac_sim_tqh; int * eh; int aifthread; TYPE_1__* aac_dev_t; int aac_ev_cmfree; int aac_container_tqh; int msi_tupelo; int msi_enabled; int hint_flags; } ;
struct aac_mntinforesp {int MntRespCount; } ;
struct aac_fib {int dummy; } ;
struct TYPE_2__ {struct aac_softc* si_drv1; } ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int VAR_10 ;
 int FUNC_3 (struct aac_softc*,struct aac_mntinforesp*,int ,int ) ;
 int FUNC_4 (struct aac_softc*) ;
 int FUNC_5 (struct aac_softc*,struct aac_fib**) ;
 int FUNC_6 (struct aac_softc*) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (struct aac_softc*) ;
 int VAR_12 ;
 int FUNC_8 (struct aac_softc*) ;
 int FUNC_9 (struct aac_softc*) ;
 int FUNC_10 (struct aac_softc*) ;
 scalar_t__ FUNC_11 (struct aac_softc*,struct aac_fib*,int,struct aac_mntinforesp*,int *) ;
 int FUNC_12 (struct aac_softc*) ;
 int FUNC_13 (struct aac_softc*) ;
 int FUNC_14 (struct aac_softc*) ;
 int FUNC_15 (struct aac_softc*) ;
 scalar_t__ FUNC_16 (void (*) (void*),struct aac_softc*,int *,int ,int ,char*,int) ;
 int FUNC_17 (struct aac_softc*) ;
 int FUNC_18 (struct aac_softc*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int *,int ) ;
 int FUNC_21 (int *,int,int ,struct aac_softc*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,char*) ;
 int FUNC_25 (struct aac_softc*,char*,char*) ;
 int VAR_15 ;
 TYPE_1__* FUNC_26 (int *,int,int ,int ,int,char*,int) ;
 int FUNC_27 (int *,char*,int *,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (char*) ;
 int VAR_16 ;
 int FUNC_31 (int ,void*,int ) ;
 int FUNC_32 (struct timeval*) ;

int
FUNC_33(struct aac_softc *VAR_17)
{
 int VAR_18, VAR_19;
 struct aac_fib *VAR_20;
 struct aac_mntinforesp VAR_21;
 int VAR_22 = 0, VAR_23 = 0;
 u_int32_t VAR_24;

 FUNC_25(VAR_17, VAR_7, "");
 VAR_17->hint_flags = FUNC_22(VAR_17->aac_dev);



 FUNC_14(VAR_17);
 FUNC_15(VAR_17);
 FUNC_13(VAR_17);


 VAR_17->aac_state |= VAR_4;




 VAR_17->msi_enabled = VAR_17->msi_tupelo = VAR_5;
 if ((VAR_18 = FUNC_6(VAR_17)) != 0)
  return(VAR_18);




 FUNC_27(&VAR_17->aac_io_lock, "AACRAID I/O lock", ((void*)0), VAR_8);
 FUNC_2(&VAR_17->aac_container_tqh);
 FUNC_2(&VAR_17->aac_ev_cmfree);
 if ((VAR_18 = FUNC_4(VAR_17)) != 0)
  return(VAR_18);
 FUNC_8(VAR_17);
 if (!(VAR_17->flags & VAR_2)) {
  if ((VAR_18 = FUNC_12(VAR_17)) != 0)
   return(VAR_18);
 }




 if ((VAR_18 = FUNC_18(VAR_17)) != 0)
  return(VAR_18);




 FUNC_9(VAR_17);




 VAR_19 = FUNC_23(VAR_17->aac_dev);
 VAR_17->aac_dev_t = FUNC_26(&VAR_13, VAR_19, VAR_10, VAR_6,
     0640, "aacraid%d", VAR_19);
 VAR_17->aac_dev_t->si_drv1 = VAR_17;


 if (FUNC_16((void(*)(void *))VAR_11, VAR_17,
     &VAR_17->aifthread, 0, 0, "aacraid%daif", VAR_19))
  FUNC_30("Could not create AIF thread");


 if ((VAR_17->eh = FUNC_1(VAR_16, VAR_14,
     VAR_17->aac_dev, VAR_9)) == ((void*)0))
  FUNC_24(VAR_17->aac_dev,
         "shutdown event registration failed\n");


 FUNC_28(&VAR_17->aac_io_lock);
 FUNC_5(VAR_17, &VAR_20);

 do {
  if ((FUNC_11(VAR_17, VAR_20, VAR_23, &VAR_21, &VAR_24)) != 0)
   continue;
  if (VAR_23 == 0)
   VAR_22 = VAR_21.MntRespCount;
  FUNC_3(VAR_17, &VAR_21, 0, VAR_24);
  VAR_23++;
 } while ((VAR_23 < VAR_22) && (VAR_23 < VAR_3));
 FUNC_17(VAR_17);
 FUNC_29(&VAR_17->aac_io_lock);


 FUNC_2(&VAR_17->aac_sim_tqh);
 FUNC_7(VAR_17);

 if ((VAR_17->flags & VAR_1) != 0)
  FUNC_10(VAR_17);


 FUNC_19(VAR_17->aac_dev);


 VAR_17->aac_state &= ~VAR_4;


 FUNC_0(VAR_17, VAR_0);






 {
  struct timeval VAR_25;
  VAR_25.tv_sec = 60;
  VAR_25.tv_usec = 0;
  VAR_17->timeout_id = FUNC_31(VAR_12, (void *)VAR_17, FUNC_32(&VAR_25));
 }


 return(0);
}
