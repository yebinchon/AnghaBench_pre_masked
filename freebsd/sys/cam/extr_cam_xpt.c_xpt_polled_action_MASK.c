
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int status; TYPE_1__* path; } ;
union ccb {TYPE_2__ ccb_h; } ;
typedef int uint32_t ;
struct cam_ed {int device_mtx; } ;
struct TYPE_3__ {struct cam_ed* device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (union ccb*,int) ;

void
FUNC_5(union ccb *VAR_1)
{
 uint32_t VAR_2;
 struct cam_ed *VAR_3;

 VAR_2 = VAR_1->ccb_h.timeout * 10;
 VAR_3 = VAR_1->ccb_h.path->device;

 FUNC_1(&VAR_3->device_mtx);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 > 0) {
  FUNC_2(VAR_1);
  FUNC_4(VAR_1, VAR_2);
 } else {
  VAR_1->ccb_h.status = VAR_0;
 }

 FUNC_0(&VAR_3->device_mtx);
}
