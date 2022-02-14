
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int func_code; int status; int target_id; } ;
struct TYPE_6__ {int status; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; int transport_version; TYPE_1__ ccb_h; int protocol_version; int protocol; int transport; int dev_name; int hba_vid; int sim_vid; void* initiator_id; int bus_id; int unit_number; int max_lun; void* max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_pathinq cpi; int ccg; } ;
struct cam_sim {int dummy; } ;
struct TYPE_8__ {int vbus; } ;
typedef TYPE_3__* PVBUS_EXT ;
typedef int PVBUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cam_sim*) ;
 char* FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,union ccb*) ;
 int FUNC_8 (int ) ;
 void* VAR_11 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (union ccb*) ;

__attribute__((used)) static void FUNC_11(struct cam_sim *VAR_12, union ccb *VAR_13)
{
 PVBUS_EXT VAR_14 = (PVBUS_EXT)FUNC_4(VAR_12);

 FUNC_0(("hpt_action(fn=%d, id=%d)", VAR_13->ccb_h.func_code, VAR_13->ccb_h.target_id));

 FUNC_6(VAR_14);
 switch (VAR_13->ccb_h.func_code) {

 case 129:
  FUNC_7(VAR_14, VAR_13);
  return;

 case 130:
  FUNC_8((PVBUS)VAR_14->vbus);
  break;

 case 132:
 case 128:
  VAR_13->ccb_h.status = VAR_0;
  break;

 case 133:
  FUNC_1(&VAR_13->ccg, 1);
  break;

 case 131:
 {
  struct ccb_pathinq *VAR_15 = &VAR_13->cpi;

  VAR_15->version_num = 1;
  VAR_15->hba_inquiry = VAR_6;
  VAR_15->target_sprt = 0;
  VAR_15->hba_misc = VAR_5;
  VAR_15->hba_eng_cnt = 0;
  VAR_15->max_target = VAR_11;
  VAR_15->max_lun = 0;
  VAR_15->unit_number = FUNC_5(VAR_12);
  VAR_15->bus_id = FUNC_2(VAR_12);
  VAR_15->initiator_id = VAR_11;
  VAR_15->base_transfer_speed = 3300;

  FUNC_9(VAR_15->sim_vid, "FreeBSD", VAR_9);
  FUNC_9(VAR_15->hba_vid, "HPT   ", VAR_4);
  FUNC_9(VAR_15->dev_name, FUNC_3(VAR_12), VAR_3);
  VAR_15->transport = VAR_10;
  VAR_15->transport_version = 2;
  VAR_15->protocol = VAR_7;
  VAR_15->protocol_version = VAR_8;
  VAR_15->ccb_h.status = VAR_1;
  break;
 }

 default:
  VAR_13->ccb_h.status = VAR_2;
  break;
 }

 FUNC_10(VAR_13);
 return;
}
