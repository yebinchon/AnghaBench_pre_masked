
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int async_arg_size; int * async_arg_ptr; int async_code; } ;
struct TYPE_8__ {TYPE_5__* path; int func_code; int flags; int cbfcnp; } ;
union ccb {TYPE_2__ casync; TYPE_1__ ccb_h; } ;
typedef int u_int32_t ;
struct cam_path {TYPE_4__* bus; TYPE_3__* device; } ;
struct TYPE_12__ {int * periph; } ;
struct TYPE_11__ {int sim; } ;
struct TYPE_10__ {scalar_t__ lun_id; } ;


 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ) ;
 union ccb* FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_5__**,struct cam_path*) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (union ccb*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (struct cam_path*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct cam_path*,char*,int ) ;

void
FUNC_14(u_int32_t VAR_8, struct cam_path *VAR_9, void *VAR_10)
{
 union ccb *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4();
 if (VAR_11 == ((void*)0)) {
  FUNC_13(VAR_9, "Can't allocate CCB to send %s\n",
      FUNC_6(VAR_8));
  return;
 }

 if (FUNC_7(&VAR_11->ccb_h.path, VAR_9) != VAR_2) {
  FUNC_13(VAR_9, "Can't allocate path to send %s\n",
      FUNC_6(VAR_8));
  FUNC_9(VAR_11);
  return;
 }
 VAR_11->ccb_h.path->periph = ((void*)0);
 VAR_11->ccb_h.func_code = VAR_6;
 VAR_11->ccb_h.cbfcnp = VAR_7;
 VAR_11->ccb_h.flags |= VAR_3;
 VAR_11->casync.async_code = VAR_8;
 VAR_11->casync.async_arg_size = 0;
 VAR_12 = FUNC_5(VAR_8);
 FUNC_0(VAR_11->ccb_h.path, VAR_0,
     ("xpt_async: func %#x %s aync_code %d %s\n",
  VAR_11->ccb_h.func_code,
  FUNC_3(VAR_11->ccb_h.func_code),
  VAR_8,
  FUNC_6(VAR_8)));
 if (VAR_12 > 0 && VAR_10 != ((void*)0)) {
  VAR_11->casync.async_arg_ptr = FUNC_1(VAR_12, VAR_4, VAR_5);
  if (VAR_11->casync.async_arg_ptr == ((void*)0)) {
   FUNC_13(VAR_9, "Can't allocate argument to send %s\n",
       FUNC_6(VAR_8));
   FUNC_10(VAR_11->ccb_h.path);
   FUNC_9(VAR_11);
   return;
  }
  FUNC_2(VAR_11->casync.async_arg_ptr, VAR_10, VAR_12);
  VAR_11->casync.async_arg_size = VAR_12;
 } else if (VAR_12 < 0) {
  VAR_11->casync.async_arg_ptr = VAR_10;
  VAR_11->casync.async_arg_size = VAR_12;
 }
 if (VAR_9->device != ((void*)0) && VAR_9->device->lun_id != VAR_1)
  FUNC_11(VAR_9, 1);
 else
  FUNC_12(VAR_9->bus->sim, 1);
 FUNC_8(VAR_11);
}
