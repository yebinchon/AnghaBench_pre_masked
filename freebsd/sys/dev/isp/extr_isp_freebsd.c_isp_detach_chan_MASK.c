
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_12__ {int func_code; } ;
struct ccb_setasync {struct cam_sim* callback_arg; int callback; scalar_t__ event_enable; TYPE_4__ ccb_h; } ;
struct cam_sim {int dummy; } ;
typedef struct cam_sim cam_path ;
struct TYPE_9__ {int ptr; } ;
struct TYPE_10__ {TYPE_1__ pc; } ;
struct TYPE_11__ {int isp_lock; TYPE_2__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,struct cam_sim*,struct cam_sim*) ;
 int FUNC_1 (TYPE_3__*,int,int*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cam_sim*,int ) ;
 int FUNC_3 (struct cam_sim*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int *,int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct cam_sim*) ;
 int FUNC_9 (TYPE_4__*,struct cam_sim*,int) ;

__attribute__((used)) static void
FUNC_10(ispsoftc_t *VAR_4, int VAR_5)
{
 struct cam_sim *VAR_6;
 struct cam_path *VAR_7;
 struct ccb_setasync VAR_8;
 int *VAR_9;

 FUNC_0(VAR_4, VAR_5, VAR_6, VAR_6);
 FUNC_0(VAR_4, VAR_5, VAR_7, VAR_7);
 FUNC_1(VAR_4, VAR_5, VAR_9, VAR_9);

 FUNC_9(&VAR_8.ccb_h, VAR_7, 5);
 VAR_8.ccb_h.func_code = VAR_2;
 VAR_8.event_enable = 0;
 VAR_8.callback = VAR_3;
 VAR_8.callback_arg = VAR_6;
 FUNC_6((union ccb *)&VAR_8);
 FUNC_8(VAR_7);
 FUNC_7(FUNC_3(VAR_6));
 FUNC_2(VAR_6, VAR_0);


 FUNC_5(VAR_4->isp_osinfo.pc.ptr);
 while (*VAR_9 != 0)
  FUNC_4(VAR_4, &VAR_4->isp_lock, VAR_1, "isp_reap", 100);
}
