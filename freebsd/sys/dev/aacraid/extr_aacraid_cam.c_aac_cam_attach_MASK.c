
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_sim {int dummy; } ;
struct cam_path {int dummy; } ;
struct cam_devq {int dummy; } ;
struct aac_sim {TYPE_1__* aac_sc; int TargetsPerBus; struct aac_cam* aac_cam; } ;
struct aac_cam {struct cam_path* path; struct cam_sim* sim; struct aac_sim* inf; } ;
typedef int device_t ;
struct TYPE_2__ {int aac_io_lock; int cam_rescan_cb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct cam_sim* FUNC_0 (int ,int ,char*,struct aac_cam*,int ,int *,int,int,struct cam_devq*) ;
 scalar_t__ FUNC_1 (struct cam_sim*,int ,int ) ;
 int FUNC_2 (struct cam_sim*,int ) ;
 int FUNC_3 (struct cam_sim*) ;
 struct cam_devq* FUNC_4 (int ) ;
 int FUNC_5 (struct cam_devq*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct cam_path**,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_10)
{
 struct cam_devq *VAR_11;
 struct cam_sim *VAR_12;
 struct cam_path *VAR_13;
 struct aac_cam *VAR_14;
 struct aac_sim *VAR_15;

 VAR_14 = (struct aac_cam *)FUNC_7(VAR_10);
 VAR_15 = (struct aac_sim *)FUNC_6(VAR_10);
 if (!VAR_15)
  return (VAR_4);
 FUNC_9(VAR_15->aac_sc, VAR_5, "");
 VAR_14->inf = VAR_15;
 VAR_14->inf->aac_cam = VAR_14;

 VAR_11 = FUNC_4(VAR_15->TargetsPerBus);
 if (VAR_11 == ((void*)0))
  return (VAR_4);

 VAR_12 = FUNC_0(VAR_7, VAR_8, "aacraidp", VAR_14,
     FUNC_8(VAR_10), &VAR_15->aac_sc->aac_io_lock, 1, 1, VAR_11);
 if (VAR_12 == ((void*)0)) {
  FUNC_5(VAR_11);
  return (VAR_4);
 }


 FUNC_10(&VAR_15->aac_sc->aac_io_lock);
 if (FUNC_1(VAR_12, VAR_10, 0) != VAR_2) {
  FUNC_2(VAR_12, VAR_6);
  FUNC_11(&VAR_15->aac_sc->aac_io_lock);
  return (VAR_4);
 }

 if (FUNC_13(&VAR_13, ((void*)0), FUNC_3(VAR_12),
     VAR_3, VAR_0) != VAR_1) {
  FUNC_12(FUNC_3(VAR_12));
  FUNC_2(VAR_12, VAR_6);
  FUNC_11(&VAR_15->aac_sc->aac_io_lock);
  return (VAR_4);
 }




 FUNC_11(&VAR_15->aac_sc->aac_io_lock);

 VAR_14->sim = VAR_12;
 VAR_14->path = VAR_13;

 return (0);
}
