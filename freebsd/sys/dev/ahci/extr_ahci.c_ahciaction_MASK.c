
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int func_code; int target_id; void* status; int recovery_type; int path; } ;
struct TYPE_9__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_misc; int max_target; int base_transfer_speed; int maxio; TYPE_4__ ccb_h; int hba_subdevice; int hba_subvendor; int hba_device; int hba_vendor; void* protocol_version; int protocol; void* transport_version; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int hba_eng_cnt; int target_sprt; int hba_inquiry; } ;
struct TYPE_7__ {int valid; int revision; int bytecount; int tags; int caps; int atapi; int pm_present; int mode; } ;
struct TYPE_8__ {TYPE_2__ sata; } ;
struct TYPE_6__ {int valid; } ;
struct ccb_trans_settings {TYPE_3__ xport_specific; int type; TYPE_1__ proto_specific; void* transport_version; void* transport; void* protocol_version; int protocol; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_pathinq cpi; struct ccb_trans_settings cts; } ;
typedef int uint32_t ;
struct cam_sim {int dummy; } ;
struct ahci_device {int revision; int bytecount; int tags; int caps; int atapi; int mode; } ;
struct ahci_channel {int numslots; int caps; int caps2; int quirks; int subdeviceid; int subvendorid; int deviceid; int vendorid; int pm_present; struct ahci_device* user; int pm_level; int r_mem; struct ahci_device* curr; int sim; union ccb* frozen; int devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 void* VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 void* VAR_41 ;
 void* VAR_42 ;
 int FUNC_2 (struct ahci_channel*,union ccb*) ;
 int FUNC_3 (struct ahci_channel*,union ccb*) ;
 int FUNC_4 (struct ahci_channel*,union ccb*) ;
 int FUNC_5 (struct ahci_channel*,union ccb*) ;
 int FUNC_6 (struct ahci_channel*) ;
 int FUNC_7 (struct cam_sim*) ;
 char* FUNC_8 (struct cam_sim*) ;
 scalar_t__ FUNC_9 (struct cam_sim*) ;
 int FUNC_10 (struct cam_sim*) ;
 void* FUNC_11 (int,int) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static void
FUNC_14(struct cam_sim *VAR_43, union ccb *VAR_44)
{
 struct ahci_channel *VAR_45;

 FUNC_1(VAR_44->ccb_h.path, VAR_10, ("ahciaction func_code=%x\n",
     VAR_44->ccb_h.func_code));

 VAR_45 = (struct ahci_channel *)FUNC_9(VAR_43);
 switch (VAR_44->ccb_h.func_code) {

 case 135:
 case 130:
  if (FUNC_4(VAR_45, VAR_44))
   return;
  if (VAR_45->devices == 0 ||
      (VAR_45->pm_present == 0 &&
       VAR_44->ccb_h.target_id > 0 && VAR_44->ccb_h.target_id < 15)) {
   VAR_44->ccb_h.status = VAR_13;
   break;
  }
  VAR_44->ccb_h.recovery_type = VAR_39;

  if (FUNC_3(VAR_45, VAR_44)) {

   VAR_45->frozen = VAR_44;

   FUNC_13(VAR_45->sim, 1);
   return;
  }
  FUNC_2(VAR_45, VAR_44);
  return;
 case 136:

  VAR_44->ccb_h.status = VAR_12;
  break;
 case 129:
 {
  struct ccb_trans_settings *VAR_46 = &VAR_44->cts;
  struct ahci_device *VAR_47;

  if (FUNC_4(VAR_45, VAR_44))
   return;
  if (VAR_46->type == VAR_26)
   VAR_47 = &VAR_45->curr[VAR_44->ccb_h.target_id];
  else
   VAR_47 = &VAR_45->user[VAR_44->ccb_h.target_id];
  if (VAR_46->xport_specific.sata.valid & VAR_24)
   VAR_47->revision = VAR_46->xport_specific.sata.revision;
  if (VAR_46->xport_specific.sata.valid & VAR_22)
   VAR_47->mode = VAR_46->xport_specific.sata.mode;
  if (VAR_46->xport_specific.sata.valid & VAR_20)
   VAR_47->bytecount = FUNC_11(8192, VAR_46->xport_specific.sata.bytecount);
  if (VAR_46->xport_specific.sata.valid & VAR_25)
   VAR_47->tags = FUNC_11(VAR_45->numslots, VAR_46->xport_specific.sata.tags);
  if (VAR_46->xport_specific.sata.valid & VAR_23)
   VAR_45->pm_present = VAR_46->xport_specific.sata.pm_present;
  if (VAR_46->xport_specific.sata.valid & VAR_19)
   VAR_47->atapi = VAR_46->xport_specific.sata.atapi;
  if (VAR_46->xport_specific.sata.valid & VAR_21)
   VAR_47->caps = VAR_46->xport_specific.sata.caps;
  VAR_44->ccb_h.status = VAR_11;
  break;
 }
 case 134:

 {
  struct ccb_trans_settings *VAR_48 = &VAR_44->cts;
  struct ahci_device *VAR_49;
  uint32_t VAR_50;

  if (FUNC_4(VAR_45, VAR_44))
   return;
  if (VAR_48->type == VAR_26)
   VAR_49 = &VAR_45->curr[VAR_44->ccb_h.target_id];
  else
   VAR_49 = &VAR_45->user[VAR_44->ccb_h.target_id];
  VAR_48->protocol = VAR_37;
  VAR_48->protocol_version = VAR_38;
  VAR_48->transport = VAR_41;
  VAR_48->transport_version = VAR_42;
  VAR_48->proto_specific.valid = 0;
  VAR_48->xport_specific.sata.valid = 0;
  if (VAR_48->type == VAR_26 &&
      (VAR_44->ccb_h.target_id == 15 ||
      (VAR_44->ccb_h.target_id == 0 && !VAR_45->pm_present))) {
   VAR_50 = FUNC_0(VAR_45->r_mem, VAR_5) & VAR_9;
   if (VAR_50 & 0x0f0) {
    VAR_48->xport_specific.sata.revision =
        (VAR_50 & 0x0f0) >> 4;
    VAR_48->xport_specific.sata.valid |=
        VAR_24;
   }
   VAR_48->xport_specific.sata.caps = VAR_49->caps & VAR_14;
   if (VAR_45->pm_level) {
    if (VAR_45->caps & (VAR_1 | VAR_4))
     VAR_48->xport_specific.sata.caps |= VAR_18;
    if (VAR_45->caps2 & VAR_0)
     VAR_48->xport_specific.sata.caps |= VAR_16;
   }
   if ((VAR_45->caps & VAR_2) &&
       (VAR_45->quirks & VAR_7) == 0)
    VAR_48->xport_specific.sata.caps |= VAR_17;
   VAR_48->xport_specific.sata.caps |= VAR_15;
   VAR_48->xport_specific.sata.caps &=
       VAR_45->user[VAR_44->ccb_h.target_id].caps;
   VAR_48->xport_specific.sata.valid |= VAR_21;
  } else {
   VAR_48->xport_specific.sata.revision = VAR_49->revision;
   VAR_48->xport_specific.sata.valid |= VAR_24;
   VAR_48->xport_specific.sata.caps = VAR_49->caps;
   VAR_48->xport_specific.sata.valid |= VAR_21;
  }
  VAR_48->xport_specific.sata.mode = VAR_49->mode;
  VAR_48->xport_specific.sata.valid |= VAR_22;
  VAR_48->xport_specific.sata.bytecount = VAR_49->bytecount;
  VAR_48->xport_specific.sata.valid |= VAR_20;
  VAR_48->xport_specific.sata.pm_present = VAR_45->pm_present;
  VAR_48->xport_specific.sata.valid |= VAR_23;
  VAR_48->xport_specific.sata.tags = VAR_49->tags;
  VAR_48->xport_specific.sata.valid |= VAR_25;
  VAR_48->xport_specific.sata.atapi = VAR_49->atapi;
  VAR_48->xport_specific.sata.valid |= VAR_19;
  VAR_44->ccb_h.status = VAR_11;
  break;
 }
 case 132:
 case 131:
  FUNC_6(VAR_45);
  VAR_44->ccb_h.status = VAR_11;
  break;
 case 128:

  VAR_44->ccb_h.status = VAR_12;
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_51 = &VAR_44->cpi;

  VAR_51->version_num = 1;
  VAR_51->hba_inquiry = VAR_34;
  if (VAR_45->caps & VAR_2)
   VAR_51->hba_inquiry |= VAR_35;
  if (VAR_45->caps & VAR_3)
   VAR_51->hba_inquiry |= VAR_33;
  VAR_51->target_sprt = 0;
  VAR_51->hba_misc = VAR_31 | VAR_32;
  if ((VAR_45->quirks & VAR_8) == 0)
   VAR_51->hba_misc |= VAR_30;
  VAR_51->hba_eng_cnt = 0;
  if (VAR_45->caps & VAR_3)
   VAR_51->max_target = 15;
  else
   VAR_51->max_target = 0;
  VAR_51->max_lun = 0;
  VAR_51->initiator_id = 0;
  VAR_51->bus_id = FUNC_7(VAR_43);
  VAR_51->base_transfer_speed = 150000;
  FUNC_12(VAR_51->sim_vid, "FreeBSD", VAR_40);
  FUNC_12(VAR_51->hba_vid, "AHCI", VAR_28);
  FUNC_12(VAR_51->dev_name, FUNC_8(VAR_43), VAR_27);
  VAR_51->unit_number = FUNC_10(VAR_43);
  VAR_51->transport = VAR_41;
  VAR_51->transport_version = VAR_42;
  VAR_51->protocol = VAR_36;
  VAR_51->protocol_version = VAR_38;
  VAR_51->maxio = VAR_29;

  if (VAR_45->quirks & VAR_6)
   VAR_51->maxio = FUNC_11(VAR_51->maxio, 128 * 512);
  VAR_51->hba_vendor = VAR_45->vendorid;
  VAR_51->hba_device = VAR_45->deviceid;
  VAR_51->hba_subvendor = VAR_45->subvendorid;
  VAR_51->hba_subdevice = VAR_45->subdeviceid;
  VAR_51->ccb_h.status = VAR_11;
  break;
 }
 default:
  VAR_44->ccb_h.status = VAR_12;
  break;
 }
 FUNC_5(VAR_45, VAR_44);
}
