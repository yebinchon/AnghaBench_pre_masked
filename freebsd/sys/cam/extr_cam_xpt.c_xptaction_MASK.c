
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int func_code; int status; int path; } ;
struct TYPE_3__ {int status; } ;
struct ccb_pathinq {int version_num; TYPE_1__ ccb_h; int transport_version; int transport; int protocol_version; int protocol; int base_transfer_speed; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_lun; int max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_pathinq cpi; } ;
struct cam_sim {char* sim_name; int bus_id; int unit_number; } ;


 int FUNC_0 (int ,int ,char*) ;
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

 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static void
FUNC_3(struct cam_sim *VAR_10, union ccb *VAR_11)
{
 FUNC_0(VAR_11->ccb_h.path, VAR_0, ("xptaction\n"));

 switch (VAR_11->ccb_h.func_code) {

 case 128:
 {
  struct ccb_pathinq *VAR_12;

  VAR_12 = &VAR_11->cpi;
  VAR_12->version_num = 1;
  VAR_12->hba_inquiry = 0;
  VAR_12->target_sprt = 0;
  VAR_12->hba_misc = 0;
  VAR_12->hba_eng_cnt = 0;
  VAR_12->max_target = 0;
  VAR_12->max_lun = 0;
  VAR_12->initiator_id = 0;
  FUNC_1(VAR_12->sim_vid, "FreeBSD", VAR_7);
  FUNC_1(VAR_12->hba_vid, "", VAR_4);
  FUNC_1(VAR_12->dev_name, VAR_10->sim_name, VAR_3);
  VAR_12->unit_number = VAR_10->unit_number;
  VAR_12->bus_id = VAR_10->bus_id;
  VAR_12->base_transfer_speed = 0;
  VAR_12->protocol = VAR_5;
  VAR_12->protocol_version = VAR_6;
  VAR_12->transport = VAR_8;
  VAR_12->transport_version = VAR_9;
  VAR_12->ccb_h.status = VAR_1;
  FUNC_2(VAR_11);
  break;
 }
 default:
  VAR_11->ccb_h.status = VAR_2;
  FUNC_2(VAR_11);
  break;
 }
}
