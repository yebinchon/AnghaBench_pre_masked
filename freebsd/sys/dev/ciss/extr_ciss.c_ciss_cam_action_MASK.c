
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int func_code; void* status; int target_lun; int target_id; } ;
struct TYPE_14__ {int target_id; void* status; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct TYPE_13__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings_spi {int flags; int valid; } ;
struct TYPE_12__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings {int transport_version; TYPE_7__ ccb_h; void* transport; void* protocol_version; void* protocol; TYPE_6__ proto_specific; TYPE_5__ xport_specific; } ;
struct ccb_pathinq {int version_num; int base_transfer_speed; int transport_version; int maxio; void* protocol_version; void* protocol; void* transport; void* bus_id; int unit_number; int dev_name; int hba_vid; int sim_vid; int initiator_id; int max_lun; int max_target; int hba_misc; int target_sprt; int hba_inquiry; } ;
struct ccb_calc_geometry {int heads; int secs_per_track; int cylinders; int volume_size; } ;
union ccb {TYPE_4__ ccb_h; struct ccb_trans_settings cts; struct ccb_pathinq cpi; struct ccb_calc_geometry ccg; int csio; } ;
typedef int u_int32_t ;
struct ciss_softc {TYPE_3__* ciss_cfg; struct ciss_ldrive** ciss_logical; } ;
struct TYPE_9__ {int fault_tolerance; int heads; int sectors; int cylinders; } ;
struct ciss_ldrive {TYPE_2__ cl_geometry; } ;
struct TYPE_8__ {int target_id; } ;
struct ccb_scsiio {TYPE_1__ ccb_h; } ;
struct cam_sim {int dummy; } ;
struct TYPE_10__ {int max_sg_length; int max_logical_supported; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;




 void* FUNC_1 (struct cam_sim*) ;
 char* FUNC_2 (struct cam_sim*) ;
 struct ciss_softc* FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (struct cam_sim*) ;
 int FUNC_5 (struct cam_sim*,struct ccb_scsiio*) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (union ccb*) ;

__attribute__((used)) static void
FUNC_12(struct cam_sim *VAR_15, union ccb *VAR_16)
{
    struct ciss_softc *VAR_17;
    struct ccb_scsiio *VAR_18;
    int VAR_19, VAR_20;
    int VAR_21;

    VAR_17 = FUNC_3(VAR_15);
    VAR_19 = FUNC_1(VAR_15);
    VAR_18 = (struct ccb_scsiio *)&VAR_16->csio;
    VAR_20 = VAR_18->ccb_h.target_id;
    VAR_21 = FUNC_0(VAR_19);

    switch (VAR_16->ccb_h.func_code) {


    case 128:
 if (!FUNC_5(VAR_15, VAR_18))
     return;
 break;


    case 131:
    {
 struct ccb_calc_geometry *VAR_22 = &VAR_16->ccg;
 struct ciss_ldrive *VAR_23;

 FUNC_6(1, "XPT_CALC_GEOMETRY %d:%d:%d", FUNC_1(VAR_15), VAR_16->ccb_h.target_id, VAR_16->ccb_h.target_lun);

 VAR_23 = ((void*)0);
 if (!VAR_21)
     VAR_23 = &VAR_17->ciss_logical[VAR_19][VAR_20];





 if (VAR_21 || VAR_23->cl_geometry.fault_tolerance == 0xFF) {
     u_int32_t VAR_24;

     VAR_22->heads = 255;
     VAR_22->secs_per_track = 32;
     VAR_24 = VAR_22->heads * VAR_22->secs_per_track;
     VAR_22->cylinders = VAR_22->volume_size / VAR_24;
 } else {
     VAR_22->heads = VAR_23->cl_geometry.heads;
     VAR_22->secs_per_track = VAR_23->cl_geometry.sectors;
     VAR_22->cylinders = FUNC_9(VAR_23->cl_geometry.cylinders);
 }
 VAR_16->ccb_h.status = VAR_0;
        break;
    }


    case 129:
    {
 struct ccb_pathinq *VAR_25 = &VAR_16->cpi;
 int VAR_26;

 FUNC_6(1, "XPT_PATH_INQ %d:%d:%d", FUNC_1(VAR_15), VAR_16->ccb_h.target_id, VAR_16->ccb_h.target_lun);

 VAR_25->version_num = 1;
 VAR_25->hba_inquiry = VAR_10;
 VAR_25->target_sprt = 0;
 VAR_25->hba_misc = 0;
 VAR_25->max_target = VAR_17->ciss_cfg->max_logical_supported;
 VAR_25->max_lun = 0;
 VAR_25->initiator_id = VAR_17->ciss_cfg->max_logical_supported;
 FUNC_10(VAR_25->sim_vid, "FreeBSD", VAR_13);
 FUNC_10(VAR_25->hba_vid, "CISS", VAR_8);
 FUNC_10(VAR_25->dev_name, FUNC_2(VAR_15), VAR_7);
 VAR_25->unit_number = FUNC_4(VAR_15);
 VAR_25->bus_id = FUNC_1(VAR_15);
 VAR_25->base_transfer_speed = 132 * 1024;
 VAR_25->transport = VAR_14;
 VAR_25->transport_version = 2;
 VAR_25->protocol = VAR_11;
 VAR_25->protocol_version = VAR_12;
 if (VAR_17->ciss_cfg->max_sg_length == 0) {
  VAR_26 = 17;
 } else {
  VAR_26 = VAR_17->ciss_cfg->max_sg_length - 1;
  VAR_26 = (1 << (FUNC_7(VAR_26) - 1)) + 1;
 }
 VAR_25->maxio = (FUNC_8(VAR_2, VAR_26) - 1) * VAR_9;
 VAR_16->ccb_h.status = VAR_0;
 break;
    }

    case 130:
    {
 struct ccb_trans_settings *VAR_27 = &VAR_16->cts;
 int VAR_28, VAR_29;
 struct ccb_trans_settings_spi *VAR_30 = &VAR_27->xport_specific.spi;
 struct ccb_trans_settings_scsi *VAR_31 = &VAR_27->proto_specific.scsi;

 VAR_28 = FUNC_1(VAR_15);
 VAR_29 = VAR_27->ccb_h.target_id;

 FUNC_6(1, "XPT_GET_TRAN_SETTINGS %d:%d", VAR_28, VAR_29);

 VAR_27->protocol = VAR_11;
 VAR_27->protocol_version = VAR_12;
 VAR_27->transport = VAR_14;
 VAR_27->transport_version = 2;

 VAR_30->valid = VAR_6;
 VAR_30->flags = VAR_5;

 VAR_31->valid = VAR_4;
 VAR_31->flags = VAR_3;

 VAR_27->ccb_h.status = VAR_0;
 break;
    }

    default:
 FUNC_6(1, "unspported func_code = 0x%x", VAR_16->ccb_h.func_code);
 VAR_16->ccb_h.status = VAR_1;
 break;
    }

    FUNC_11(VAR_16);
}
