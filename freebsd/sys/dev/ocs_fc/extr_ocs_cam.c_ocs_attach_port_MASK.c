
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct TYPE_9__ {int sim_lock; int dev; int devq; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_10__ {int ltask; int ldt; struct cam_path* path; struct cam_sim* sim; TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_fcport ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int *,int ) ;
 struct cam_sim* FUNC_3 (int ,int ,int ,TYPE_1__*,int ,int *,int ,int ,int ) ;
 int FUNC_4 (struct cam_sim*,int ) ;
 int FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct cam_sim*,int ,int) ;
 scalar_t__ FUNC_14 (struct cam_path**,int *,int ,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_15(ocs_t *VAR_9, int VAR_10)
{

 struct cam_sim *VAR_11 = ((void*)0);
 struct cam_path *VAR_12 = ((void*)0);
 uint32_t VAR_13 = FUNC_11(VAR_9, VAR_5);
 ocs_fcport *VAR_14 = FUNC_0(VAR_9, VAR_10);

 if (((void*)0) == (VAR_11 = FUNC_3(VAR_6, VAR_8,
    FUNC_6(VAR_9->dev), VAR_9,
    FUNC_7(VAR_9->dev), &VAR_9->sim_lock,
    VAR_13, VAR_13, VAR_9->devq))) {
  FUNC_8(VAR_9->dev, "Can't allocate SIM\n");
  return 1;
 }

 FUNC_9(&VAR_9->sim_lock);
 if (VAR_2 != FUNC_13(VAR_11, VAR_9->dev, VAR_10)) {
  FUNC_8(VAR_9->dev, "Can't register bus %d\n", 0);
  FUNC_10(&VAR_9->sim_lock);
  FUNC_4(VAR_11, VAR_4);
  return 1;
 }
 FUNC_10(&VAR_9->sim_lock);

 if (VAR_1 != FUNC_14(&VAR_12, ((void*)0), FUNC_5(VAR_11),
    VAR_3, VAR_0)) {
  FUNC_8(VAR_9->dev, "Can't create path\n");
  FUNC_12(FUNC_5(VAR_11));
  FUNC_10(&VAR_9->sim_lock);
  FUNC_4(VAR_11, VAR_4);
  return 1;
 }

 VAR_14->ocs = VAR_9;
 VAR_14->sim = VAR_11;
 VAR_14->path = VAR_12;

 FUNC_2(&VAR_14->ldt, &VAR_9->sim_lock, 0);
 FUNC_1(&VAR_14->ltask, 1, VAR_7, VAR_14);

 return 0;
}
