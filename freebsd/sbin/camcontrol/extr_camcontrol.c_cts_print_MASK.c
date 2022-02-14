
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ccb_trans_settings_spi {int valid; int sync_period; int sync_offset; int bus_width; int flags; } ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct ccb_trans_settings_sata {int valid; int revision; int atapi; int bytecount; int pm_present; int tags; int caps; int mode; } ;
struct ccb_trans_settings_sas {int valid; int bitrate; } ;
struct ccb_trans_settings_pata {int valid; int atapi; int bytecount; int mode; } ;
struct ccb_trans_settings_nvme {int valid; int lanes; int max_lanes; int speed; int max_speed; int spec; } ;
struct ccb_trans_settings_fc {int valid; int port; int bitrate; scalar_t__ wwpn; scalar_t__ wwnn; } ;
struct ccb_trans_settings_ata {int valid; int flags; } ;
struct TYPE_4__ {struct ccb_trans_settings_nvme nvme; struct ccb_trans_settings_sata sata; struct ccb_trans_settings_pata ata; struct ccb_trans_settings_sas sas; struct ccb_trans_settings_fc fc; struct ccb_trans_settings_spi spi; } ;
struct TYPE_3__ {struct ccb_trans_settings_scsi scsi; struct ccb_trans_settings_ata ata; } ;
struct ccb_trans_settings {scalar_t__ transport; scalar_t__ protocol; TYPE_2__ xport_specific; TYPE_1__ proto_specific; } ;
struct cam_device {int dummy; } ;
typedef int pathstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct cam_device*,char*,int) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (int) ;
 int VAR_34 ;

__attribute__((used)) static void
FUNC_6(struct cam_device *VAR_35, struct ccb_trans_settings *VAR_36)
{
 char VAR_37[1024];

 FUNC_3(VAR_35, VAR_37, sizeof(VAR_37));

 if (VAR_36->transport == VAR_33) {
  struct ccb_trans_settings_spi *VAR_38 =
      &VAR_36->xport_specific.spi;

  if ((VAR_38->valid & VAR_25) != 0) {

   FUNC_4(VAR_34, "%ssync parameter: %d\n", VAR_37,
    VAR_38->sync_period);

   if (VAR_38->sync_offset != 0) {
    u_int VAR_39;

    VAR_39 = FUNC_5(VAR_38->sync_period);
    FUNC_4(VAR_34, "%sfrequency: %d.%03dMHz\n",
     VAR_37, VAR_39 / 1000, VAR_39 % 1000);
   }
  }

  if (VAR_38->valid & VAR_24) {
   FUNC_4(VAR_34, "%soffset: %d\n", VAR_37,
       VAR_38->sync_offset);
  }

  if (VAR_38->valid & VAR_22) {
   FUNC_4(VAR_34, "%sbus width: %d bits\n", VAR_37,
    (0x01 << VAR_38->bus_width) * 8);
  }

  if (VAR_38->valid & VAR_23) {
   FUNC_4(VAR_34, "%sdisconnection is %s\n", VAR_37,
    (VAR_38->flags & VAR_21) ?
    "enabled" : "disabled");
  }
 }
 if (VAR_36->transport == VAR_30) {
  struct ccb_trans_settings_fc *VAR_40 =
      &VAR_36->xport_specific.fc;

  if (VAR_40->valid & VAR_7)
   FUNC_4(VAR_34, "%sWWNN: 0x%llx\n", VAR_37,
       (long long) VAR_40->wwnn);
  if (VAR_40->valid & VAR_8)
   FUNC_4(VAR_34, "%sWWPN: 0x%llx\n", VAR_37,
       (long long) VAR_40->wwpn);
  if (VAR_40->valid & VAR_5)
   FUNC_4(VAR_34, "%sPortID: 0x%x\n", VAR_37, VAR_40->port);
  if (VAR_40->valid & VAR_6)
   FUNC_4(VAR_34, "%stransfer speed: %d.%03dMB/s\n",
       VAR_37, VAR_40->bitrate / 1000, VAR_40->bitrate % 1000);
 }
 if (VAR_36->transport == VAR_31) {
  struct ccb_trans_settings_sas *VAR_41 =
      &VAR_36->xport_specific.sas;

  if (VAR_41->valid & VAR_11)
   FUNC_4(VAR_34, "%stransfer speed: %d.%03dMB/s\n",
       VAR_37, VAR_41->bitrate / 1000, VAR_41->bitrate % 1000);
 }
 if (VAR_36->transport == VAR_29) {
  struct ccb_trans_settings_pata *VAR_42 =
      &VAR_36->xport_specific.ata;

  if ((VAR_42->valid & VAR_3) != 0) {
   FUNC_4(VAR_34, "%sATA mode: %s\n", VAR_37,
    FUNC_2(VAR_42->mode));
  }
  if ((VAR_42->valid & VAR_1) != 0) {
   FUNC_4(VAR_34, "%sATAPI packet length: %d\n", VAR_37,
    VAR_42->atapi);
  }
  if ((VAR_42->valid & VAR_2) != 0) {
   FUNC_4(VAR_34, "%sPIO transaction length: %d\n",
    VAR_37, VAR_42->bytecount);
  }
 }
 if (VAR_36->transport == VAR_32) {
  struct ccb_trans_settings_sata *VAR_43 =
      &VAR_36->xport_specific.sata;

  if ((VAR_43->valid & VAR_17) != 0) {
   FUNC_4(VAR_34, "%sSATA revision: %d.x\n", VAR_37,
    VAR_43->revision);
  }
  if ((VAR_43->valid & VAR_15) != 0) {
   FUNC_4(VAR_34, "%sATA mode: %s\n", VAR_37,
    FUNC_2(VAR_43->mode));
  }
  if ((VAR_43->valid & VAR_12) != 0) {
   FUNC_4(VAR_34, "%sATAPI packet length: %d\n", VAR_37,
    VAR_43->atapi);
  }
  if ((VAR_43->valid & VAR_13) != 0) {
   FUNC_4(VAR_34, "%sPIO transaction length: %d\n",
    VAR_37, VAR_43->bytecount);
  }
  if ((VAR_43->valid & VAR_16) != 0) {
   FUNC_4(VAR_34, "%sPMP presence: %d\n", VAR_37,
    VAR_43->pm_present);
  }
  if ((VAR_43->valid & VAR_18) != 0) {
   FUNC_4(VAR_34, "%sNumber of tags: %d\n", VAR_37,
    VAR_43->tags);
  }
  if ((VAR_43->valid & VAR_14) != 0) {
   FUNC_4(VAR_34, "%sSATA capabilities: %08x\n", VAR_37,
    VAR_43->caps);
  }
 }
 if (VAR_36->protocol == VAR_26) {
  struct ccb_trans_settings_ata *VAR_44=
      &VAR_36->proto_specific.ata;

  if (VAR_44->valid & VAR_4) {
   FUNC_4(VAR_34, "%stagged queueing: %s\n", VAR_37,
    (VAR_44->flags & VAR_0) ?
    "enabled" : "disabled");
  }
 }
 if (VAR_36->protocol == VAR_28) {
  struct ccb_trans_settings_scsi *VAR_45=
      &VAR_36->proto_specific.scsi;

  if (VAR_45->valid & VAR_20) {
   FUNC_4(VAR_34, "%stagged queueing: %s\n", VAR_37,
    (VAR_45->flags & VAR_19) ?
    "enabled" : "disabled");
  }
 }
}
