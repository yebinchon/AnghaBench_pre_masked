
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int func_code; void* status; int path; } ;
struct TYPE_3__ {void* status; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; TYPE_1__ ccb_h; int hba_subdevice; int hba_subvendor; int hba_device; int hba_vendor; int maxio; int protocol_version; int protocol; int transport_version; int transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_lun; int max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_pathinq cpi; } ;
struct cam_sim {int dummy; } ;
struct ahci_enclosure {int dev; } ;
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




 int FUNC_1 (union ccb*) ;
 int FUNC_2 (int ,union ccb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cam_sim*) ;
 char* FUNC_5 (struct cam_sim*) ;
 struct ahci_enclosure* FUNC_6 (struct cam_sim*) ;
 int FUNC_7 (struct cam_sim*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (union ccb*) ;

__attribute__((used)) static void
FUNC_15(struct cam_sim *VAR_13, union ccb *VAR_14)
{
 device_t VAR_15, VAR_16;
 struct ahci_enclosure *VAR_17;

 FUNC_0(VAR_14->ccb_h.path, VAR_0,
     ("ahciemaction func_code=%x\n", VAR_14->ccb_h.func_code));

 VAR_17 = FUNC_6(VAR_13);
 VAR_15 = VAR_17->dev;
 switch (VAR_14->ccb_h.func_code) {
 case 131:
  if (FUNC_1(VAR_14))
   return;
  FUNC_2(VAR_15, VAR_14);
  return;
 case 129:
 case 128:
  FUNC_3(VAR_15);
  VAR_14->ccb_h.status = VAR_1;
  break;
 case 130:
 {
  struct ccb_pathinq *VAR_18 = &VAR_14->cpi;

  VAR_16 = FUNC_8(VAR_15);
  VAR_18->version_num = 1;
  VAR_18->hba_inquiry = VAR_7;
  VAR_18->target_sprt = 0;
  VAR_18->hba_misc = VAR_6;
  VAR_18->hba_eng_cnt = 0;
  VAR_18->max_target = 0;
  VAR_18->max_lun = 0;
  VAR_18->initiator_id = 0;
  VAR_18->bus_id = FUNC_4(VAR_13);
  VAR_18->base_transfer_speed = 150000;
  FUNC_13(VAR_18->sim_vid, "FreeBSD", VAR_10);
  FUNC_13(VAR_18->hba_vid, "AHCI", VAR_4);
  FUNC_13(VAR_18->dev_name, FUNC_5(VAR_13), VAR_3);
  VAR_18->unit_number = FUNC_7(VAR_13);
  VAR_18->transport = VAR_11;
  VAR_18->transport_version = VAR_12;
  VAR_18->protocol = VAR_8;
  VAR_18->protocol_version = VAR_9;
  VAR_18->maxio = VAR_5;
  VAR_18->hba_vendor = FUNC_12(VAR_16);
  VAR_18->hba_device = FUNC_9(VAR_16);
  VAR_18->hba_subvendor = FUNC_11(VAR_16);
  VAR_18->hba_subdevice = FUNC_10(VAR_16);
  VAR_18->ccb_h.status = VAR_1;
  break;
 }
 default:
  VAR_14->ccb_h.status = VAR_2;
  break;
 }
 FUNC_14(VAR_14);
}
