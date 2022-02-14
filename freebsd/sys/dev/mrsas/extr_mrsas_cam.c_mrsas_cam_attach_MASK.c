
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int max_scsi_cmds; int mrsas_dev; int sim_lock; int * sim_1; int path_1; int * sim_0; int path_0; int ev_tq; int ev_task; } ;
struct cam_devq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,void*,struct mrsas_softc*) ;
 int VAR_8 ;
 void* FUNC_1 (int ,int ,char*,struct mrsas_softc*,int ,int *,int,int,struct cam_devq*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct cam_devq* FUNC_4 (int) ;
 int FUNC_5 (struct cam_devq*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (struct mrsas_softc*) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int,int ,int *) ;
 int FUNC_13 (int *,int,int,char*,int ) ;
 int VAR_12 ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int *,int ,int) ;
 scalar_t__ FUNC_16 (int *,int *,int ,int ,int ) ;

int
FUNC_17(struct mrsas_softc *VAR_13)
{
 struct cam_devq *VAR_14;
 int VAR_15;

 VAR_15 = VAR_13->max_scsi_cmds;

 if ((VAR_14 = FUNC_4(VAR_15)) == ((void*)0)) {
  FUNC_8(VAR_13->mrsas_dev, "Cannot allocate SIM queue\n");
  return (VAR_4);
 }



 VAR_13->sim_0 = FUNC_1(VAR_9, VAR_11, "mrsas", VAR_13,
     FUNC_7(VAR_13->mrsas_dev), &VAR_13->sim_lock, VAR_15,
     VAR_15, VAR_14);
 if (VAR_13->sim_0 == ((void*)0)) {
  FUNC_5(VAR_14);
  FUNC_8(VAR_13->mrsas_dev, "Cannot register SIM\n");
  return (VAR_5);
 }

 FUNC_0(&VAR_13->ev_task, 0, (void *)VAR_10, VAR_13);
 VAR_13->ev_tq = FUNC_12("mrsas_taskq", VAR_6 | VAR_7,
     VAR_12, &VAR_13->ev_tq);


 FUNC_13(&VAR_13->ev_tq, 1, 255, "%s taskq",
     FUNC_6(VAR_13->mrsas_dev));
 FUNC_10(&VAR_13->sim_lock);
 if (FUNC_15(VAR_13->sim_0, VAR_13->mrsas_dev, 0) != VAR_2) {
  FUNC_2(VAR_13->sim_0, VAR_8);
  FUNC_11(&VAR_13->sim_lock);
  return (VAR_5);
 }
 if (FUNC_16(&VAR_13->path_0, ((void*)0), FUNC_3(VAR_13->sim_0),
     VAR_3, VAR_0) != VAR_1) {
  FUNC_14(FUNC_3(VAR_13->sim_0));
  FUNC_2(VAR_13->sim_0, VAR_8);

  FUNC_11(&VAR_13->sim_lock);
  return (VAR_5);
 }
 FUNC_11(&VAR_13->sim_lock);




 VAR_13->sim_1 = FUNC_1(VAR_9, VAR_11, "mrsas", VAR_13,
     FUNC_7(VAR_13->mrsas_dev), &VAR_13->sim_lock, VAR_15,
     VAR_15, VAR_14);
 if (VAR_13->sim_1 == ((void*)0)) {
  FUNC_5(VAR_14);
  FUNC_8(VAR_13->mrsas_dev, "Cannot register SIM\n");
  return (VAR_5);
 }
 FUNC_10(&VAR_13->sim_lock);
 if (FUNC_15(VAR_13->sim_1, VAR_13->mrsas_dev, 1) != VAR_2) {
  FUNC_2(VAR_13->sim_1, VAR_8);
  FUNC_11(&VAR_13->sim_lock);
  return (VAR_5);
 }
 if (FUNC_16(&VAR_13->path_1, ((void*)0), FUNC_3(VAR_13->sim_1),
     VAR_3,
     VAR_0) != VAR_1) {
  FUNC_14(FUNC_3(VAR_13->sim_1));
  FUNC_2(VAR_13->sim_1, VAR_8);
  FUNC_11(&VAR_13->sim_lock);
  return (VAR_5);
 }
 FUNC_11(&VAR_13->sim_lock);


 if (FUNC_9(VAR_13)) {
  FUNC_8(VAR_13->mrsas_dev, "Error in bus scan.\n");
  return (1);
 }

 return (0);
}
