
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {int func_code; } ;
struct ccb_relsim {scalar_t__ qfrozen_cnt; scalar_t__ release_timeout; scalar_t__ openings; int release_flags; TYPE_2__ ccb_h; } ;
struct cam_sim {int max_dev_openings; } ;
struct cam_path {TYPE_1__* bus; struct cam_ed* device; } ;
struct cam_ed {int inq_flags; scalar_t__ tag_delay_count; int flags; } ;
struct TYPE_3__ {struct cam_sim* sim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union ccb*) ;
 int FUNC_1 (int ,struct cam_path*,int *) ;
 int FUNC_2 (struct cam_path*,int ) ;
 int FUNC_3 (struct cam_path*,int) ;
 int FUNC_4 (TYPE_2__*,struct cam_path*,int ) ;

void
FUNC_5(struct cam_path *VAR_6)
{
 struct ccb_relsim VAR_7;
 struct cam_ed *VAR_8;
 struct cam_sim *VAR_9;

 VAR_8 = VAR_6->device;
 VAR_9 = VAR_6->bus->sim;
 VAR_8->flags &= ~VAR_1;
 VAR_8->tag_delay_count = 0;
 FUNC_3(VAR_6, 1);
 VAR_8->inq_flags &= ~VAR_4;
 FUNC_2(VAR_6, VAR_9->max_dev_openings);
 FUNC_1(VAR_0, VAR_6, ((void*)0));
 FUNC_4(&VAR_7.ccb_h, VAR_6, VAR_2);
 VAR_7.ccb_h.func_code = VAR_5;
 VAR_7.release_flags = VAR_3;
 VAR_7.openings
     = VAR_7.release_timeout
     = VAR_7.qfrozen_cnt
     = 0;
 FUNC_0((union ccb *)&VAR_7);
}
