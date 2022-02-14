
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct cam_et {scalar_t__ target_id; } ;
struct cam_ed {scalar_t__ lun_id; int flags; } ;
struct cam_eb {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cam_ed*) ;

__attribute__((used)) static void
FUNC_1(u_int32_t VAR_4, struct cam_eb *VAR_5, struct cam_et *VAR_6,
       struct cam_ed *VAR_7, void *VAR_8)
{




 if (VAR_6->target_id == VAR_3
  || VAR_7->lun_id == VAR_2)
  return;

 if (VAR_4 == VAR_0 &&
     (VAR_7->flags & VAR_1) == 0) {
  VAR_7->flags |= VAR_1;
  FUNC_0(VAR_7);
 }
}
