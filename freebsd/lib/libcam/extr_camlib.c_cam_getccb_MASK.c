
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_lun; int target_id; int path_id; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct ccb_hdr {int dummy; } ;
struct cam_device {int target_lun; int target_id; int path_id; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int) ;

union ccb *
FUNC_2(struct cam_device *VAR_0)
{
 union ccb *VAR_1;

 VAR_1 = (union ccb *)FUNC_1(sizeof(union ccb));
 if (VAR_1 != ((void*)0)) {
  FUNC_0(&VAR_1->ccb_h, sizeof(struct ccb_hdr));
  VAR_1->ccb_h.path_id = VAR_0->path_id;
  VAR_1->ccb_h.target_id = VAR_0->target_id;
  VAR_1->ccb_h.target_lun = VAR_0->target_lun;
 }

 return(VAR_1);
}
