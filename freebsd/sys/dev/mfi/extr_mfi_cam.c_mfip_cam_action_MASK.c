
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccb_hdr {int func_code; void* status; struct mfip_softc* ccb_mfip_ptr; } ;
struct ccb_scsiio {int cdb_len; } ;
struct ccb_trans_settings_sas {int bitrate; int valid; } ;
struct TYPE_8__ {struct ccb_trans_settings_sas sas; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct TYPE_7__ {struct ccb_trans_settings_scsi scsi; } ;
struct TYPE_9__ {int transport_version; void* transport; void* protocol_version; void* protocol; TYPE_3__ xport_specific; TYPE_2__ proto_specific; } ;
struct TYPE_6__ {void* status; } ;
struct ccb_pathinq {int version_num; int hba_misc; int base_transfer_speed; TYPE_1__ ccb_h; void* protocol_version; void* protocol; int transport_version; void* transport; int bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_lun; int max_target; int hba_eng_cnt; int target_sprt; int hba_inquiry; } ;
union ccb {struct ccb_hdr ccb_h; struct ccb_scsiio csio; TYPE_4__ cts; struct ccb_pathinq cpi; } ;
struct mfip_softc {struct mfi_softc* mfi_sc; } ;
struct mfi_softc {int mfi_cam_ccbq; int mfi_io_lock; } ;
struct cam_sim {int dummy; } ;
struct TYPE_10__ {int tqe; } ;


 void* VAR_0 ;
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
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *,struct ccb_hdr*,int ) ;
 void* VAR_21 ;






 int FUNC_1 (struct cam_sim*) ;
 char* FUNC_2 (struct cam_sim*) ;
 struct mfip_softc* FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct mfi_softc*) ;
 int FUNC_6 (int *,int ) ;
 TYPE_5__ VAR_22 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct cam_sim *VAR_23, union ccb *VAR_24)
{
 struct mfip_softc *VAR_25 = FUNC_3(VAR_23);
 struct mfi_softc *VAR_26 = VAR_25->mfi_sc;

 FUNC_6(&VAR_26->mfi_io_lock, VAR_9);

 switch (VAR_24->ccb_h.func_code) {
 case 132:
 {
  struct ccb_pathinq *VAR_27 = &VAR_24->cpi;

  VAR_27->version_num = 1;
  VAR_27->hba_inquiry = VAR_17;
  VAR_27->target_sprt = 0;
  VAR_27->hba_misc = VAR_14 | VAR_15 | VAR_16;
  VAR_27->hba_eng_cnt = 0;
  VAR_27->max_target = VAR_13;
  VAR_27->max_lun = VAR_12;
  VAR_27->initiator_id = VAR_10;
  FUNC_7(VAR_27->sim_vid, "FreeBSD", VAR_20);
  FUNC_7(VAR_27->hba_vid, "LSI", VAR_8);
  FUNC_7(VAR_27->dev_name, FUNC_2(VAR_23), VAR_7);
  VAR_27->unit_number = FUNC_4(VAR_23);
  VAR_27->bus_id = FUNC_1(VAR_23);
  VAR_27->base_transfer_speed = 150000;
  VAR_27->transport = VAR_21;
  VAR_27->transport_version = 0;
  VAR_27->protocol = VAR_18;
  VAR_27->protocol_version = VAR_19;
  VAR_27->ccb_h.status = VAR_1;
  break;
 }
 case 131:
  VAR_24->ccb_h.status = VAR_1;
  break;
 case 130:
  VAR_24->ccb_h.status = VAR_1;
  break;
 case 133:
 {
  struct ccb_trans_settings_scsi *VAR_28 =
      &VAR_24->cts.proto_specific.scsi;
  struct ccb_trans_settings_sas *VAR_29 =
      &VAR_24->cts.xport_specific.sas;

  VAR_24->cts.protocol = VAR_18;
  VAR_24->cts.protocol_version = VAR_19;
  VAR_24->cts.transport = VAR_21;
  VAR_24->cts.transport_version = 0;

  VAR_28->valid = VAR_6;
  VAR_28->flags = VAR_5;

  VAR_29->valid &= ~VAR_4;
  VAR_29->bitrate = 150000;

  VAR_24->ccb_h.status = VAR_1;
  break;
 }
 case 128:
  VAR_24->ccb_h.status = VAR_0;
  break;
 case 129:
 {
  struct ccb_hdr *VAR_30 = &VAR_24->ccb_h;
  struct ccb_scsiio *VAR_31 = &VAR_24->csio;

  VAR_30->status = VAR_2;
  if (VAR_31->cdb_len > VAR_11) {
   VAR_30->status = VAR_3;
   break;
  }
  VAR_30->ccb_mfip_ptr = VAR_25;
  FUNC_0(&VAR_26->mfi_cam_ccbq, VAR_30, VAR_22.tqe);
  FUNC_5(VAR_26);
  return;
 }
 default:
  VAR_24->ccb_h.status = VAR_3;
  break;
 }

 FUNC_8(VAR_24);
 return;
}
