
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_4__ {int status; int func_code; } ;
struct TYPE_3__ {scalar_t__ valid; } ;
struct ccb_trans_settings {int type; TYPE_2__ ccb_h; TYPE_1__ xport_specific; } ;
struct cam_periph {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union ccb*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_periph *VAR_7)
{
 struct ccb_trans_settings VAR_8;

 FUNC_1(&VAR_8.ccb_h, VAR_7->path, VAR_0);
 VAR_8.ccb_h.func_code = VAR_5;
 VAR_8.type = VAR_4;
 FUNC_0((union ccb *)&VAR_8);
 if ((VAR_8.ccb_h.status & VAR_2) != VAR_1)
  return;
 VAR_8.xport_specific.valid = 0;
 VAR_8.ccb_h.func_code = VAR_6;
 VAR_8.type = VAR_3;
 FUNC_0((union ccb *)&VAR_8);
}
