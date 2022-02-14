
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


struct TYPE_8__ {scalar_t__* cdb_bytes; scalar_t__* cdb_ptr; } ;
struct TYPE_9__ {TYPE_1__ cdb_io; } ;
struct TYPE_11__ {int func_code; int flags; void* status; } ;
struct ccb_trans_settings_spi {int flags; int valid; } ;
struct TYPE_13__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings_scsi {int flags; int valid; } ;
struct TYPE_12__ {struct ccb_trans_settings_scsi scsi; } ;
struct TYPE_14__ {int flags; int valid; int transport_version; void* transport; void* protocol_version; void* protocol; TYPE_6__ xport_specific; TYPE_5__ proto_specific; } ;
struct ccb_pathinq {int version_num; int max_lun; int maxio; int base_transfer_speed; int unit_number; int dev_name; int hba_vid; int sim_vid; void* protocol_version; int transport_version; void* transport; void* protocol; int hba_misc; int hba_inquiry; int bus_id; int initiator_id; int max_target; int hba_eng_cnt; int target_sprt; } ;
struct ccb_calc_geometry {long volume_size; long block_size; int heads; int secs_per_track; int cylinders; } ;
union ccb {TYPE_2__ csio; TYPE_4__ ccb_h; TYPE_7__ cts; struct ccb_pathinq cpi; struct ccb_calc_geometry ccg; } ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct cam_sim {int dummy; } ;
struct aac_softc {int aac_max_sectors; int flags; int aac_dev; int aac_io_lock; } ;
struct aac_cam {TYPE_3__* inf; } ;
struct TYPE_10__ {scalar_t__ BusType; int BusNumber; int InitiatorBusId; int TargetsPerBus; struct aac_softc* aac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 void* VAR_32 ;
 void* FUNC_0 (struct cam_sim*,union ccb*) ;
 void* FUNC_1 (struct cam_sim*,union ccb*) ;
 void* FUNC_2 (struct cam_sim*,union ccb*) ;
 int FUNC_3 (struct cam_sim*,union ccb*,scalar_t__*) ;
 int FUNC_4 (struct cam_sim*,union ccb*,scalar_t__*) ;
 int FUNC_5 (struct cam_sim*,union ccb*) ;
 char* FUNC_6 (struct cam_sim*) ;
 scalar_t__ FUNC_7 (struct cam_sim*) ;
 int FUNC_8 (struct cam_sim*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (struct aac_softc*,char*,char*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (union ccb*) ;

__attribute__((used)) static void
FUNC_14(struct cam_sim *VAR_33, union ccb *VAR_34)
{
 struct aac_cam *VAR_35;
 struct aac_softc *VAR_36;

 VAR_35 = (struct aac_cam *)FUNC_7(VAR_33);
 VAR_36 = VAR_35->inf->aac_sc;
 FUNC_10(VAR_36, VAR_15, "");
 FUNC_11(&VAR_36->aac_io_lock, VAR_17);



 switch(VAR_34->ccb_h.func_code) {
 case 130:

  break;
 case 135:
 {
  struct ccb_calc_geometry *VAR_37;
  u_int32_t VAR_38;
  u_int32_t VAR_39;

  VAR_37 = &VAR_34->ccg;
  VAR_38 = VAR_37->volume_size /
      ((1024L * 1024L) / VAR_37->block_size);
  if (VAR_38 >= (2 * 1024)) {
   VAR_37->heads = 255;
   VAR_37->secs_per_track = 63;
  } else if (VAR_38 >= (1 * 1024)) {
   VAR_37->heads = 128;
   VAR_37->secs_per_track = 32;
  } else {
   VAR_37->heads = 64;
   VAR_37->secs_per_track = 32;
  }
  VAR_39 = VAR_37->heads * VAR_37->secs_per_track;
  VAR_37->cylinders = VAR_37->volume_size / VAR_39;

  VAR_34->ccb_h.status = VAR_4;
  FUNC_13(VAR_34);
  return;
 }
 case 133:
 {
  struct ccb_pathinq *VAR_40 = &VAR_34->cpi;

  VAR_40->version_num = 1;
  VAR_40->target_sprt = 0;
  VAR_40->hba_eng_cnt = 0;
  VAR_40->max_target = VAR_35->inf->TargetsPerBus - 1;
  VAR_40->max_lun = 7;
  VAR_40->initiator_id = VAR_35->inf->InitiatorBusId;
  VAR_40->bus_id = VAR_35->inf->BusNumber;
  VAR_40->hba_misc = VAR_18;
  VAR_40->hba_inquiry = VAR_20;
  VAR_40->base_transfer_speed = 300000;







  FUNC_12(VAR_40->sim_vid, "FreeBSD", VAR_27);
  FUNC_12(VAR_40->hba_vid, "PMC-Sierra", VAR_16);
  FUNC_12(VAR_40->dev_name, FUNC_6(VAR_33), VAR_14);
  VAR_40->unit_number = FUNC_8(VAR_33);
  VAR_34->ccb_h.status = VAR_4;
  FUNC_13(VAR_34);
  return;
 }
 case 134:
 {
  VAR_34->cts.flags = ~(VAR_5 | VAR_7);
  VAR_34->cts.valid = VAR_6 | VAR_8;

  VAR_34->ccb_h.status = VAR_4;
  FUNC_13(VAR_34);
  return;
 }
 case 129:
  VAR_34->ccb_h.status = VAR_2;
  FUNC_13(VAR_34);
  return;
 case 132:
  if (!(VAR_36->flags & VAR_0) &&
   VAR_35->inf->BusType != VAR_9) {
   VAR_34->ccb_h.status = FUNC_1(VAR_33, VAR_34);
  } else {
   VAR_34->ccb_h.status = VAR_4;
  }
  FUNC_13(VAR_34);
  return;
 case 131:
  VAR_34->ccb_h.status = VAR_4;
  FUNC_13(VAR_34);
  return;
 case 136:
  VAR_34->ccb_h.status = FUNC_0(VAR_33, VAR_34);
  FUNC_13(VAR_34);
  return;
 case 128:
  VAR_34->ccb_h.status = FUNC_2(VAR_33, VAR_34);
  FUNC_13(VAR_34);
  return;
 default:
  FUNC_9(VAR_36->aac_dev, "Unsupported command 0x%x\n",
      VAR_34->ccb_h.func_code);
  VAR_34->ccb_h.status = VAR_3;
  FUNC_13(VAR_34);
  return;
 }


 if (VAR_35->inf->BusType == VAR_9) {
  u_int8_t *VAR_41;

  if (VAR_34->ccb_h.flags & VAR_1)
   VAR_41 = VAR_34->csio.cdb_io.cdb_ptr;
  else
   VAR_41 = &VAR_34->csio.cdb_io.cdb_bytes[0];

  if (*VAR_41==VAR_25 || *VAR_41==VAR_31 || *VAR_41==VAR_22 ||
   *VAR_41==VAR_28 || *VAR_41==VAR_23 || *VAR_41==VAR_29 ||
   *VAR_41==VAR_24 || *VAR_41==VAR_30)
   FUNC_3(VAR_33, VAR_34, VAR_41);
  else
   FUNC_4(VAR_33, VAR_34, VAR_41);
 } else {
  FUNC_5(VAR_33, VAR_34);
 }
}
