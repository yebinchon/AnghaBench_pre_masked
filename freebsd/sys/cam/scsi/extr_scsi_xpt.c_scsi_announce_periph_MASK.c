
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
struct ccb_trans_settings_spi {int ppr_options; int sync_offset; int valid; int bus_width; } ;
struct ccb_trans_settings_fc {int valid; int port; scalar_t__ wwpn; scalar_t__ wwnn; } ;
struct TYPE_4__ {struct ccb_trans_settings_fc fc; struct ccb_trans_settings_spi spi; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct ccb_trans_settings {scalar_t__ transport; TYPE_2__ xport_specific; TYPE_1__ ccb_h; } ;
struct cam_periph {char* periph_name; int unit_number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct cam_periph*,int*,int*,struct ccb_trans_settings*) ;
 scalar_t__ FUNC_1 (union ccb*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_8)
{
 struct ccb_trans_settings VAR_9;
 u_int VAR_10, VAR_11, VAR_12;

 FUNC_0(VAR_8, &VAR_10, &VAR_11, &VAR_9);
 if (FUNC_1((union ccb *)&VAR_9) != VAR_0)
  return;

 VAR_12 = VAR_10 / 1000;
 if (VAR_12 > 0)
  FUNC_2("%s%d: %d.%03dMB/s transfers",
         VAR_8->periph_name, VAR_8->unit_number,
         VAR_12, VAR_10 % 1000);
 else
  FUNC_2("%s%d: %dKB/s transfers", VAR_8->periph_name,
         VAR_8->unit_number, VAR_10);

 if (VAR_9.ccb_h.status == VAR_0 && VAR_9.transport == VAR_7) {
  struct ccb_trans_settings_spi *VAR_13;

  VAR_13 = &VAR_9.xport_specific.spi;
  if (VAR_11 != 0) {
   FUNC_2(" (%d.%03dMHz%s, offset %d", VAR_11 / 1000,
          VAR_11 % 1000,
          (VAR_13->ppr_options & VAR_5) != 0
        ? " DT" : "",
          VAR_13->sync_offset);
  }
  if ((VAR_13->valid & VAR_4) != 0
   && VAR_13->bus_width > 0) {
   if (VAR_11 != 0) {
    FUNC_2(", ");
   } else {
    FUNC_2(" (");
   }
   FUNC_2("%dbit)", 8 * (0x01 << VAR_13->bus_width));
  } else if (VAR_11 != 0) {
   FUNC_2(")");
  }
 }
 if (VAR_9.ccb_h.status == VAR_0 && VAR_9.transport == VAR_6) {
  struct ccb_trans_settings_fc *VAR_14;

  VAR_14 = &VAR_9.xport_specific.fc;
  if (VAR_14->valid & VAR_2)
   FUNC_2(" WWNN 0x%llx", (long long) VAR_14->wwnn);
  if (VAR_14->valid & VAR_3)
   FUNC_2(" WWPN 0x%llx", (long long) VAR_14->wwpn);
  if (VAR_14->valid & VAR_1)
   FUNC_2(" PortID 0x%x", VAR_14->port);
 }
 FUNC_2("\n");
}
