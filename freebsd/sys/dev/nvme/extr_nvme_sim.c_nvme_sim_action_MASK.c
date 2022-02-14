
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


struct TYPE_16__ {int func_code; void* status; int path; } ;
struct TYPE_15__ {void* status; } ;
struct ccb_trans_settings_nvme {int valid; int speed; int lanes; int max_speed; int max_lanes; void* spec; } ;
struct TYPE_14__ {struct ccb_trans_settings_nvme nvme; } ;
struct TYPE_13__ {struct ccb_trans_settings_nvme nvme; } ;
struct ccb_trans_settings {TYPE_7__ ccb_h; void* protocol; void* transport; TYPE_6__ proto_specific; TYPE_5__ xport_specific; } ;
struct TYPE_12__ {void* status; } ;
struct TYPE_10__ {int extra; int function; int slot; int bus; int domain; int nsid; } ;
struct TYPE_11__ {TYPE_2__ nvme; } ;
struct ccb_pathinq {int version_num; int hba_misc; TYPE_4__ ccb_h; TYPE_3__ xport_specific; void* protocol_version; void* protocol; void* transport_version; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int base_transfer_speed; int bus_id; int initiator_id; int maxio; int max_lun; int max_target; int hba_eng_cnt; int target_sprt; int hba_inquiry; } ;
union ccb {TYPE_8__ ccb_h; struct ccb_trans_settings cts; struct ccb_pathinq cpi; } ;
typedef int uint32_t ;
struct TYPE_9__ {int nn; } ;
struct nvme_controller {int dev; int max_xfer_size; TYPE_1__ cdata; } ;
struct cam_sim {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int FUNC_1 (struct cam_sim*) ;
 char* FUNC_2 (struct cam_sim*) ;
 int FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct nvme_controller*) ;
 void* FUNC_5 (struct nvme_controller*,int ) ;
 int FUNC_6 (struct cam_sim*,union ccb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 struct nvme_controller* FUNC_12 (struct cam_sim*) ;
 int FUNC_13 (int ,char*,int ) ;
 int VAR_21 ;
 int FUNC_14 (union ccb*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(struct cam_sim *VAR_22, union ccb *VAR_23)
{
 struct nvme_controller *VAR_24;

 FUNC_0(VAR_23->ccb_h.path, VAR_0,
     ("nvme_sim_action: func= %#x\n",
  VAR_23->ccb_h.func_code));

 VAR_24 = FUNC_12(VAR_22);

 switch (VAR_23->ccb_h.func_code) {
 case 136:





 case 137:
  VAR_23->ccb_h.status = VAR_2;
  break;
 case 129:




  VAR_23->ccb_h.status = VAR_1;
  break;
 case 132:
 {
  struct ccb_pathinq *VAR_25 = &VAR_23->cpi;
  device_t VAR_26 = VAR_24->dev;







  VAR_25->version_num = 1;
  VAR_25->hba_inquiry = 0;
  VAR_25->target_sprt = 0;
  VAR_25->hba_misc = VAR_17 | VAR_16;
  VAR_25->hba_eng_cnt = 0;
  VAR_25->max_target = 0;
  VAR_25->max_lun = VAR_24->cdata.nn;
  VAR_25->maxio = VAR_24->max_xfer_size;
  VAR_25->initiator_id = 0;
  VAR_25->bus_id = FUNC_1(VAR_22);
  VAR_25->base_transfer_speed = FUNC_4(VAR_24);
  FUNC_13(VAR_25->sim_vid, "FreeBSD", VAR_19);
  FUNC_13(VAR_25->hba_vid, "NVMe", VAR_6);
  FUNC_13(VAR_25->dev_name, FUNC_2(VAR_22), VAR_5);
  VAR_25->unit_number = FUNC_3(VAR_22);
  VAR_25->transport = VAR_20;
  VAR_25->transport_version = FUNC_5(VAR_24, VAR_21);
  VAR_25->protocol = VAR_18;
  VAR_25->protocol_version = FUNC_5(VAR_24, VAR_21);
  VAR_25->xport_specific.nvme.nsid = FUNC_15(VAR_23->ccb_h.path);
  VAR_25->xport_specific.nvme.domain = FUNC_8(VAR_26);
  VAR_25->xport_specific.nvme.bus = FUNC_7(VAR_26);
  VAR_25->xport_specific.nvme.slot = FUNC_10(VAR_26);
  VAR_25->xport_specific.nvme.function = FUNC_9(VAR_26);
  VAR_25->xport_specific.nvme.extra = 0;
  VAR_25->ccb_h.status = VAR_1;
  break;
 }
 case 135:
 {
  struct ccb_trans_settings *VAR_27;
  struct ccb_trans_settings_nvme *VAR_28;
  struct ccb_trans_settings_nvme *VAR_29;
  device_t VAR_30;
  uint32_t VAR_31, VAR_32, VAR_33;

  VAR_30 = VAR_24->dev;
  VAR_27 = &VAR_23->cts;
  VAR_29 = &VAR_27->xport_specific.nvme;
  VAR_28 = &VAR_27->proto_specific.nvme;

  VAR_31 = FUNC_11(VAR_30, VAR_15, 2);
  VAR_32 = FUNC_11(VAR_30, VAR_14, 2);
  VAR_33 = FUNC_11(VAR_30, VAR_13, 2);
  VAR_29->spec = FUNC_5(VAR_24, VAR_21);
  VAR_29->valid = VAR_4;
  if ((VAR_33 & VAR_7) == VAR_12) {
   VAR_29->valid |= VAR_3;
   VAR_29->speed = VAR_31 & VAR_10;
   VAR_29->lanes = (VAR_31 & VAR_11) >> 4;
   VAR_29->max_speed = VAR_32 & VAR_8;
   VAR_29->max_lanes = (VAR_32 & VAR_9) >> 4;
  }


  VAR_28->valid = 1;
  VAR_28->spec = VAR_29->spec;

  VAR_27->transport = VAR_20;
  VAR_27->protocol = VAR_18;
  VAR_27->ccb_h.status = VAR_1;
  break;
 }
 case 128:





 case 130:
 case 131:





  VAR_23->ccb_h.status = VAR_1;
  break;
 case 133:
 case 134:
  FUNC_6(VAR_22, VAR_23);
  return;
 default:
  VAR_23->ccb_h.status = VAR_2;
  break;
 }
 FUNC_14(VAR_23);
}
