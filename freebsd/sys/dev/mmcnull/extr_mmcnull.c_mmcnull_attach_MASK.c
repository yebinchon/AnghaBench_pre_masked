
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcnull_softc {int sc_mtx; int tick; int * devq; int * sim; int dev; } ;
typedef int sim_action_func ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (int ,int ,char*,struct mmcnull_softc*,int ,int *,int,int,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 struct mmcnull_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_8)
{
 struct mmcnull_softc *VAR_9;
 sim_action_func VAR_10;

 VAR_9 = FUNC_5(VAR_8);
 VAR_9->dev = VAR_8;

 FUNC_8(&VAR_9->sc_mtx, "mmcnullmtx", ((void*)0), VAR_3);

 if ((VAR_9->devq = FUNC_3(1)) == ((void*)0))
  return (VAR_1);

 if (VAR_4)
  VAR_10 = VAR_6;
 else
  VAR_10 = VAR_5;
 VAR_9->sim = FUNC_1(VAR_10, VAR_7, "mmcnull", VAR_9,
    FUNC_6(VAR_8), &VAR_9->sc_mtx, 1, 1,
    VAR_9->devq);

 if (VAR_9->sim == ((void*)0)) {
  FUNC_4(VAR_9->devq);
  FUNC_7(VAR_8, "cannot allocate CAM SIM\n");
  return (VAR_0);
 }

 FUNC_9(&VAR_9->sc_mtx);
 if (FUNC_11(VAR_9->sim, VAR_8, 0) != 0) {
  FUNC_7(VAR_8,
         "cannot register SCSI pass-through bus\n");
  FUNC_2(VAR_9->sim, VAR_2);
  FUNC_4(VAR_9->devq);
  FUNC_10(&VAR_9->sc_mtx);
  return (VAR_0);
 }
 FUNC_10(&VAR_9->sc_mtx);

 FUNC_0(&VAR_9->tick, &VAR_9->sc_mtx, 0);

 FUNC_7(VAR_8, "attached OK\n");

 return (0);
}
