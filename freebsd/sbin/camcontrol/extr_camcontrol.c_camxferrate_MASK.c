
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct TYPE_5__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings_sata {int valid; int revision; scalar_t__ atapi; int bytecount; int mode; } ;
struct ccb_trans_settings_pata {int valid; scalar_t__ atapi; int bytecount; int mode; } ;
struct ccb_trans_settings_spi {int valid; int bus_width; int sync_offset; int sync_period; } ;
struct ccb_trans_settings_sas {int valid; int bitrate; } ;
struct ccb_trans_settings_fc {int valid; int bitrate; } ;
struct TYPE_7__ {struct ccb_trans_settings_sata sata; struct ccb_trans_settings_pata ata; struct ccb_trans_settings_spi spi; struct ccb_trans_settings_sas sas; struct ccb_trans_settings_fc fc; } ;
struct TYPE_8__ {scalar_t__ transport; scalar_t__ protocol; TYPE_1__ proto_specific; TYPE_3__ xport_specific; int type; } ;
struct TYPE_6__ {int status; int func_code; } ;
union ccb {TYPE_4__ cts; TYPE_2__ ccb_h; } ;
typedef int u_int32_t ;
typedef int u_int ;
struct ccb_pathinq {int base_transfer_speed; } ;
struct cam_device {char* device_name; int dev_unit_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_5 (union ccb*) ;
 union ccb* FUNC_6 (struct cam_device*) ;
 int FUNC_7 (struct cam_device*,union ccb*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct cam_device*,struct ccb_pathinq*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char const*) ;

int
FUNC_14(struct cam_device *VAR_30)
{
 struct ccb_pathinq VAR_31;
 u_int32_t VAR_32 = 0;
 u_int32_t VAR_33 = 0;
 union ccb *VAR_34;
 u_int VAR_35;
 int VAR_36 = 0;

 if ((VAR_36 = FUNC_9(VAR_30, &VAR_31)) != 0)
  return (1);

 VAR_34 = FUNC_6(VAR_30);

 if (VAR_34 == ((void*)0)) {
  FUNC_13("couldn't allocate CCB");
  return (1);
 }

 FUNC_0(&VAR_34->cts);

 VAR_34->ccb_h.func_code = VAR_26;
 VAR_34->cts.type = VAR_19;

 if (((VAR_36 = FUNC_7(VAR_30, VAR_34)) < 0)
  || ((VAR_34->ccb_h.status & VAR_4) != VAR_3)) {
  const char VAR_37[] = "error getting transfer settings";

  if (VAR_36 < 0)
   FUNC_12(VAR_37);
  else
   FUNC_13(VAR_37);

  if (VAR_27 & VAR_0)
   FUNC_4(VAR_30, VAR_34, VAR_2,
     VAR_1, VAR_28);

  VAR_36 = 1;

  goto xferrate_bailout;

 }

 VAR_33 = VAR_31.base_transfer_speed;
 VAR_32 = 0;
 if (VAR_34->cts.transport == VAR_25) {
  struct ccb_trans_settings_spi *VAR_38 =
      &VAR_34->cts.xport_specific.spi;

  if ((VAR_38->valid & VAR_18) != 0) {
   VAR_32 = FUNC_11(VAR_38->sync_period);
   VAR_33 = VAR_32;
  }
  if ((VAR_38->valid & VAR_16) != 0) {
   VAR_33 *= (0x01 << VAR_38->bus_width);
  }
 } else if (VAR_34->cts.transport == VAR_22) {
  struct ccb_trans_settings_fc *VAR_39 =
      &VAR_34->cts.xport_specific.fc;

  if (VAR_39->valid & VAR_8)
   VAR_33 = VAR_39->bitrate;
 } else if (VAR_34->cts.transport == VAR_23) {
  struct ccb_trans_settings_sas *VAR_40 =
      &VAR_34->cts.xport_specific.sas;

  if (VAR_40->valid & VAR_9)
   VAR_33 = VAR_40->bitrate;
 } else if (VAR_34->cts.transport == VAR_21) {
  struct ccb_trans_settings_pata *VAR_41 =
      &VAR_34->cts.xport_specific.ata;

  if (VAR_41->valid & VAR_7)
   VAR_33 = FUNC_1(VAR_41->mode);
 } else if (VAR_34->cts.transport == VAR_24) {
  struct ccb_trans_settings_sata *VAR_42 =
      &VAR_34->cts.xport_specific.sata;

  if (VAR_42->valid & VAR_13)
   VAR_33 = FUNC_3(VAR_42->revision);
 }

 VAR_35 = VAR_33 / 1000;
 if (VAR_35 > 0) {
  FUNC_8(VAR_29, "%s%d: %d.%03dMB/s transfers",
   VAR_30->device_name, VAR_30->dev_unit_num,
   VAR_35, VAR_33 % 1000);
 } else {
  FUNC_8(VAR_29, "%s%d: %dKB/s transfers",
   VAR_30->device_name, VAR_30->dev_unit_num,
   VAR_33);
 }

 if (VAR_34->cts.transport == VAR_25) {
  struct ccb_trans_settings_spi *VAR_43 =
      &VAR_34->cts.xport_specific.spi;

  if (((VAR_43->valid & VAR_17) != 0)
   && (VAR_43->sync_offset != 0))
   FUNC_8(VAR_29, " (%d.%03dMHz, offset %d", VAR_32 / 1000,
    VAR_32 % 1000, VAR_43->sync_offset);

  if (((VAR_43->valid & VAR_16) != 0)
   && (VAR_43->bus_width > 0)) {
   if (((VAR_43->valid & VAR_17) != 0)
    && (VAR_43->sync_offset != 0)) {
    FUNC_8(VAR_29, ", ");
   } else {
    FUNC_8(VAR_29, " (");
   }
   FUNC_8(VAR_29, "%dbit)", 8 * (0x01 << VAR_43->bus_width));
  } else if (((VAR_43->valid & VAR_17) != 0)
   && (VAR_43->sync_offset != 0)) {
   FUNC_8(VAR_29, ")");
  }
 } else if (VAR_34->cts.transport == VAR_21) {
  struct ccb_trans_settings_pata *VAR_44 =
      &VAR_34->cts.xport_specific.ata;

  FUNC_10(" (");
  if (VAR_44->valid & VAR_7)
   FUNC_10("%s, ", FUNC_2(VAR_44->mode));
  if ((VAR_44->valid & VAR_5) && VAR_44->atapi != 0)
   FUNC_10("ATAPI %dbytes, ", VAR_44->atapi);
  if (VAR_44->valid & VAR_6)
   FUNC_10("PIO %dbytes", VAR_44->bytecount);
  FUNC_10(")");
 } else if (VAR_34->cts.transport == VAR_24) {
  struct ccb_trans_settings_sata *VAR_45 =
      &VAR_34->cts.xport_specific.sata;

  FUNC_10(" (");
  if (VAR_45->valid & VAR_13)
   FUNC_10("SATA %d.x, ", VAR_45->revision);
  else
   FUNC_10("SATA, ");
  if (VAR_45->valid & VAR_12)
   FUNC_10("%s, ", FUNC_2(VAR_45->mode));
  if ((VAR_45->valid & VAR_10) && VAR_45->atapi != 0)
   FUNC_10("ATAPI %dbytes, ", VAR_45->atapi);
  if (VAR_45->valid & VAR_11)
   FUNC_10("PIO %dbytes", VAR_45->bytecount);
  FUNC_10(")");
 }

 if (VAR_34->cts.protocol == VAR_20) {
  struct ccb_trans_settings_scsi *VAR_46 =
      &VAR_34->cts.proto_specific.scsi;
  if (VAR_46->valid & VAR_15) {
   if (VAR_46->flags & VAR_14) {
    FUNC_8(VAR_29, ", Command Queueing Enabled");
   }
  }
 }

 FUNC_8(VAR_29, "\n");

xferrate_bailout:

 FUNC_5(VAR_34);

 return (VAR_36);
}
