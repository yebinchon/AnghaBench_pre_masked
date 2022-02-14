
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
typedef int cam_status ;
struct TYPE_7__ {int ich_func; } ;
struct TYPE_6__ {int cam_doneq; int cam_doneq_mtx; } ;
struct TYPE_5__ {TYPE_3__ xpt_config_hook; int xpt_lock; int boot_delay; int xpt_taskq; int xpt_highpower_lock; int num_highpower; int highpowerq; int ccb_scanq; int xpt_busses; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int *,int *,int *,char*,int ,struct cam_path*,int *,int ,struct cam_sim*) ;
 int VAR_15 ;
 struct cam_sim* FUNC_3 (int ,int ,char*,int *,int ,int *,int ,int ,struct cam_devq*) ;
 struct cam_devq* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_2__*,int *,int *,int ,int ,char*,char*,int) ;
 int VAR_16 ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ,int ,int *) ;
 int VAR_17 ;
 int FUNC_12 (struct cam_sim*,int *,int ) ;
 int VAR_18 ;
 int FUNC_13 (struct cam_path**,int *,int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_14 (struct cam_path*) ;
 int FUNC_15 (struct cam_path*) ;
 int FUNC_16 (struct cam_path*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_1__ VAR_23 ;

__attribute__((used)) static int
FUNC_17(void *VAR_24)
{
 struct cam_sim *VAR_25;
 struct cam_path *VAR_26;
 struct cam_devq *VAR_27;
 cam_status VAR_28;
 int VAR_29, VAR_30;

 FUNC_1(&VAR_23.xpt_busses);
 FUNC_1(&VAR_23.ccb_scanq);
 FUNC_0(&VAR_23.highpowerq);
 VAR_23.num_highpower = VAR_2;

 FUNC_7(&VAR_23.xpt_lock, "XPT lock", ((void*)0), VAR_11);
 FUNC_7(&VAR_23.xpt_highpower_lock, "XPT highpower lock", ((void*)0), VAR_11);
 VAR_23.xpt_taskq = FUNC_11("CAM XPT task", VAR_12,
     VAR_17, &VAR_23.xpt_taskq);
 VAR_27 = FUNC_4(16);
 VAR_25 = FUNC_3(VAR_20,
    VAR_21,
    "xpt",
             ((void*)0),
            0,
           &VAR_23.xpt_lock,
                            0,
                                   0,
    VAR_27);
 if (VAR_25 == ((void*)0))
  return (VAR_9);

 FUNC_8(&VAR_23.xpt_lock);
 if ((VAR_28 = FUNC_12(VAR_25, ((void*)0), 0)) != VAR_5) {
  FUNC_9(&VAR_23.xpt_lock);
  FUNC_10("xpt_init: xpt_bus_register failed with status %#x,"
         " failing attach\n", VAR_28);
  return (VAR_8);
 }
 FUNC_9(&VAR_23.xpt_lock);






 if ((VAR_28 = FUNC_13(&VAR_26, ((void*)0), VAR_7,
          VAR_6,
          VAR_1)) != VAR_4) {
  FUNC_10("xpt_init: xpt_create_path failed with status %#x,"
         " failing attach\n", VAR_28);
  return (VAR_8);
 }
 FUNC_15(VAR_26);
 FUNC_2(VAR_22, ((void*)0), ((void*)0), ((void*)0), "xpt", VAR_3,
    VAR_26, ((void*)0), 0, VAR_25);
 FUNC_16(VAR_26);
 FUNC_14(VAR_26);

 if (VAR_14 < 1)
  VAR_14 = 1 + VAR_16 / 6;
 else if (VAR_14 > VAR_10)
  VAR_14 = VAR_10;
 for (VAR_30 = 0; VAR_30 < VAR_14; VAR_30++) {
  FUNC_7(&VAR_13[VAR_30].cam_doneq_mtx, "CAM doneq", ((void*)0),
      VAR_11);
  FUNC_0(&VAR_13[VAR_30].cam_doneq);
  VAR_29 = FUNC_6(VAR_19, &VAR_13[VAR_30],
      &VAR_15, ((void*)0), 0, 0, "cam", "doneq%d", VAR_30);
  if (VAR_29 != 0) {
   VAR_14 = VAR_30;
   break;
  }
 }
 if (VAR_14 < 1) {
  FUNC_10("xpt_init: Cannot init completion queues "
         "- failing attach\n");
  return (VAR_9);
 }



 VAR_23.xpt_config_hook.ich_func = VAR_18;
 if (FUNC_5(&VAR_23.xpt_config_hook) != 0) {
  FUNC_10("xpt_init: config_intrhook_establish failed "
         "- failing attach\n");
 }

 return (0);
}
