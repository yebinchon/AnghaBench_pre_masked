
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int async_code; void* async_arg_ptr; } ;
struct TYPE_9__ {struct cam_path* path; } ;
union ccb {TYPE_2__ casync; TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct cam_path {TYPE_4__* target; struct cam_ed* device; } ;
struct cam_ed {scalar_t__ lun_id; int device_mtx; int asyncs; TYPE_8__* target; } ;
struct TYPE_16__ {scalar_t__ target_id; TYPE_7__* bus; } ;
struct TYPE_15__ {scalar_t__ path_id; TYPE_6__* xport; } ;
struct TYPE_14__ {TYPE_5__* ops; } ;
struct TYPE_13__ {int (* async ) (int ,TYPE_7__*,TYPE_8__*,struct cam_ed*,void*) ;} ;
struct TYPE_12__ {scalar_t__ target_id; TYPE_3__* bus; } ;
struct TYPE_11__ {scalar_t__ path_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_7__*,TYPE_8__*,struct cam_ed*,void*) ;
 int FUNC_3 (struct cam_ed*) ;
 int FUNC_4 (int *,int ,struct cam_path*,void*) ;
 int FUNC_5 (struct cam_path*) ;
 int FUNC_6 (struct cam_path*) ;
 int FUNC_7 (struct cam_ed*) ;

__attribute__((used)) static int
FUNC_8(struct cam_ed *VAR_3, void *VAR_4)
{
 union ccb *VAR_5 = VAR_4;
 struct cam_path *VAR_6 = VAR_5->ccb_h.path;
 void *VAR_7 = VAR_5->casync.async_arg_ptr;
 u_int32_t VAR_8 = VAR_5->casync.async_code;
 int VAR_9;

 if (VAR_6->device != VAR_3
  && VAR_6->device->lun_id != VAR_1
  && VAR_3->lun_id != VAR_1)
  return (1);






 FUNC_3(VAR_3);






 if ((VAR_3->lun_id == VAR_1 &&
      VAR_6->device->lun_id != VAR_1) ||
     (VAR_3->target->target_id == VAR_2 &&
      VAR_6->target->target_id != VAR_2) ||
     (VAR_3->target->bus->path_id == VAR_0 &&
      VAR_6->target->bus->path_id != VAR_0)) {
  FUNC_1(&VAR_3->device_mtx);
  FUNC_5(VAR_6);
  VAR_9 = 1;
 } else
  VAR_9 = 0;

 (*(VAR_3->target->bus->xport->ops->async))(VAR_8,
     VAR_3->target->bus, VAR_3->target, VAR_3, VAR_7);
 FUNC_4(&VAR_3->asyncs, VAR_8, VAR_6, VAR_7);

 if (VAR_9) {
  FUNC_6(VAR_6);
  FUNC_0(&VAR_3->device_mtx);
 }
 FUNC_7(VAR_3);
 return (1);
}
