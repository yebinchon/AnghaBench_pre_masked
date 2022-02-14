
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_2__ {scalar_t__ status; int flags; int func_code; } ;
struct ccb_relsim {TYPE_1__ ccb_h; int openings; int release_flags; } ;
struct cam_path {int dummy; } ;
typedef int bit32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (union ccb*) ;
 int FUNC_2 (TYPE_1__*,struct cam_path*,int) ;

void FUNC_3(struct cam_path *VAR_4, bit32 VAR_5)
{
  struct ccb_relsim VAR_6;
  FUNC_2(&VAR_6.ccb_h, VAR_4, 5);
  VAR_6.ccb_h.func_code = VAR_3;
  VAR_6.ccb_h.flags = VAR_0;
  VAR_6.release_flags = VAR_2;
  VAR_6.openings = VAR_5;
  FUNC_1((union ccb *)&VAR_6);
  if(VAR_6.ccb_h.status != VAR_1) {
                 FUNC_0("XPT_REL_SIMQ failed\n");
  }
}
