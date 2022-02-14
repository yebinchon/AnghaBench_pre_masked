
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
struct sbuf {int dummy; } ;
struct ccb_trans_settings_spi {int ppr_options; int valid; int bus_width; int sync_offset; } ;
struct ccb_trans_settings_fc {int valid; int port; scalar_t__ wwpn; scalar_t__ wwnn; } ;
struct TYPE_4__ {struct ccb_trans_settings_fc fc; struct ccb_trans_settings_spi spi; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct ccb_trans_settings {scalar_t__ transport; TYPE_2__ xport_specific; TYPE_1__ ccb_h; } ;
struct cam_periph {int unit_number; int periph_name; } ;


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
 int FUNC_2 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_8, struct sbuf *VAR_9)
{
 struct ccb_trans_settings VAR_10;
 u_int VAR_11, VAR_12, VAR_13;

 FUNC_0(VAR_8, &VAR_11, &VAR_12, &VAR_10);
 if (FUNC_1((union ccb *)&VAR_10) != VAR_0)
  return;

 VAR_13 = VAR_11 / 1000;
 if (VAR_13 > 0)
  FUNC_2(VAR_9, "%s%d: %d.%03dMB/s transfers",
         VAR_8->periph_name, VAR_8->unit_number,
         VAR_13, VAR_11 % 1000);
 else
  FUNC_2(VAR_9, "%s%d: %dKB/s transfers", VAR_8->periph_name,
         VAR_8->unit_number, VAR_11);

 if (VAR_10.ccb_h.status == VAR_0 && VAR_10.transport == VAR_7) {
  struct ccb_trans_settings_spi *VAR_14;

  VAR_14 = &VAR_10.xport_specific.spi;
  if (VAR_12 != 0) {
   FUNC_2(VAR_9, " (%d.%03dMHz%s, offset %d", VAR_12 / 1000,
          VAR_12 % 1000,
          (VAR_14->ppr_options & VAR_5) != 0
        ? " DT" : "",
          VAR_14->sync_offset);
  }
  if ((VAR_14->valid & VAR_4) != 0
   && VAR_14->bus_width > 0) {
   if (VAR_12 != 0) {
    FUNC_2(VAR_9, ", ");
   } else {
    FUNC_2(VAR_9, " (");
   }
   FUNC_2(VAR_9, "%dbit)", 8 * (0x01 << VAR_14->bus_width));
  } else if (VAR_12 != 0) {
   FUNC_2(VAR_9, ")");
  }
 }
 if (VAR_10.ccb_h.status == VAR_0 && VAR_10.transport == VAR_6) {
  struct ccb_trans_settings_fc *VAR_15;

  VAR_15 = &VAR_10.xport_specific.fc;
  if (VAR_15->valid & VAR_2)
   FUNC_2(VAR_9, " WWNN 0x%llx", (long long) VAR_15->wwnn);
  if (VAR_15->valid & VAR_3)
   FUNC_2(VAR_9, " WWPN 0x%llx", (long long) VAR_15->wwpn);
  if (VAR_15->valid & VAR_1)
   FUNC_2(VAR_9, " PortID 0x%x", VAR_15->port);
 }
 FUNC_2(VAR_9, "\n");
}
