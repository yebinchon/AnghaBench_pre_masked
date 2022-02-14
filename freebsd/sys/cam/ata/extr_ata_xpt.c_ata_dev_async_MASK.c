
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ccb_trans_settings {int dummy; } ;
struct cam_path {int periph; } ;
struct cam_et {int target_id; } ;
struct cam_ed {int flags; int lun_id; } ;
struct cam_eb {int path_id; } ;
typedef scalar_t__ cam_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,struct cam_path*,int ,int *) ;
 int FUNC_1 (struct ccb_trans_settings*,struct cam_path*,int ) ;
 scalar_t__ FUNC_2 (struct cam_path*,int *,int ,int ,int ) ;
 int FUNC_3 (struct cam_ed*) ;
 int FUNC_4 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_5(u_int32_t VAR_12, struct cam_eb *VAR_13, struct cam_et *VAR_14,
       struct cam_ed *VAR_15, void *VAR_16)
{
 cam_status VAR_17;
 struct cam_path VAR_18;




 if (VAR_14->target_id == VAR_10
  || VAR_15->lun_id == VAR_7)
  return;





 if ((VAR_12 == VAR_3)
  || (VAR_12 == VAR_0)
  || (VAR_12 == VAR_1))
  VAR_17 = FUNC_2(&VAR_18, ((void*)0),
       VAR_13->path_id,
       VAR_14->target_id,
       VAR_15->lun_id);
 else
  VAR_17 = VAR_9;

 if (VAR_17 == VAR_8) {
  if (VAR_12 == VAR_1) {







   FUNC_0(VAR_18.periph, &VAR_18,
         VAR_6, ((void*)0));
  } else {

   FUNC_0(VAR_18.periph, &VAR_18,
         0, ((void*)0));
  }
  FUNC_4(&VAR_18);
 } else if (VAR_12 == VAR_2 &&
     (VAR_15->flags & VAR_5) == 0) {
  VAR_15->flags |= VAR_5;
  FUNC_3(VAR_15);
 } else if (VAR_12 == VAR_4) {
  struct ccb_trans_settings *VAR_19;
  struct cam_path VAR_20;

  VAR_19 = (struct ccb_trans_settings *)VAR_16;
  FUNC_2(&VAR_20, ((void*)0), VAR_13->path_id, VAR_14->target_id,
     VAR_15->lun_id);
  FUNC_1(VAR_19, &VAR_20,
                       VAR_11);
  FUNC_4(&VAR_20);
 }
}
