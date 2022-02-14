
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int func_code; void* status; } ;
struct TYPE_9__ {void* status; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct TYPE_8__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {TYPE_4__ ccb_h; int transport_version; void* transport; void* protocol_version; void* protocol; TYPE_3__ proto_specific; } ;
struct TYPE_7__ {void* status; } ;
struct ccb_pathinq {int version_num; int max_lun; int base_transfer_speed; TYPE_2__ ccb_h; int maxio; void* protocol_version; void* protocol; int transport_version; void* transport; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_target; int hba_eng_cnt; int hba_misc; int target_sprt; int hba_inquiry; } ;
union ccb {TYPE_5__ ccb_h; int ccg; struct ccb_trans_settings cts; struct ccb_pathinq cpi; } ;
struct iscsi_session {int is_connected; TYPE_1__* is_conn; scalar_t__ is_terminating; } ;
struct cam_sim {int dummy; } ;
struct TYPE_6__ {int ic_unmapped; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iscsi_session*,char*,...) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;







 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct cam_sim*) ;
 char* FUNC_5 (struct cam_sim*) ;
 struct iscsi_session* FUNC_6 (struct cam_sim*) ;
 int FUNC_7 (struct cam_sim*) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (struct iscsi_session*,union ccb*) ;
 int FUNC_9 (struct iscsi_session*,union ccb*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (union ccb*) ;

__attribute__((used)) static void
FUNC_12(struct cam_sim *VAR_16, union ccb *VAR_17)
{
 struct iscsi_session *VAR_18;

 VAR_18 = FUNC_6(VAR_16);

 FUNC_1(VAR_18);

 if (VAR_18->is_terminating ||
     (VAR_18->is_connected == 0 && VAR_15)) {
  VAR_17->ccb_h.status = VAR_0;
  FUNC_11(VAR_17);
  return;
 }

 switch (VAR_17->ccb_h.func_code) {
 case 131:
 {
  struct ccb_pathinq *VAR_19 = &VAR_17->cpi;

  VAR_19->version_num = 1;
  VAR_19->hba_inquiry = VAR_10;
  VAR_19->target_sprt = 0;
  VAR_19->hba_misc = VAR_8;




  if (VAR_18->is_conn == ((void*)0))
   FUNC_2("NULL conn");
  else if (VAR_18->is_conn->ic_unmapped)
   VAR_19->hba_misc |= VAR_9;
  VAR_19->hba_eng_cnt = 0;
  VAR_19->max_target = 0;





  VAR_19->max_lun = 255;
  VAR_19->initiator_id = ~0;
  FUNC_10(VAR_19->sim_vid, "FreeBSD", VAR_13);
  FUNC_10(VAR_19->hba_vid, "iSCSI", VAR_6);
  FUNC_10(VAR_19->dev_name, FUNC_5(VAR_16), VAR_5);
  VAR_19->unit_number = FUNC_7(VAR_16);
  VAR_19->bus_id = FUNC_4(VAR_16);
  VAR_19->base_transfer_speed = 150000;
  VAR_19->transport = VAR_14;
  VAR_19->transport_version = 0;
  VAR_19->protocol = VAR_11;
  VAR_19->protocol_version = VAR_12;
  VAR_19->maxio = VAR_7;
  VAR_19->ccb_h.status = VAR_2;
  break;
 }
 case 132:
 {
  struct ccb_trans_settings *VAR_20;
  struct ccb_trans_settings_scsi *VAR_21;

  VAR_20 = &VAR_17->cts;
  VAR_21 = &VAR_20->proto_specific.scsi;

  VAR_20->protocol = VAR_11;
  VAR_20->protocol_version = VAR_12;
  VAR_20->transport = VAR_14;
  VAR_20->transport_version = 0;
  VAR_21->valid = VAR_4;
  VAR_21->flags = VAR_3;
  VAR_20->ccb_h.status = VAR_2;
  break;
 }
 case 133:
  FUNC_3(&VAR_17->ccg, 1);
  VAR_17->ccb_h.status = VAR_2;
  break;
 case 134:
  FUNC_8(VAR_18, VAR_17);
  return;
 case 129:
  FUNC_9(VAR_18, VAR_17);
  return;
 default:



  VAR_17->ccb_h.status = VAR_1;
  break;
 }
 FUNC_11(VAR_17);
}
