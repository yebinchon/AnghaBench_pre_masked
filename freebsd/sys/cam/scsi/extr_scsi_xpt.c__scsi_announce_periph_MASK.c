
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
struct ccb_trans_settings_spi {int valid; scalar_t__ sync_offset; int bus_width; int sync_period; } ;
struct ccb_trans_settings_sas {int valid; int bitrate; } ;
struct ccb_trans_settings_fc {int valid; int bitrate; } ;
struct TYPE_3__ {struct ccb_trans_settings_sas sas; struct ccb_trans_settings_fc fc; struct ccb_trans_settings_spi spi; } ;
struct TYPE_4__ {scalar_t__ status; int func_code; } ;
struct ccb_trans_settings {scalar_t__ transport; TYPE_1__ xport_specific; TYPE_2__ ccb_h; int type; } ;
struct ccb_pathinq {int base_transfer_speed; TYPE_2__ ccb_h; } ;
struct cam_periph {struct cam_path* path; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (union ccb*) ;
 int FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union ccb*) ;
 int FUNC_4 (TYPE_2__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_5(struct cam_periph *VAR_13, u_int *VAR_14, u_int *VAR_15, struct ccb_trans_settings *VAR_16)
{
 struct ccb_pathinq VAR_17;
 struct cam_path *VAR_18 = VAR_13->path;

 FUNC_1(VAR_13, VAR_7);

 FUNC_4(&VAR_16->ccb_h, VAR_18, VAR_0);
 VAR_16->ccb_h.func_code = VAR_11;
 VAR_16->type = VAR_6;
 FUNC_3((union ccb*)VAR_16);
 if (FUNC_0((union ccb *)VAR_16) != VAR_1)
  return;


 FUNC_4(&VAR_17.ccb_h, VAR_18, VAR_0);
 VAR_17.ccb_h.func_code = VAR_12;
 FUNC_3((union ccb *)&VAR_17);


 *VAR_14 = VAR_17.base_transfer_speed;
 *VAR_15 = 0;

 if (VAR_16->ccb_h.status == VAR_1 && VAR_16->transport == VAR_10) {
  struct ccb_trans_settings_spi *VAR_19 =
      &VAR_16->xport_specific.spi;

  if ((VAR_19->valid & VAR_5) != 0
    && VAR_19->sync_offset != 0) {
   *VAR_15 = FUNC_2(VAR_19->sync_period);
   *VAR_14 = *VAR_15;
  }
  if ((VAR_19->valid & VAR_4) != 0)
   *VAR_14 *= (0x01 << VAR_19->bus_width);
 }
 if (VAR_16->ccb_h.status == VAR_1 && VAR_16->transport == VAR_8) {
  struct ccb_trans_settings_fc *VAR_20 =
      &VAR_16->xport_specific.fc;

  if (VAR_20->valid & VAR_2)
   *VAR_14 = VAR_20->bitrate;
 }
 if (VAR_16->ccb_h.status == VAR_1 && VAR_16->transport == VAR_9) {
  struct ccb_trans_settings_sas *VAR_21 =
      &VAR_16->xport_specific.sas;

  if (VAR_21->valid & VAR_3)
   *VAR_14 = VAR_21->bitrate;
 }
}
