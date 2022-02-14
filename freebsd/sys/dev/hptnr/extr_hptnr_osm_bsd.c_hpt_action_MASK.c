
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int func_code; void* status; int target_id; } ;
struct TYPE_8__ {void* status; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; int transport_version; TYPE_2__ ccb_h; int protocol_version; int protocol; int transport; int dev_name; int hba_vid; int sim_vid; void* initiator_id; int bus_id; int unit_number; int max_lun; void* max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
struct TYPE_7__ {int heads; int secs_per_track; int cylinders; int volume_size; } ;
union ccb {TYPE_3__ ccb_h; struct ccb_pathinq cpi; TYPE_1__ ccg; } ;
struct cam_sim {int dummy; } ;
struct TYPE_10__ {int vbus; } ;
typedef TYPE_4__* PVBUS_EXT ;
typedef int PVBUS ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_1 (struct cam_sim*) ;
 char* FUNC_2 (struct cam_sim*) ;
 int FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,union ccb*) ;
 int FUNC_7 (int ) ;
 void* VAR_11 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static void FUNC_10(struct cam_sim *VAR_12, union ccb *VAR_13)
{
 PVBUS_EXT VAR_14 = (PVBUS_EXT)FUNC_3(VAR_12);

 FUNC_0(("hpt_action(fn=%d, id=%d)", VAR_13->ccb_h.func_code, VAR_13->ccb_h.target_id));

 FUNC_5(VAR_14);
 switch (VAR_13->ccb_h.func_code) {

 case 129:
  FUNC_6(VAR_14, VAR_13);
  return;

 case 130:
  FUNC_7((PVBUS)VAR_14->vbus);
  break;

 case 132:
 case 128:
  VAR_13->ccb_h.status = VAR_0;
  break;

 case 133:
  VAR_13->ccg.heads = 255;
  VAR_13->ccg.secs_per_track = 63;
  VAR_13->ccg.cylinders = VAR_13->ccg.volume_size / (VAR_13->ccg.heads * VAR_13->ccg.secs_per_track);
  VAR_13->ccb_h.status = VAR_1;
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
  VAR_15->unit_number = FUNC_4(VAR_12);
  VAR_15->bus_id = FUNC_1(VAR_12);
  VAR_15->initiator_id = VAR_11;
  VAR_15->base_transfer_speed = 3300;

  FUNC_8(VAR_15->sim_vid, "FreeBSD", VAR_9);
  FUNC_8(VAR_15->hba_vid, "HPT   ", VAR_4);
  FUNC_8(VAR_15->dev_name, FUNC_2(VAR_12), VAR_3);
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

 FUNC_9(VAR_13);
 return;
}
