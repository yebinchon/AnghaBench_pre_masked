
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
struct ccb_pathinq {int version_num; int max_target; int base_transfer_speed; TYPE_4__ ccb_h; int hba_subdevice; int hba_subvendor; int hba_device; int hba_vendor; int maxio; void* protocol_version; int protocol; void* transport_version; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
struct TYPE_7__ {int valid; int revision; int caps; int atapi; void* tags; int pm_present; void* bytecount; int mode; } ;
struct TYPE_8__ {TYPE_2__ sata; } ;
struct TYPE_6__ {int valid; } ;
struct ccb_trans_settings {TYPE_3__ xport_specific; int type; TYPE_1__ proto_specific; void* transport_version; void* transport; void* protocol_version; int protocol; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_pathinq cpi; struct ccb_trans_settings cts; } ;
typedef int uint32_t ;
struct mvs_device {int revision; int caps; int atapi; void* tags; void* bytecount; int mode; } ;
struct mvs_channel {int quirks; int pm_present; struct mvs_device* user; int r_mem; struct mvs_device* curr; int sim; union ccb* frozen; int devices; int dev; } ;
struct cam_sim {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
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
 int VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 int FUNC_2 (struct cam_sim*) ;
 char* FUNC_3 (struct cam_sim*) ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int,void*) ;
 int FUNC_8 (int ,union ccb*) ;
 int FUNC_9 (int ,union ccb*) ;
 int FUNC_10 (int ,union ccb*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,int ) ;
 int FUNC_17 (union ccb*) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static void
FUNC_19(struct cam_sim *VAR_34, union ccb *VAR_35)
{
 device_t VAR_36, VAR_37;
 struct mvs_channel *VAR_38;

 FUNC_1(VAR_35->ccb_h.path, VAR_0, ("mvsaction func_code=%x\n",
     VAR_35->ccb_h.func_code));

 VAR_38 = (struct mvs_channel *)FUNC_4(VAR_34);
 VAR_36 = VAR_38->dev;
 switch (VAR_35->ccb_h.func_code) {

 case 135:
 case 130:
  if (FUNC_10(VAR_36, VAR_35))
   return;
  if (VAR_38->devices == 0 ||
      (VAR_38->pm_present == 0 &&
       VAR_35->ccb_h.target_id > 0 && VAR_35->ccb_h.target_id < 15)) {
   VAR_35->ccb_h.status = VAR_3;
   break;
  }
  VAR_35->ccb_h.recovery_type = VAR_28;

  if (FUNC_9(VAR_36, VAR_35)) {

   VAR_38->frozen = VAR_35;

   FUNC_18(VAR_38->sim, 1);
   return;
  }
  FUNC_8(VAR_36, VAR_35);
  return;
 case 136:

  VAR_35->ccb_h.status = VAR_2;
  break;
 case 129:
 {
  struct ccb_trans_settings *VAR_39 = &VAR_35->cts;
  struct mvs_device *VAR_40;

  if (FUNC_10(VAR_36, VAR_35))
   return;
  if (VAR_39->type == VAR_13)
   VAR_40 = &VAR_38->curr[VAR_35->ccb_h.target_id];
  else
   VAR_40 = &VAR_38->user[VAR_35->ccb_h.target_id];
  if (VAR_39->xport_specific.sata.valid & VAR_11)
   VAR_40->revision = VAR_39->xport_specific.sata.revision;
  if (VAR_39->xport_specific.sata.valid & VAR_9)
   VAR_40->mode = VAR_39->xport_specific.sata.mode;
  if (VAR_39->xport_specific.sata.valid & VAR_7) {
   VAR_40->bytecount = FUNC_7((VAR_38->quirks & VAR_19) ? 8192 : 2048,
       VAR_39->xport_specific.sata.bytecount);
  }
  if (VAR_39->xport_specific.sata.valid & VAR_12)
   VAR_40->tags = FUNC_7(VAR_17, VAR_39->xport_specific.sata.tags);
  if (VAR_39->xport_specific.sata.valid & VAR_10)
   VAR_38->pm_present = VAR_39->xport_specific.sata.pm_present;
  if (VAR_39->xport_specific.sata.valid & VAR_6)
   VAR_40->atapi = VAR_39->xport_specific.sata.atapi;
  if (VAR_39->xport_specific.sata.valid & VAR_8)
   VAR_40->caps = VAR_39->xport_specific.sata.caps;
  VAR_35->ccb_h.status = VAR_1;
  break;
 }
 case 134:

 {
  struct ccb_trans_settings *VAR_41 = &VAR_35->cts;
  struct mvs_device *VAR_42;
  uint32_t VAR_43;

  if (FUNC_10(VAR_36, VAR_35))
   return;
  if (VAR_41->type == VAR_13)
   VAR_42 = &VAR_38->curr[VAR_35->ccb_h.target_id];
  else
   VAR_42 = &VAR_38->user[VAR_35->ccb_h.target_id];
  VAR_41->protocol = VAR_26;
  VAR_41->protocol_version = VAR_27;
  VAR_41->transport = VAR_32;
  VAR_41->transport_version = VAR_33;
  VAR_41->proto_specific.valid = 0;
  VAR_41->xport_specific.sata.valid = 0;
  if (VAR_41->type == VAR_13 &&
      (VAR_35->ccb_h.target_id == 15 ||
      (VAR_35->ccb_h.target_id == 0 && !VAR_38->pm_present))) {
   VAR_43 = FUNC_0(VAR_38->r_mem, VAR_29) & VAR_30;
   if (VAR_43 & 0x0f0) {
    VAR_41->xport_specific.sata.revision =
        (VAR_43 & 0x0f0) >> 4;
    VAR_41->xport_specific.sata.valid |=
        VAR_11;
   }
   VAR_41->xport_specific.sata.caps = VAR_42->caps & VAR_4;


   VAR_41->xport_specific.sata.caps |= VAR_5;
   VAR_41->xport_specific.sata.caps &=
       VAR_38->user[VAR_35->ccb_h.target_id].caps;
   VAR_41->xport_specific.sata.valid |= VAR_8;
  } else {
   VAR_41->xport_specific.sata.revision = VAR_42->revision;
   VAR_41->xport_specific.sata.valid |= VAR_11;
   VAR_41->xport_specific.sata.caps = VAR_42->caps;
   if (VAR_41->type == VAR_13 )

    VAR_41->xport_specific.sata.caps &= ~VAR_5;
   VAR_41->xport_specific.sata.valid |= VAR_8;
  }
  VAR_41->xport_specific.sata.mode = VAR_42->mode;
  VAR_41->xport_specific.sata.valid |= VAR_9;
  VAR_41->xport_specific.sata.bytecount = VAR_42->bytecount;
  VAR_41->xport_specific.sata.valid |= VAR_7;
  VAR_41->xport_specific.sata.pm_present = VAR_38->pm_present;
  VAR_41->xport_specific.sata.valid |= VAR_10;
  VAR_41->xport_specific.sata.tags = VAR_42->tags;
  VAR_41->xport_specific.sata.valid |= VAR_12;
  VAR_41->xport_specific.sata.atapi = VAR_42->atapi;
  VAR_41->xport_specific.sata.valid |= VAR_6;
  VAR_35->ccb_h.status = VAR_1;
  break;
 }
 case 132:
 case 131:
  FUNC_11(VAR_36);
  VAR_35->ccb_h.status = VAR_1;
  break;
 case 128:

  VAR_35->ccb_h.status = VAR_2;
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_44 = &VAR_35->cpi;

  VAR_37 = FUNC_6(VAR_36);
  VAR_44->version_num = 1;
  VAR_44->hba_inquiry = VAR_23;
  if (!(VAR_38->quirks & VAR_18)) {
   VAR_44->hba_inquiry |= VAR_22;

   if ((VAR_38->quirks & VAR_19) || VAR_38->pm_present == 0)
    VAR_44->hba_inquiry |= VAR_24;
  }
  VAR_44->target_sprt = 0;
  VAR_44->hba_misc = VAR_21;
  VAR_44->hba_eng_cnt = 0;
  if (!(VAR_38->quirks & VAR_18))
   VAR_44->max_target = 15;
  else
   VAR_44->max_target = 0;
  VAR_44->max_lun = 0;
  VAR_44->initiator_id = 0;
  VAR_44->bus_id = FUNC_2(VAR_34);
  VAR_44->base_transfer_speed = 150000;
  FUNC_16(VAR_44->sim_vid, "FreeBSD", VAR_31);
  FUNC_16(VAR_44->hba_vid, "Marvell", VAR_15);
  FUNC_16(VAR_44->dev_name, FUNC_3(VAR_34), VAR_14);
  VAR_44->unit_number = FUNC_5(VAR_34);
  VAR_44->transport = VAR_32;
  VAR_44->transport_version = VAR_33;
  VAR_44->protocol = VAR_25;
  VAR_44->protocol_version = VAR_27;
  VAR_44->maxio = VAR_16;
  if ((VAR_38->quirks & VAR_20) == 0) {
   VAR_44->hba_vendor = FUNC_15(VAR_37);
   VAR_44->hba_device = FUNC_12(VAR_37);
   VAR_44->hba_subvendor = FUNC_14(VAR_37);
   VAR_44->hba_subdevice = FUNC_13(VAR_37);
  }
  VAR_44->ccb_h.status = VAR_1;
  break;
 }
 default:
  VAR_35->ccb_h.status = VAR_2;
  break;
 }
 FUNC_17(VAR_35);
}
