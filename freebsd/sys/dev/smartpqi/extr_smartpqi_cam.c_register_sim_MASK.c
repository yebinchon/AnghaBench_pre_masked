
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_5__ {int cam_lock; int path; struct cam_sim* sim; int sim_registered; int * devq; int pqi_dev; } ;
struct pqisrc_softstate {int max_io_for_scsi_ml; TYPE_2__ os_specific; } ;
struct TYPE_6__ {scalar_t__ status; int func_code; } ;
struct ccb_setasync {TYPE_3__ ccb_h; struct pqisrc_softstate* callback_arg; int callback; int event_enable; } ;
struct cam_sim {int dummy; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cam_sim* FUNC_3 (int ,int ,char*,struct pqisrc_softstate*,int,int *,int,int,int *) ;
 int FUNC_4 (struct cam_sim*,int ) ;
 int FUNC_5 (struct cam_sim*) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (union ccb*) ;
 union ccb* FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct cam_sim*,int ,int ) ;
 scalar_t__ FUNC_14 (int *,int *,int ,int ,int ) ;
 int FUNC_15 (union ccb*) ;
 int FUNC_16 (TYPE_3__*,int ,int) ;

int FUNC_17(struct pqisrc_softstate *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 int VAR_15;
 union ccb *VAR_16 = ((void*)0);
 cam_status VAR_17 = 0;
 struct ccb_setasync VAR_18;
 struct cam_sim *VAR_19;

 FUNC_1("IN\n");

 VAR_15 = VAR_12->max_io_for_scsi_ml;
 VAR_12->os_specific.devq = FUNC_6(VAR_15);
 if (VAR_12->os_specific.devq == ((void*)0)) {
  FUNC_0("cam_simq_alloc failed txns = %d\n",
   VAR_15);
  return VAR_6;
 }

 VAR_19 = FUNC_3(VAR_10, VAR_11, "smartpqi", VAR_12, VAR_13, &VAR_12->os_specific.cam_lock, 1, VAR_15, VAR_12->os_specific.devq);



 if (VAR_19 == ((void*)0)) {
  FUNC_0("cam_sim_alloc failed txns = %d\n",
   VAR_15);
  FUNC_7(VAR_12->os_specific.devq);
  return VAR_6;
 }

 VAR_12->os_specific.sim = VAR_19;
 FUNC_8(&VAR_12->os_specific.cam_lock);
 VAR_17 = FUNC_13(VAR_19, VAR_12->os_specific.pqi_dev, 0);
 if (VAR_17 != VAR_3) {
  FUNC_0("xpt_bus_register failed status=%d\n", VAR_17);
  FUNC_4(VAR_12->os_specific.sim, VAR_5);
  FUNC_7(VAR_12->os_specific.devq);
  FUNC_9(&VAR_12->os_specific.cam_lock);
  return VAR_6;
 }

 VAR_12->os_specific.sim_registered = VAR_7;
 VAR_16 = FUNC_11();
 if (VAR_16 == ((void*)0)) {
  FUNC_0("xpt_create_path failed\n");
  return VAR_6;
 }

 if (FUNC_14(&VAR_16->ccb_h.path, ((void*)0),
   FUNC_5(VAR_12->os_specific.sim),
   VAR_4,
   VAR_1) != VAR_2) {
  FUNC_0("xpt_create_path failed\n");
  FUNC_15(VAR_16);
  FUNC_12(FUNC_5(VAR_12->os_specific.sim));
  FUNC_4(VAR_12->os_specific.sim, VAR_7);
  FUNC_9(&VAR_12->os_specific.cam_lock);
  return VAR_6;
 }




 VAR_12->os_specific.path = VAR_16->ccb_h.path;
 FUNC_16(&VAR_18.ccb_h, VAR_12->os_specific.path, 5);
 VAR_18.ccb_h.func_code = VAR_8;
 VAR_18.event_enable = VAR_0;
 VAR_18.callback = VAR_9;
 VAR_18.callback_arg = VAR_12;
 FUNC_10((union ccb *)&VAR_18);
 if (VAR_18.ccb_h.status != VAR_2) {
  FUNC_0("Unable to register smartpqi_aysnc handler: %d!\n",
   VAR_18.ccb_h.status);
 }

 FUNC_9(&VAR_12->os_specific.cam_lock);
 FUNC_2("OUT\n");
 return VAR_14;
}
