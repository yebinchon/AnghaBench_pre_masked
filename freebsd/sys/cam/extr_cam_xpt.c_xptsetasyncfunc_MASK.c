
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_setasync {int callback_arg; int (* callback ) (int ,int ,struct cam_path*,struct ccb_getdev*) ;} ;
struct TYPE_6__ {int func_code; } ;
struct ccb_getdev {TYPE_3__ ccb_h; } ;
struct cam_path {int dummy; } ;
struct cam_ed {int flags; int lun_id; TYPE_2__* target; } ;
struct TYPE_5__ {int target_id; TYPE_1__* bus; } ;
struct TYPE_4__ {int path_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct cam_path*,struct ccb_getdev*) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (struct cam_path*,int *,int ,int ,int ) ;
 int FUNC_3 (struct cam_path*) ;
 int FUNC_4 (TYPE_3__*,struct cam_path*,int ) ;

__attribute__((used)) static int
FUNC_5(struct cam_ed *VAR_4, void *VAR_5)
{
 struct cam_path VAR_6;
 struct ccb_getdev VAR_7;
 struct ccb_setasync *VAR_8 = (struct ccb_setasync *)VAR_5;







 if ((VAR_4->flags & VAR_1) != 0)
  return (1);

 FUNC_2(&VAR_6,
    ((void*)0),
    VAR_4->target->bus->path_id,
    VAR_4->target->target_id,
    VAR_4->lun_id);
 FUNC_4(&VAR_7.ccb_h, &VAR_6, VAR_2);
 VAR_7.ccb_h.func_code = VAR_3;
 FUNC_1((union ccb *)&VAR_7);
 VAR_8->callback(VAR_8->callback_arg,
       VAR_0,
       &VAR_6, &VAR_7);
 FUNC_3(&VAR_6);

 return(1);
}
