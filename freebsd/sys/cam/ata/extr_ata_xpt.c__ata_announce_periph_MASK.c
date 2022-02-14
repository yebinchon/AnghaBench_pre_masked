
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
struct ccb_trans_settings_sata {int valid; int revision; } ;
struct ccb_trans_settings_pata {int valid; int mode; } ;
struct TYPE_3__ {struct ccb_trans_settings_sata sata; struct ccb_trans_settings_pata ata; } ;
struct TYPE_4__ {int status; int func_code; } ;
struct ccb_trans_settings {scalar_t__ transport; TYPE_1__ xport_specific; TYPE_2__ ccb_h; int type; } ;
struct ccb_pathinq {int base_transfer_speed; } ;
struct cam_periph {struct cam_path* path; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cam_periph*,int ) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (struct ccb_pathinq*,struct cam_path*) ;
 int FUNC_5 (TYPE_2__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_6(struct cam_periph *VAR_10, struct ccb_trans_settings *VAR_11, u_int *VAR_12)
{
 struct ccb_pathinq VAR_13;
 struct cam_path *VAR_14 = VAR_10->path;

 FUNC_2(VAR_10, VAR_6);

 FUNC_5(&VAR_11->ccb_h, VAR_14, VAR_0);
 VAR_11->ccb_h.func_code = VAR_9;
 VAR_11->type = VAR_5;
 FUNC_3((union ccb*)VAR_11);
 if ((VAR_11->ccb_h.status & VAR_2) != VAR_1)
  return;

 FUNC_4(&VAR_13, VAR_14);

 *VAR_12 = VAR_13.base_transfer_speed;
 if (VAR_11->transport == VAR_7) {
  struct ccb_trans_settings_pata *VAR_15 =
      &VAR_11->xport_specific.ata;

  if (VAR_15->valid & VAR_3)
   *VAR_12 = FUNC_0(VAR_15->mode);
 }
 if (VAR_11->transport == VAR_8) {
  struct ccb_trans_settings_sata *VAR_16 =
      &VAR_11->xport_specific.sata;

  if (VAR_16->valid & VAR_4)
   *VAR_12 = FUNC_1(VAR_16->revision);
 }
}
