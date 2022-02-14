
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


struct TYPE_8__ {int func_code; void* status; int target_lun; int target_id; } ;
struct TYPE_11__ {int target_id; void* status; } ;
struct ccb_trans_settings_spi {int valid; int sync_period; int flags; int bus_width; } ;
struct TYPE_10__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct TYPE_9__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {int transport_version; TYPE_5__ ccb_h; void* transport; void* protocol_version; void* protocol; TYPE_4__ xport_specific; TYPE_3__ proto_specific; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; int transport_version; void* protocol_version; void* protocol; void* transport; void* bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_lun; int max_target; int hba_misc; int target_sprt; int hba_inquiry; } ;
struct ccb_calc_geometry {int heads; int secs_per_track; int cylinders; int volume_size; } ;
union ccb {TYPE_2__ ccb_h; struct ccb_trans_settings cts; struct ccb_pathinq cpi; struct ccb_calc_geometry ccg; int csio; } ;
typedef int u_int32_t ;
struct mly_softc {TYPE_6__** mly_btl; TYPE_1__* mly_controllerparam; } ;
struct ccb_scsiio {int dummy; } ;
struct cam_sim {int dummy; } ;
struct TYPE_12__ {int mb_flags; int mb_speed; int mb_width; } ;
struct TYPE_7__ {int initiator_id; int bios_geometry; } ;


 void* VAR_0 ;
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
 int FUNC_0 (struct mly_softc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;




 void* FUNC_1 (struct cam_sim*) ;
 char* FUNC_2 (struct cam_sim*) ;
 struct mly_softc* FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct cam_sim*,struct ccb_scsiio*) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (union ccb*) ;

__attribute__((used)) static void
FUNC_10(struct cam_sim *VAR_24, union ccb *VAR_25)
{
    struct mly_softc *VAR_26 = FUNC_3(VAR_24);

    FUNC_6(2);
    FUNC_0(VAR_26);

    switch (VAR_25->ccb_h.func_code) {


    case 128:
 if (!FUNC_7(VAR_24, (struct ccb_scsiio *)&VAR_25->csio))
     return;
 break;


    case 131:
    {
 struct ccb_calc_geometry *VAR_27 = &VAR_25->ccg;
        u_int32_t VAR_28;

 FUNC_5(2, "XPT_CALC_GEOMETRY %d:%d:%d", FUNC_1(VAR_24), VAR_25->ccb_h.target_id, VAR_25->ccb_h.target_lun);

 if (VAR_26->mly_controllerparam->bios_geometry == VAR_11) {
     VAR_27->heads = 255;
            VAR_27->secs_per_track = 63;
 } else {
     VAR_27->heads = 128;
            VAR_27->secs_per_track = 32;
 }
 VAR_28 = VAR_27->heads * VAR_27->secs_per_track;
        VAR_27->cylinders = VAR_27->volume_size / VAR_28;
        VAR_25->ccb_h.status = VAR_0;
        break;
    }


    case 129:
    {
 struct ccb_pathinq *VAR_29 = &VAR_25->cpi;

 FUNC_5(2, "XPT_PATH_INQ %d:%d:%d", FUNC_1(VAR_24), VAR_25->ccb_h.target_id, VAR_25->ccb_h.target_lun);

 VAR_29->version_num = 1;
 VAR_29->hba_inquiry = VAR_19;
 VAR_29->target_sprt = 0;
 VAR_29->hba_misc = 0;
 VAR_29->max_target = VAR_15 - 1;
 VAR_29->max_lun = VAR_14 - 1;
 VAR_29->initiator_id = VAR_26->mly_controllerparam->initiator_id;
 FUNC_8(VAR_29->sim_vid, "FreeBSD", VAR_22);
 FUNC_8(VAR_29->hba_vid, "Mylex", VAR_10);
 FUNC_8(VAR_29->dev_name, FUNC_2(VAR_24), VAR_9);
 VAR_29->unit_number = FUNC_4(VAR_24);
 VAR_29->bus_id = FUNC_1(VAR_24);
 VAR_29->base_transfer_speed = 132 * 1024;
 VAR_29->transport = VAR_23;
 VAR_29->transport_version = 2;
 VAR_29->protocol = VAR_20;
 VAR_29->protocol_version = VAR_21;
 VAR_25->ccb_h.status = VAR_0;
 break;
    }

    case 130:
    {
 struct ccb_trans_settings *VAR_30 = &VAR_25->cts;
 int VAR_31, VAR_32;
 struct ccb_trans_settings_scsi *VAR_33 = &VAR_30->proto_specific.scsi;
 struct ccb_trans_settings_spi *VAR_34 = &VAR_30->xport_specific.spi;

 VAR_30->protocol = VAR_20;
 VAR_30->protocol_version = VAR_21;
 VAR_30->transport = VAR_23;
 VAR_30->transport_version = 2;

 VAR_33->flags = 0;
 VAR_33->valid = 0;
 VAR_34->flags = 0;
 VAR_34->valid = 0;

 VAR_31 = FUNC_1(VAR_24);
 VAR_32 = VAR_30->ccb_h.target_id;
 FUNC_5(2, "XPT_GET_TRAN_SETTINGS %d:%d", VAR_31, VAR_32);

 if (VAR_26->mly_btl[VAR_31][VAR_32].mb_flags & VAR_12) {


 } else if (VAR_26->mly_btl[VAR_31][VAR_32].mb_flags & VAR_13) {

     VAR_33->flags |= VAR_3;
     VAR_33->valid |= VAR_4;


     if (VAR_26->mly_btl[VAR_31][VAR_32].mb_speed == 0) {
  VAR_34->sync_period = 1000000 / 5;
     } else {
  VAR_34->sync_period = 1000000 / VAR_26->mly_btl[VAR_31][VAR_32].mb_speed;
     }


     switch (VAR_26->mly_btl[VAR_31][VAR_32].mb_width) {
     case 32:
  VAR_34->bus_width = VAR_17;
  break;
     case 16:
  VAR_34->bus_width = VAR_16;
  break;
     case 8:
     default:
  VAR_34->bus_width = VAR_18;
  break;
     }
     VAR_34->valid |= VAR_8 | VAR_6;


 } else {
     VAR_30->ccb_h.status = VAR_1;
     break;
 }


 VAR_34->flags |= VAR_5;
 VAR_34->valid |= VAR_7;

 VAR_30->ccb_h.status = VAR_0;
 break;
    }

    default:
 FUNC_5(2, "unspported func_code = 0x%x", VAR_25->ccb_h.func_code);
 VAR_25->ccb_h.status = VAR_2;
 break;
    }

    FUNC_9(VAR_25);
}
