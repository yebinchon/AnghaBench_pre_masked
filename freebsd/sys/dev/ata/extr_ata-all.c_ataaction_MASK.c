
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int func_code; int target_id; void* status; int path; } ;
struct TYPE_15__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_misc; int max_target; int base_transfer_speed; TYPE_7__ ccb_h; int hba_subdevice; int hba_subvendor; int hba_device; int hba_vendor; int maxio; void* protocol_version; int protocol; void* transport_version; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int hba_eng_cnt; int target_sprt; int hba_inquiry; } ;
struct TYPE_12__ {int valid; int caps; int atapi; int bytecount; void* mode; } ;
struct TYPE_11__ {int valid; int revision; int caps; int atapi; int bytecount; void* mode; } ;
struct TYPE_13__ {TYPE_4__ ata; TYPE_3__ sata; } ;
struct ccb_trans_settings {TYPE_5__ xport_specific; int type; void* transport_version; void* transport; void* protocol_version; int protocol; } ;
struct ata_res {int lba_high; int lba_mid; } ;
struct TYPE_9__ {int flags; int control; } ;
struct TYPE_10__ {struct ata_res res; TYPE_1__ cmd; } ;
union ccb {TYPE_8__ ccb_h; struct ccb_pathinq cpi; struct ccb_trans_settings cts; TYPE_2__ ataio; } ;
struct cam_sim {int dummy; } ;
struct TYPE_14__ {int max_iosize; } ;
struct ata_channel {int devices; int flags; TYPE_6__ dma; struct ata_cam_device* user; int pm_level; struct ata_cam_device* curr; int dev; int running; } ;
struct ata_cam_device {int revision; int caps; int atapi; int bytecount; void* mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,size_t,void*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 void* VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 int FUNC_3 (int ,union ccb*) ;
 int FUNC_4 (int ,union ccb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ata_res*,int) ;
 int FUNC_7 (struct cam_sim*) ;
 char* FUNC_8 (struct cam_sim*) ;
 scalar_t__ FUNC_9 (struct cam_sim*) ;
 int FUNC_10 (struct cam_sim*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (union ccb*) ;

__attribute__((used)) static void
FUNC_22(struct cam_sim *VAR_38, union ccb *VAR_39)
{
 device_t VAR_40, VAR_41;
 struct ata_channel *VAR_42;

 FUNC_2(VAR_39->ccb_h.path, VAR_7, ("ataaction func_code=%x\n",
     VAR_39->ccb_h.func_code));

 VAR_42 = (struct ata_channel *)FUNC_9(VAR_38);
 VAR_40 = VAR_42->dev;
 switch (VAR_39->ccb_h.func_code) {

 case 135:
 case 130:
  if (FUNC_4(VAR_40, VAR_39))
   return;
  if ((VAR_42->devices & ((VAR_1 | VAR_0)
      << VAR_39->ccb_h.target_id)) == 0) {
   VAR_39->ccb_h.status = VAR_10;
   break;
  }
  if (VAR_42->running)
   FUNC_14(VAR_40, "already running!\n");
  if (VAR_39->ccb_h.func_code == 135 &&
      (VAR_39->ataio.cmd.flags & VAR_6) &&
      (VAR_39->ataio.cmd.control & VAR_2)) {
   struct ata_res *VAR_43 = &VAR_39->ataio.res;

   FUNC_6(VAR_43, sizeof(*VAR_43));
   if (VAR_42->devices & (VAR_1 << VAR_39->ccb_h.target_id)) {
    VAR_43->lba_high = 0;
    VAR_43->lba_mid = 0;
   } else {
    VAR_43->lba_high = 0xeb;
    VAR_43->lba_mid = 0x14;
   }
   VAR_39->ccb_h.status = VAR_8;
   break;
  }
  FUNC_3(VAR_40, VAR_39);
  return;
 case 136:

  VAR_39->ccb_h.status = VAR_9;
  break;
 case 129:
 {
  struct ccb_trans_settings *VAR_44 = &VAR_39->cts;
  struct ata_cam_device *VAR_45;

  if (FUNC_4(VAR_40, VAR_39))
   return;
  if (VAR_44->type == VAR_24)
   VAR_45 = &VAR_42->curr[VAR_39->ccb_h.target_id];
  else
   VAR_45 = &VAR_42->user[VAR_39->ccb_h.target_id];
  if (VAR_42->flags & VAR_5) {
   if (VAR_44->xport_specific.sata.valid & VAR_23)
    VAR_45->revision = VAR_44->xport_specific.sata.revision;
   if (VAR_44->xport_specific.sata.valid & VAR_22) {
    if (VAR_44->type == VAR_24) {
     VAR_45->mode = FUNC_1(VAR_42->dev,
         VAR_39->ccb_h.target_id,
         VAR_44->xport_specific.sata.mode);
    } else
     VAR_45->mode = VAR_44->xport_specific.sata.mode;
   }
   if (VAR_44->xport_specific.sata.valid & VAR_20)
    VAR_45->bytecount = FUNC_15(8192, VAR_44->xport_specific.sata.bytecount);
   if (VAR_44->xport_specific.sata.valid & VAR_19)
    VAR_45->atapi = VAR_44->xport_specific.sata.atapi;
   if (VAR_44->xport_specific.sata.valid & VAR_21)
    VAR_45->caps = VAR_44->xport_specific.sata.caps;
  } else {
   if (VAR_44->xport_specific.ata.valid & VAR_16) {
    if (VAR_44->type == VAR_24) {
     VAR_45->mode = FUNC_1(VAR_42->dev,
         VAR_39->ccb_h.target_id,
         VAR_44->xport_specific.ata.mode);
    } else
     VAR_45->mode = VAR_44->xport_specific.ata.mode;
   }
   if (VAR_44->xport_specific.ata.valid & VAR_14)
    VAR_45->bytecount = VAR_44->xport_specific.ata.bytecount;
   if (VAR_44->xport_specific.ata.valid & VAR_13)
    VAR_45->atapi = VAR_44->xport_specific.ata.atapi;
   if (VAR_44->xport_specific.ata.valid & VAR_15)
    VAR_45->caps = VAR_44->xport_specific.ata.caps;
  }
  VAR_39->ccb_h.status = VAR_8;
  break;
 }
 case 134:
 {
  struct ccb_trans_settings *VAR_46 = &VAR_39->cts;
  struct ata_cam_device *VAR_47;

  if (FUNC_4(VAR_40, VAR_39))
   return;
  if (VAR_46->type == VAR_24)
   VAR_47 = &VAR_42->curr[VAR_39->ccb_h.target_id];
  else
   VAR_47 = &VAR_42->user[VAR_39->ccb_h.target_id];
  VAR_46->protocol = VAR_32;
  VAR_46->protocol_version = VAR_33;
  if (VAR_42->flags & VAR_5) {
   VAR_46->transport = VAR_36;
   VAR_46->transport_version = VAR_37;
   VAR_46->xport_specific.sata.valid = 0;
   VAR_46->xport_specific.sata.mode = VAR_47->mode;
   VAR_46->xport_specific.sata.valid |= VAR_22;
   VAR_46->xport_specific.sata.bytecount = VAR_47->bytecount;
   VAR_46->xport_specific.sata.valid |= VAR_20;
   if (VAR_46->type == VAR_24) {
    VAR_46->xport_specific.sata.revision =
        FUNC_0(VAR_40, VAR_39->ccb_h.target_id);
    if (VAR_46->xport_specific.sata.revision != 0xff) {
     VAR_46->xport_specific.sata.valid |=
         VAR_23;
    }
    VAR_46->xport_specific.sata.caps =
        VAR_47->caps & VAR_17;
    if (VAR_42->pm_level) {
     VAR_46->xport_specific.sata.caps |=
         VAR_18;
    }
    VAR_46->xport_specific.sata.caps &=
        VAR_42->user[VAR_39->ccb_h.target_id].caps;
   } else {
    VAR_46->xport_specific.sata.revision = VAR_47->revision;
    VAR_46->xport_specific.sata.valid |= VAR_23;
    VAR_46->xport_specific.sata.caps = VAR_47->caps;
   }
   VAR_46->xport_specific.sata.valid |= VAR_21;
   VAR_46->xport_specific.sata.atapi = VAR_47->atapi;
   VAR_46->xport_specific.sata.valid |= VAR_19;
  } else {
   VAR_46->transport = VAR_35;
   VAR_46->transport_version = VAR_37;
   VAR_46->xport_specific.ata.valid = 0;
   VAR_46->xport_specific.ata.mode = VAR_47->mode;
   VAR_46->xport_specific.ata.valid |= VAR_16;
   VAR_46->xport_specific.ata.bytecount = VAR_47->bytecount;
   VAR_46->xport_specific.ata.valid |= VAR_14;
   if (VAR_46->type == VAR_24) {
    VAR_46->xport_specific.ata.caps =
        VAR_47->caps & VAR_11;
    if (!(VAR_42->flags & VAR_3))
     VAR_46->xport_specific.ata.caps |=
         VAR_12;
    VAR_46->xport_specific.ata.caps &=
        VAR_42->user[VAR_39->ccb_h.target_id].caps;
   } else
    VAR_46->xport_specific.ata.caps = VAR_47->caps;
   VAR_46->xport_specific.ata.valid |= VAR_15;
   VAR_46->xport_specific.ata.atapi = VAR_47->atapi;
   VAR_46->xport_specific.ata.valid |= VAR_13;
  }
  VAR_39->ccb_h.status = VAR_8;
  break;
 }
 case 132:
 case 131:
  FUNC_5(VAR_40);
  VAR_39->ccb_h.status = VAR_8;
  break;
 case 128:

  VAR_39->ccb_h.status = VAR_9;
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_48 = &VAR_39->cpi;

  VAR_41 = FUNC_13(VAR_40);
  VAR_48->version_num = 1;
  VAR_48->hba_inquiry = VAR_30;
  VAR_48->target_sprt = 0;
  VAR_48->hba_misc = VAR_28 | VAR_29;
  VAR_48->hba_eng_cnt = 0;
  if (VAR_42->flags & VAR_4)
   VAR_48->max_target = 0;
  else
   VAR_48->max_target = 1;
  VAR_48->max_lun = 0;
  VAR_48->initiator_id = 0;
  VAR_48->bus_id = FUNC_7(VAR_38);
  if (VAR_42->flags & VAR_5)
   VAR_48->base_transfer_speed = 150000;
  else
   VAR_48->base_transfer_speed = 3300;
  FUNC_20(VAR_48->sim_vid, "FreeBSD", VAR_34);
  FUNC_20(VAR_48->hba_vid, "ATA", VAR_27);
  FUNC_20(VAR_48->dev_name, FUNC_8(VAR_38), VAR_25);
  VAR_48->unit_number = FUNC_10(VAR_38);
  if (VAR_42->flags & VAR_5)
   VAR_48->transport = VAR_36;
  else
   VAR_48->transport = VAR_35;
  VAR_48->transport_version = VAR_37;
  VAR_48->protocol = VAR_31;
  VAR_48->protocol_version = VAR_33;
  VAR_48->maxio = VAR_42->dma.max_iosize ? VAR_42->dma.max_iosize : VAR_26;
  if (FUNC_12(FUNC_13(VAR_41)) ==
      FUNC_11("pci")) {
   VAR_48->hba_vendor = FUNC_19(VAR_41);
   VAR_48->hba_device = FUNC_16(VAR_41);
   VAR_48->hba_subvendor = FUNC_18(VAR_41);
   VAR_48->hba_subdevice = FUNC_17(VAR_41);
  }
  VAR_48->ccb_h.status = VAR_8;
  break;
 }
 default:
  VAR_39->ccb_h.status = VAR_9;
  break;
 }
 FUNC_21(VAR_39);
}
