
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ async_code; scalar_t__ async_arg_size; void* async_arg_ptr; } ;
struct TYPE_7__ {struct cam_path* path; } ;
union ccb {TYPE_3__ casync; TYPE_1__ ccb_h; } ;
typedef scalar_t__ u_int32_t ;
struct cam_periph {int dummy; } ;
struct cam_path {struct cam_eb* bus; TYPE_2__* device; } ;
struct cam_eb {int sim; int last_reset; } ;
struct TYPE_11__ {int device; struct cam_eb* bus; } ;
struct TYPE_10__ {TYPE_5__* path; } ;
struct TYPE_8__ {scalar_t__ lun_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cam_path*,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,union ccb*) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (struct cam_path*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_4__* VAR_7 ;
 int FUNC_9 (struct cam_path*,int,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct cam_eb*,int *,int ,union ccb*) ;

__attribute__((used)) static void
FUNC_12(struct cam_periph *VAR_8, union ccb *VAR_9)
{
 struct cam_eb *VAR_10;
 struct cam_path *VAR_11;
 void *VAR_12;
 u_int32_t VAR_13;

 VAR_11 = VAR_9->ccb_h.path;
 VAR_13 = VAR_9->casync.async_code;
 VAR_12 = VAR_9->casync.async_arg_ptr;
 FUNC_0(VAR_11, VAR_2 | VAR_1,
     ("xpt_async(%s)\n", FUNC_4(VAR_13)));
 VAR_10 = VAR_11->bus;

 if (VAR_13 == VAR_0) {

  FUNC_2(&VAR_10->last_reset);
 }

 FUNC_11(VAR_10, ((void*)0), VAR_6, VAR_9);





 if (VAR_10 != VAR_7->path->bus) {
  FUNC_7(VAR_7->path);
  FUNC_3(VAR_7->path->device, VAR_9);
  FUNC_8(VAR_7->path);
 }

 if (VAR_11->device != ((void*)0) && VAR_11->device->lun_id != VAR_3)
  FUNC_9(VAR_11, 1, VAR_5);
 else
  FUNC_10(VAR_11->bus->sim, VAR_5);
 if (VAR_9->casync.async_arg_size > 0)
  FUNC_1(VAR_12, VAR_4);
 FUNC_6(VAR_11);
 FUNC_5(VAR_9);
}
