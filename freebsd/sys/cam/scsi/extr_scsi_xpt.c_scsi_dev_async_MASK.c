
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
 int VAR_12 ;
 int FUNC_0 (struct cam_path*) ;
 int FUNC_1 (struct cam_path*,int ,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_2 (int ,struct cam_path*,int ,int *) ;
 int FUNC_3 (struct ccb_trans_settings*,struct cam_path*,int ) ;
 int FUNC_4 (struct cam_path*) ;
 scalar_t__ FUNC_5 (struct cam_path*,int *,int ,int ,int ) ;
 int FUNC_6 (struct cam_ed*) ;
 int FUNC_7 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_8(u_int32_t VAR_14, struct cam_eb *VAR_15, struct cam_et *VAR_16,
       struct cam_ed *VAR_17, void *VAR_18)
{
 cam_status VAR_19;
 struct cam_path VAR_20;




 if (VAR_16->target_id == VAR_10
  || VAR_17->lun_id == VAR_7)
  return;





 if ((VAR_14 == VAR_3)
  || (VAR_14 == VAR_0)
  || (VAR_14 == VAR_1))
  VAR_19 = FUNC_5(&VAR_20, ((void*)0),
       VAR_15->path_id,
       VAR_16->target_id,
       VAR_17->lun_id);
 else
  VAR_19 = VAR_9;

 if (VAR_19 == VAR_8) {





  if (VAR_14 == VAR_3
   || VAR_14 == VAR_0) {
   FUNC_0(&VAR_20);
   FUNC_1(&VAR_20,
    VAR_11,
                 0,
               VAR_13,
                     0);
   FUNC_4(&VAR_20);
  }

  if (VAR_14 == VAR_1) {







   FUNC_2(VAR_20.periph, &VAR_20,
         VAR_6, ((void*)0));
  }
  FUNC_7(&VAR_20);
 } else if (VAR_14 == VAR_2 &&
     (VAR_17->flags & VAR_5) == 0) {
  VAR_17->flags |= VAR_5;
  FUNC_6(VAR_17);
 } else if (VAR_14 == VAR_4) {
  struct ccb_trans_settings *VAR_21;
  struct cam_path VAR_22;

  VAR_21 = (struct ccb_trans_settings *)VAR_18;
  FUNC_5(&VAR_22, ((void*)0), VAR_15->path_id, VAR_16->target_id,
     VAR_17->lun_id);
  FUNC_3(VAR_21, &VAR_22,
                       VAR_12);
  FUNC_7(&VAR_22);
 }
}
