
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {int func_code; } ;
struct ccb_trans_settings {int type; TYPE_1__ ccb_h; } ;
struct cam_periph {int path; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (union ccb*) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_6)
{
 struct ccb_trans_settings VAR_7;

 FUNC_2(&VAR_7.ccb_h, VAR_6->path, VAR_0);
 VAR_7.ccb_h.func_code = VAR_4;
 VAR_7.type = VAR_3;
 FUNC_1((union ccb *)&VAR_7);
 if (FUNC_0((union ccb *)&VAR_7) != VAR_1) {
  return;
 }
 VAR_7.ccb_h.func_code = VAR_5;
 VAR_7.type = VAR_2;
 FUNC_1((union ccb *)&VAR_7);
}
