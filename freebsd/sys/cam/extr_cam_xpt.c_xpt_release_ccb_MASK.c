
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct cam_periph {int periph_allocated; } ;
struct cam_ed {int ccbq; } ;
struct TYPE_4__ {struct cam_periph* periph; struct cam_ed* device; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (struct cam_periph*,int ) ;

void
FUNC_5(union ccb *VAR_2)
{
 struct cam_ed *VAR_3;
 struct cam_periph *VAR_4;

 FUNC_0(VAR_0, ("xpt_release_ccb\n"));
 FUNC_3(VAR_2->ccb_h.path, VAR_1);
 VAR_3 = VAR_2->ccb_h.path->device;
 VAR_4 = VAR_2->ccb_h.path->periph;

 FUNC_2(VAR_2);
 VAR_4->periph_allocated--;
 FUNC_1(&VAR_3->ccbq);
 FUNC_4(VAR_4, 0);
}
