
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
struct ccb_pathinq {int version_num; int hba_inquiry; int hba_misc; int max_target; int base_transfer_speed; TYPE_4__ ccb_h; int hba_subdevice; int hba_subvendor; int hba_device; int hba_vendor; int maxio; void* protocol_version; int protocol; void* transport_version; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int hba_eng_cnt; int target_sprt; } ;
struct TYPE_7__ {int valid; int revision; int caps; int atapi; void* tags; int pm_present; void* bytecount; int mode; } ;
struct TYPE_8__ {TYPE_2__ sata; } ;
struct TYPE_6__ {int valid; } ;
struct ccb_trans_settings {TYPE_3__ xport_specific; int type; TYPE_1__ proto_specific; void* transport_version; void* transport; void* protocol_version; int protocol; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_pathinq cpi; struct ccb_trans_settings cts; } ;
typedef int uint32_t ;
struct siis_device {int revision; int caps; int atapi; void* tags; void* bytecount; int mode; } ;
struct siis_channel {int quirks; int pm_present; struct siis_device* user; int pm_level; int r_mem; struct siis_device* curr; int sim; union ccb* frozen; int devices; int mtx; int dev; } ;
struct cam_sim {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 int FUNC_3 (struct cam_sim*) ;
 char* FUNC_4 (struct cam_sim*) ;
 scalar_t__ FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (struct cam_sim*) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int,void*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,union ccb*) ;
 int FUNC_15 (int ,union ccb*) ;
 int FUNC_16 (int ,union ccb*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (union ccb*) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static void
FUNC_21(struct cam_sim *VAR_39, union ccb *VAR_40)
{
 device_t VAR_41, VAR_42;
 struct siis_channel *VAR_43;

 FUNC_2(VAR_40->ccb_h.path, VAR_1, ("siisaction func_code=%x\n",
     VAR_40->ccb_h.func_code));

 VAR_43 = (struct siis_channel *)FUNC_5(VAR_39);
 VAR_41 = VAR_43->dev;
 FUNC_9(&VAR_43->mtx, VAR_19);
 switch (VAR_40->ccb_h.func_code) {

 case 135:
 case 130:
  if (FUNC_16(VAR_41, VAR_40))
   return;
  if (VAR_43->devices == 0 ||
      (VAR_43->pm_present == 0 &&
       VAR_40->ccb_h.target_id > 0 && VAR_40->ccb_h.target_id < 15)) {
   VAR_40->ccb_h.status = VAR_4;
   break;
  }
  VAR_40->ccb_h.recovery_type = VAR_29;

  if (FUNC_15(VAR_41, VAR_40)) {

   VAR_43->frozen = VAR_40;

   FUNC_20(VAR_43->sim, 1);
   return;
  }
  FUNC_14(VAR_41, VAR_40);
  return;
 case 136:

  VAR_40->ccb_h.status = VAR_3;
  break;
 case 129:
 {
  struct ccb_trans_settings *VAR_44 = &VAR_40->cts;
  struct siis_device *VAR_45;

  if (FUNC_16(VAR_41, VAR_40))
   return;
  if (VAR_44->type == VAR_15)
   VAR_45 = &VAR_43->curr[VAR_40->ccb_h.target_id];
  else
   VAR_45 = &VAR_43->user[VAR_40->ccb_h.target_id];
  if (VAR_44->xport_specific.sata.valid & VAR_13)
   VAR_45->revision = VAR_44->xport_specific.sata.revision;
  if (VAR_44->xport_specific.sata.valid & VAR_11)
   VAR_45->mode = VAR_44->xport_specific.sata.mode;
  if (VAR_44->xport_specific.sata.valid & VAR_9)
   VAR_45->bytecount = FUNC_8(8192, VAR_44->xport_specific.sata.bytecount);
  if (VAR_44->xport_specific.sata.valid & VAR_14)
   VAR_45->tags = FUNC_8(VAR_30, VAR_44->xport_specific.sata.tags);
  if (VAR_44->xport_specific.sata.valid & VAR_12) {
   VAR_43->pm_present = VAR_44->xport_specific.sata.pm_present;
   if (VAR_43->pm_present)
    FUNC_1(VAR_43->r_mem, VAR_32, VAR_33);
   else
    FUNC_1(VAR_43->r_mem, VAR_31, VAR_33);
  }
  if (VAR_44->xport_specific.sata.valid & VAR_14)
   VAR_45->atapi = VAR_44->xport_specific.sata.atapi;
  if (VAR_44->xport_specific.sata.valid & VAR_10)
   VAR_45->caps = VAR_44->xport_specific.sata.caps;
  VAR_40->ccb_h.status = VAR_2;
  break;
 }
 case 134:

 {
  struct ccb_trans_settings *VAR_46 = &VAR_40->cts;
  struct siis_device *VAR_47;
  uint32_t VAR_48;

  if (FUNC_16(VAR_41, VAR_40))
   return;
  if (VAR_46->type == VAR_15)
   VAR_47 = &VAR_43->curr[VAR_40->ccb_h.target_id];
  else
   VAR_47 = &VAR_43->user[VAR_40->ccb_h.target_id];
  VAR_46->protocol = VAR_27;
  VAR_46->protocol_version = VAR_28;
  VAR_46->transport = VAR_37;
  VAR_46->transport_version = VAR_38;
  VAR_46->proto_specific.valid = 0;
  VAR_46->xport_specific.sata.valid = 0;
  if (VAR_46->type == VAR_15 &&
      (VAR_40->ccb_h.target_id == 15 ||
      (VAR_40->ccb_h.target_id == 0 && !VAR_43->pm_present))) {
   VAR_48 = FUNC_0(VAR_43->r_mem, VAR_34) & VAR_0;
   if (VAR_48 & 0x0f0) {
    VAR_46->xport_specific.sata.revision =
        (VAR_48 & 0x0f0) >> 4;
    VAR_46->xport_specific.sata.valid |=
        VAR_13;
   }
   VAR_46->xport_specific.sata.caps = VAR_47->caps & VAR_5;
   if (VAR_43->pm_level)
    VAR_46->xport_specific.sata.caps |= VAR_7;
   VAR_46->xport_specific.sata.caps |= VAR_6;
   VAR_46->xport_specific.sata.caps &=
       VAR_43->user[VAR_40->ccb_h.target_id].caps;
   VAR_46->xport_specific.sata.valid |= VAR_10;
  } else {
   VAR_46->xport_specific.sata.revision = VAR_47->revision;
   VAR_46->xport_specific.sata.valid |= VAR_13;
   VAR_46->xport_specific.sata.caps = VAR_47->caps;
   if (VAR_46->type == VAR_15 &&
       (VAR_43->quirks & VAR_35) == 0)
    VAR_46->xport_specific.sata.caps &= ~VAR_6;
   VAR_46->xport_specific.sata.valid |= VAR_10;
  }
  VAR_46->xport_specific.sata.mode = VAR_47->mode;
  VAR_46->xport_specific.sata.valid |= VAR_11;
  VAR_46->xport_specific.sata.bytecount = VAR_47->bytecount;
  VAR_46->xport_specific.sata.valid |= VAR_9;
  VAR_46->xport_specific.sata.pm_present = VAR_43->pm_present;
  VAR_46->xport_specific.sata.valid |= VAR_12;
  VAR_46->xport_specific.sata.tags = VAR_47->tags;
  VAR_46->xport_specific.sata.valid |= VAR_14;
  VAR_46->xport_specific.sata.atapi = VAR_47->atapi;
  VAR_46->xport_specific.sata.valid |= VAR_8;
  VAR_40->ccb_h.status = VAR_2;
  break;
 }
 case 132:
 case 131:
  FUNC_17(VAR_41);
  VAR_40->ccb_h.status = VAR_2;
  break;
 case 128:

  VAR_40->ccb_h.status = VAR_3;
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_49 = &VAR_40->cpi;

  VAR_42 = FUNC_7(VAR_41);
  VAR_49->version_num = 1;
  VAR_49->hba_inquiry = VAR_24 | VAR_25;
  VAR_49->hba_inquiry |= VAR_23;
  VAR_49->target_sprt = 0;
  VAR_49->hba_misc = VAR_21 | VAR_22 | VAR_20;
  VAR_49->hba_eng_cnt = 0;
  VAR_49->max_target = 15;
  VAR_49->max_lun = 0;
  VAR_49->initiator_id = 0;
  VAR_49->bus_id = FUNC_3(VAR_39);
  VAR_49->base_transfer_speed = 150000;
  FUNC_18(VAR_49->sim_vid, "FreeBSD", VAR_36);
  FUNC_18(VAR_49->hba_vid, "SIIS", VAR_17);
  FUNC_18(VAR_49->dev_name, FUNC_4(VAR_39), VAR_16);
  VAR_49->unit_number = FUNC_6(VAR_39);
  VAR_49->transport = VAR_37;
  VAR_49->transport_version = VAR_38;
  VAR_49->protocol = VAR_26;
  VAR_49->protocol_version = VAR_28;
  VAR_49->maxio = VAR_18;
  VAR_49->hba_vendor = FUNC_13(VAR_42);
  VAR_49->hba_device = FUNC_10(VAR_42);
  VAR_49->hba_subvendor = FUNC_12(VAR_42);
  VAR_49->hba_subdevice = FUNC_11(VAR_42);
  VAR_49->ccb_h.status = VAR_2;
  break;
 }
 default:
  VAR_40->ccb_h.status = VAR_3;
  break;
 }
 FUNC_19(VAR_40);
}
