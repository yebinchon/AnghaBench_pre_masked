
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
struct TYPE_2__ {int func_code; } ;
struct ccb_getdevstats {int last_reset; TYPE_1__ ccb_h; } ;
struct cam_periph {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cam_periph*,int *,int ) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

void
FUNC_3(struct cam_periph *VAR_2, u_int VAR_3)
{
 struct ccb_getdevstats VAR_4;

 FUNC_2(&VAR_4.ccb_h, VAR_2->path, VAR_0);
 VAR_4.ccb_h.func_code = VAR_1;
 FUNC_1((union ccb *)&VAR_4);
 FUNC_0(VAR_2, &VAR_4.last_reset, VAR_3);
}
