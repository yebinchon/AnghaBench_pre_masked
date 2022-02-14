
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct ccb_trans_settings_spi {int valid; scalar_t__ sync_offset; int sync_period; } ;
struct TYPE_4__ {int func_code; } ;
struct TYPE_3__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings {scalar_t__ transport; void* type; TYPE_2__ ccb_h; TYPE_1__ xport_specific; } ;
struct cam_periph {int path; } ;
struct cam_ed {int flags; } ;
typedef int cts ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (union ccb*) ;
 int FUNC_2 (struct ccb_trans_settings*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (union ccb*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct cam_periph *VAR_11, struct cam_ed *VAR_12)
{
 struct ccb_trans_settings VAR_13;
 struct ccb_trans_settings_spi *VAR_14;

 FUNC_2(&VAR_13, 0, sizeof (VAR_13));
 FUNC_6(&VAR_13.ccb_h, VAR_11->path, VAR_2);
 VAR_13.ccb_h.func_code = VAR_8;
 VAR_13.type = VAR_6;
 FUNC_4((union ccb *)&VAR_13);
 if (FUNC_1((union ccb *)&VAR_13) != VAR_3) {
  if (VAR_10) {
   FUNC_5(VAR_11->path,
       "failed to get current device settings\n");
  }
  return (0);
 }
 if (VAR_13.transport != VAR_7) {
  if (VAR_10) {
   FUNC_5(VAR_11->path, "not SPI transport\n");
  }
  return (0);
 }
 VAR_14 = &VAR_13.xport_specific.spi;




 if ((VAR_14->valid & VAR_5) == 0) {
  if (VAR_10) {
   FUNC_5(VAR_11->path, "no sync rate known\n");
  }
  return (0);
 }
 if ((VAR_14->valid & VAR_4) == 0
  || VAR_14->sync_offset == 0 || VAR_14->sync_period == 0) {
  if (VAR_10) {
   FUNC_5(VAR_11->path, "no sync rate available\n");
  }
  return (0);
 }

 if (VAR_12->flags & VAR_1) {
  FUNC_0(VAR_11->path, VAR_0,
      ("hit async: giving up on DV\n"));
  return (0);
 }
 VAR_14->valid = VAR_5 | VAR_4;
 for (;;) {
  VAR_14->sync_period++;
  if (VAR_14->sync_period >= 0xf) {
   VAR_14->sync_period = 0;
   VAR_14->sync_offset = 0;
   FUNC_0(VAR_11->path, VAR_0,
       ("setting to async for DV\n"));




   VAR_12->flags |= VAR_1;
  } else if (VAR_10) {
   FUNC_0(VAR_11->path, VAR_0,
       ("DV: period 0x%x\n", VAR_14->sync_period));
   FUNC_3("setting period to 0x%x\n", VAR_14->sync_period);
  }
  VAR_13.ccb_h.func_code = VAR_9;
  VAR_13.type = VAR_6;
  FUNC_4((union ccb *)&VAR_13);
  if (FUNC_1((union ccb *)&VAR_13) != VAR_3) {
   break;
  }
  FUNC_0(VAR_11->path, VAR_0,
      ("DV: failed to set period 0x%x\n", VAR_14->sync_period));
  if (VAR_14->sync_period == 0) {
   return (0);
  }
 }
 return (1);
}
