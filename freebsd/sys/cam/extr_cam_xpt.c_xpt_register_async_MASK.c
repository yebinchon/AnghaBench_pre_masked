
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {scalar_t__ status; int path; int func_code; } ;
struct ccb_setasync {int event_enable; TYPE_1__ ccb_h; void* callback_arg; int * callback; } ;
struct cam_path {int dummy; } ;
typedef scalar_t__ cam_status ;
typedef int ac_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (union ccb*) ;
 scalar_t__ FUNC_2 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_3 (int ,struct ccb_setasync*) ;
 int FUNC_4 (int ,struct ccb_setasync*) ;
 int FUNC_5 (struct cam_path*) ;
 int FUNC_6 (struct cam_path*) ;
 int FUNC_7 (struct cam_path*) ;
 int FUNC_8 (TYPE_1__*,struct cam_path*,int ) ;
 int VAR_9 ;
 int VAR_10 ;

cam_status
FUNC_9(int VAR_11, ac_callback_t *VAR_12, void *VAR_13,
     struct cam_path *VAR_14)
{
 struct ccb_setasync VAR_15;
 cam_status VAR_16;
 int VAR_17 = 0;

 if (VAR_14 == ((void*)0)) {
  VAR_16 = FUNC_2(&VAR_14, ((void*)0), VAR_7,
      VAR_6, VAR_3);
  if (VAR_16 != VAR_5)
   return (VAR_16);
  FUNC_6(VAR_14);
  VAR_17 = 1;
 }

 FUNC_8(&VAR_15.ccb_h, VAR_14, VAR_4);
 VAR_15.ccb_h.func_code = VAR_8;
 VAR_15.event_enable = VAR_11;
 VAR_15.callback = VAR_12;
 VAR_15.callback_arg = VAR_13;
 FUNC_1((union ccb *)&VAR_15);
 VAR_16 = VAR_15.ccb_h.status;

 FUNC_0(VAR_15.ccb_h.path, VAR_2,
     ("xpt_register_async: func %p\n", VAR_12));

 if (VAR_17) {
  FUNC_7(VAR_14);
  FUNC_5(VAR_14);
 }

 if ((VAR_16 == VAR_5) &&
     (VAR_15.event_enable & VAR_0)) {




  FUNC_4(VAR_10, &VAR_15);
 }
 if ((VAR_16 == VAR_5) &&
     (VAR_15.event_enable & VAR_1)) {




  FUNC_3(VAR_9, &VAR_15);
 }

 return (VAR_16);
}
