
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct sbuf {int dummy; } ;
struct ccb_trans_settings_sata {int valid; scalar_t__ atapi; int bytecount; int mode; int revision; } ;
struct ccb_trans_settings_pata {int valid; scalar_t__ atapi; int bytecount; int mode; } ;
struct TYPE_4__ {struct ccb_trans_settings_sata sata; struct ccb_trans_settings_pata ata; } ;
struct TYPE_3__ {int status; } ;
struct ccb_trans_settings {scalar_t__ transport; TYPE_2__ xport_specific; TYPE_1__ ccb_h; } ;
struct cam_periph {int unit_number; int periph_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct cam_periph*,struct ccb_trans_settings*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sbuf*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_10, struct sbuf *VAR_11)
{
 struct ccb_trans_settings VAR_12;
 u_int VAR_13, VAR_14;

 FUNC_0(VAR_10, &VAR_12, &VAR_13);
 if ((VAR_12.ccb_h.status & VAR_1) != VAR_0)
  return;

 VAR_14 = VAR_13 / 1000;
 if (VAR_14 > 0)
  FUNC_2(VAR_11, "%s%d: %d.%03dMB/s transfers",
         VAR_10->periph_name, VAR_10->unit_number,
         VAR_14, VAR_13 % 1000);
 else
  FUNC_2(VAR_11, "%s%d: %dKB/s transfers", VAR_10->periph_name,
         VAR_10->unit_number, VAR_13);

 if (VAR_12.transport == VAR_8) {
  struct ccb_trans_settings_pata *VAR_15 =
      &VAR_12.xport_specific.ata;

  FUNC_2(VAR_11, " (");
  if (VAR_15->valid & VAR_4)
   FUNC_2(VAR_11, "%s, ", FUNC_1(VAR_15->mode));
  if ((VAR_15->valid & VAR_2) && VAR_15->atapi != 0)
   FUNC_2(VAR_11, "ATAPI %dbytes, ", VAR_15->atapi);
  if (VAR_15->valid & VAR_3)
   FUNC_2(VAR_11, "PIO %dbytes", VAR_15->bytecount);
  FUNC_2(VAR_11, ")");
 }
 if (VAR_12.transport == VAR_9) {
  struct ccb_trans_settings_sata *VAR_16 =
      &VAR_12.xport_specific.sata;

  FUNC_2(VAR_11, " (");
  if (VAR_16->valid & VAR_7)
   FUNC_2(VAR_11, "SATA %d.x, ", VAR_16->revision);
  else
   FUNC_2(VAR_11, "SATA, ");
  if (VAR_16->valid & VAR_6)
   FUNC_2(VAR_11, "%s, ", FUNC_1(VAR_16->mode));
  if ((VAR_16->valid & VAR_2) && VAR_16->atapi != 0)
   FUNC_2(VAR_11, "ATAPI %dbytes, ", VAR_16->atapi);
  if (VAR_16->valid & VAR_5)
   FUNC_2(VAR_11, "PIO %dbytes", VAR_16->bytecount);
  FUNC_2(VAR_11, ")");
 }
 FUNC_2(VAR_11, "\n");
}
