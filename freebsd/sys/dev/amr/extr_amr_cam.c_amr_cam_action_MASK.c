
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ccb_hdr {int func_code; int flags; void* status; } ;
struct ccb_trans_settings_spi {int sync_period; int sync_offset; int valid; int bus_width; int flags; } ;
struct TYPE_12__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings_scsi {int valid; } ;
struct TYPE_11__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {int transport_version; int type; void* transport; void* protocol_version; void* protocol; TYPE_6__ xport_specific; TYPE_5__ proto_specific; } ;
struct TYPE_10__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int hba_misc; int initiator_id; int base_transfer_speed; int transport_version; TYPE_4__ ccb_h; void* protocol_version; void* protocol; void* transport; void* bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int max_lun; int max_target; int hba_eng_cnt; int target_sprt; } ;
struct TYPE_8__ {TYPE_1__* entries; } ;
struct TYPE_9__ {TYPE_2__ sim_priv; int target_lun; } ;
struct ccb_scsiio {TYPE_3__ ccb_h; int cdb_len; } ;
union ccb {struct ccb_hdr ccb_h; struct ccb_trans_settings cts; struct ccb_pathinq cpi; int ccg; struct ccb_scsiio csio; } ;
struct cam_sim {int dummy; } ;
struct amr_softc {int amr_list_lock; int support_ext_cdb; } ;
struct TYPE_7__ {void* field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
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
 void* VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 void* VAR_33 ;







 int FUNC_0 (struct amr_softc*,union ccb*) ;
 int FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (struct cam_sim*) ;
 char* FUNC_4 (struct cam_sim*) ;
 struct amr_softc* FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (struct cam_sim*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (union ccb*) ;

__attribute__((used)) static void
FUNC_11(struct cam_sim *VAR_34, union ccb *VAR_35)
{
 struct amr_softc *VAR_36 = FUNC_5(VAR_34);

 switch(VAR_35->ccb_h.func_code) {




 case 129:
 {
  struct ccb_hdr *VAR_37 = &VAR_35->ccb_h;
  struct ccb_scsiio *VAR_38 = &VAR_35->csio;


  VAR_37->status = VAR_12;


  if (VAR_38->cdb_len > VAR_1)
   VAR_37->status = VAR_13;

  if ((VAR_38->cdb_len > VAR_0) &&
      (VAR_36->support_ext_cdb == 0))
   VAR_37->status = VAR_13;


  if ((VAR_37->flags & VAR_4) &&
      (VAR_37->flags & VAR_3))
   VAR_37->status = VAR_13;




  if ((VAR_37->flags & VAR_8) != VAR_9) {
   if ((VAR_37->flags & VAR_5) != VAR_6)

    VAR_37->status = VAR_13;
  }







  if (VAR_38->ccb_h.target_lun != 0)
   VAR_37->status = VAR_7;


  if (VAR_37->status == VAR_12) {


   VAR_38->ccb_h.sim_priv.entries[0].field= FUNC_3(VAR_34);

   FUNC_0(VAR_36, VAR_35);
   FUNC_1(VAR_36);
   return;
  }
  break;
 }

 case 134:
 {
  FUNC_2(&VAR_35->ccg, 1);
  break;
 }




 case 132:
 {
  struct ccb_pathinq *VAR_39 = & VAR_35->cpi;

  FUNC_7(3, "XPT_PATH_INQ");
  VAR_39->version_num = 1;
  VAR_39->hba_inquiry = VAR_27|VAR_28|VAR_29;
  VAR_39->target_sprt = 0;
  VAR_39->hba_misc = VAR_25|VAR_26;
  VAR_39->hba_eng_cnt = 0;
  VAR_39->max_target = VAR_2;
  VAR_39->max_lun = 0 ;
  VAR_39->initiator_id = 7;
  FUNC_9(VAR_39->sim_vid, "FreeBSD", VAR_32);
  FUNC_9(VAR_39->hba_vid, "LSI", VAR_22);
  FUNC_9(VAR_39->dev_name, FUNC_4(VAR_34), VAR_21);
  VAR_39->unit_number = FUNC_6(VAR_34);
  VAR_39->bus_id = FUNC_3(VAR_34);
  VAR_39->base_transfer_speed = 132 * 1024;
  VAR_39->transport = VAR_33;
  VAR_39->transport_version = 2;
  VAR_39->protocol = VAR_30;
  VAR_39->protocol_version = VAR_31;
  VAR_39->ccb_h.status = VAR_11;

  break;
 }

 case 131:
 {
  struct ccb_pathinq *VAR_40 = & VAR_35->cpi;

  FUNC_7(1, "XPT_RESET_BUS");
  VAR_40->ccb_h.status = VAR_11;
  break;
 }

 case 130:
 {
  FUNC_7(1, "XPT_RESET_DEV");
  VAR_35->ccb_h.status = VAR_11;
  break;
 }

 case 133:
 {
  struct ccb_trans_settings *VAR_41 = &(VAR_35->cts);

  FUNC_7(3, "XPT_GET_TRAN_SETTINGS");

  struct ccb_trans_settings_scsi *VAR_42;
  struct ccb_trans_settings_spi *VAR_43;

  VAR_42 = &VAR_41->proto_specific.scsi;
  VAR_43 = &VAR_41->xport_specific.spi;

  VAR_41->protocol = VAR_30;
  VAR_41->protocol_version = VAR_31;
  VAR_41->transport = VAR_33;
  VAR_41->transport_version = 2;

  if (VAR_41->type == VAR_20) {
   VAR_35->ccb_h.status = VAR_10;
   break;
  }

  VAR_43->flags = VAR_15;
  VAR_43->bus_width = VAR_24;
  VAR_43->sync_period = 6;
  VAR_43->sync_offset = 31;

  VAR_43->valid = VAR_19
   | VAR_18
   | VAR_16
   | VAR_17;
  VAR_42->valid = VAR_14;
  VAR_35->ccb_h.status = VAR_11;
  break;
 }

 case 128:
  FUNC_7(3, "XPT_SET_TRAN_SETTINGS");
  VAR_35->ccb_h.status = VAR_10;
  break;





 default:

  VAR_35->ccb_h.status = VAR_13;
  break;
 }

 FUNC_8(&VAR_36->amr_list_lock, VAR_23);
 FUNC_10(VAR_35);
}
