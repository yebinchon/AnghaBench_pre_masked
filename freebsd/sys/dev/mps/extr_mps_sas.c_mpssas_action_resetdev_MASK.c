
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t target_id; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mpssas_target {int handle; } ;
struct mpssas_softc {size_t maxtargets; struct mpssas_target* targets; struct mps_softc* sc; } ;
struct mps_softc {int mps_mtx; } ;
struct mps_command {struct mpssas_target* cm_targ; union ccb* cm_complete_data; int cm_complete; int * cm_data; scalar_t__ cm_req; } ;
struct TYPE_4__ {int MsgFlags; int TaskType; int DevHandle; } ;
typedef TYPE_2__ MPI2_SCSI_TASK_MANAGE_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mps_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mps_softc*,int ,char*) ;
 int FUNC_4 (struct mps_softc*,struct mps_command*) ;
 struct mps_command* FUNC_5 (struct mps_softc*) ;
 int FUNC_6 (struct mps_softc*,struct mps_command*,struct mpssas_target*,int ) ;
 int VAR_6 ;
 int FUNC_7 (union ccb*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static void
FUNC_10(struct mpssas_softc *VAR_7, union ccb *VAR_8)
{
 MPI2_SCSI_TASK_MANAGE_REQUEST *VAR_9;
 struct mps_softc *VAR_10;
 struct mps_command *VAR_11;
 struct mpssas_target *VAR_12;

 FUNC_1(VAR_7->sc);
 FUNC_8(&VAR_7->sc->mps_mtx, VAR_2);

 FUNC_0(VAR_8->ccb_h.target_id < VAR_7->maxtargets,
     ("Target %d out of bounds in XPT_RESET_DEV\n",
      VAR_8->ccb_h.target_id));
 VAR_10 = VAR_7->sc;
 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_10, VAR_5,
      "command alloc failure in mpssas_action_resetdev\n");
  FUNC_7(VAR_8, VAR_1);
  FUNC_9(VAR_8);
  return;
 }

 VAR_12 = &VAR_7->targets[VAR_8->ccb_h.target_id];
 VAR_9 = (MPI2_SCSI_TASK_MANAGE_REQUEST *)VAR_11->cm_req;
 VAR_9->DevHandle = FUNC_2(VAR_12->handle);
 VAR_9->TaskType = VAR_4;


 VAR_9->MsgFlags = VAR_3;

 VAR_11->cm_data = ((void*)0);
 VAR_11->cm_complete = VAR_6;
 VAR_11->cm_complete_data = VAR_8;
 VAR_11->cm_targ = VAR_12;

 FUNC_6(VAR_10, VAR_11, VAR_12, VAR_0);
 FUNC_4(VAR_10, VAR_11);
}
