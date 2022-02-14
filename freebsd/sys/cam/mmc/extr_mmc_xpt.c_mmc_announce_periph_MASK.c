
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_5__ {int clock; } ;
struct TYPE_6__ {TYPE_1__ ios; } ;
struct TYPE_7__ {TYPE_2__ mmc; } ;
struct TYPE_8__ {int status; int func_code; } ;
struct ccb_trans_settings {TYPE_3__ proto_specific; TYPE_4__ ccb_h; int type; } ;
struct ccb_pathinq {int dummy; } ;
struct cam_periph {struct cam_path* path; } ;
struct cam_path {int dummy; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_5 (TYPE_4__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_6(struct cam_periph *VAR_7)
{
 struct ccb_pathinq VAR_8;
 struct ccb_trans_settings VAR_9;
 struct cam_path *VAR_10 = VAR_7->path;

 FUNC_1(VAR_7, VAR_5);

 FUNC_0(VAR_7->path, VAR_0,
    ("mmc_announce_periph: called\n"));

 FUNC_5(&VAR_9.ccb_h, VAR_10, VAR_1);
 VAR_9.ccb_h.func_code = VAR_6;
 VAR_9.type = VAR_4;
 FUNC_3((union ccb*)&VAR_9);
 if ((VAR_9.ccb_h.status & VAR_3) != VAR_2)
  return;
 FUNC_4(&VAR_8, VAR_7->path);
 FUNC_2("XPT info: CLK %04X, ...\n", VAR_9.proto_specific.mmc.ios.clock);
}
