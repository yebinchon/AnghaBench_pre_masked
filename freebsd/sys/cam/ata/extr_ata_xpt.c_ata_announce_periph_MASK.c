
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ccb_trans_settings_sata {int valid; int revision; scalar_t__ atapi; int bytecount; int mode; } ;
struct ccb_trans_settings_pata {int valid; scalar_t__ atapi; int bytecount; int mode; } ;
struct TYPE_4__ {struct ccb_trans_settings_sata sata; struct ccb_trans_settings_pata ata; } ;
struct TYPE_3__ {int status; } ;
struct ccb_trans_settings {scalar_t__ transport; TYPE_2__ xport_specific; TYPE_1__ ccb_h; } ;
struct cam_periph {char* periph_name; int unit_number; } ;


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
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct cam_periph *VAR_10)
{
 struct ccb_trans_settings VAR_11;
 u_int VAR_12, VAR_13;

 FUNC_0(VAR_10, &VAR_11, &VAR_12);
 if ((VAR_11.ccb_h.status & VAR_1) != VAR_0)
  return;

 VAR_13 = VAR_12 / 1000;
 if (VAR_13 > 0)
  FUNC_2("%s%d: %d.%03dMB/s transfers",
         VAR_10->periph_name, VAR_10->unit_number,
         VAR_13, VAR_12 % 1000);
 else
  FUNC_2("%s%d: %dKB/s transfers", VAR_10->periph_name,
         VAR_10->unit_number, VAR_12);

 if (VAR_11.transport == VAR_8) {
  struct ccb_trans_settings_pata *VAR_14 =
      &VAR_11.xport_specific.ata;

  FUNC_2(" (");
  if (VAR_14->valid & VAR_4)
   FUNC_2("%s, ", FUNC_1(VAR_14->mode));
  if ((VAR_14->valid & VAR_2) && VAR_14->atapi != 0)
   FUNC_2("ATAPI %dbytes, ", VAR_14->atapi);
  if (VAR_14->valid & VAR_3)
   FUNC_2("PIO %dbytes", VAR_14->bytecount);
  FUNC_2(")");
 }
 if (VAR_11.transport == VAR_9) {
  struct ccb_trans_settings_sata *VAR_15 =
      &VAR_11.xport_specific.sata;

  FUNC_2(" (");
  if (VAR_15->valid & VAR_7)
   FUNC_2("SATA %d.x, ", VAR_15->revision);
  else
   FUNC_2("SATA, ");
  if (VAR_15->valid & VAR_6)
   FUNC_2("%s, ", FUNC_1(VAR_15->mode));
  if ((VAR_15->valid & VAR_2) && VAR_15->atapi != 0)
   FUNC_2("ATAPI %dbytes, ", VAR_15->atapi);
  if (VAR_15->valid & VAR_5)
   FUNC_2("PIO %dbytes", VAR_15->bytecount);
  FUNC_2(")");
 }
 FUNC_2("\n");
}
