
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_18__ {TYPE_4__* entries; } ;
struct TYPE_12__ {int func_code; int flags; int timeout; int target_lun; int target_id; void* status; TYPE_5__ sim_priv; } ;
struct TYPE_19__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; scalar_t__ data_ptr; TYPE_6__ cdb_io; int cdb_len; } ;
struct ccb_trans_settings_spi {int valid; } ;
struct TYPE_15__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings_scsi {int valid; } ;
struct TYPE_14__ {struct ccb_trans_settings_scsi scsi; } ;
struct TYPE_16__ {int transport_version; void* transport; void* protocol_version; void* protocol; TYPE_2__ xport_specific; TYPE_1__ proto_specific; } ;
struct ccb_pathinq {int version_num; int hba_misc; int max_lun; int base_transfer_speed; int transport_version; void* protocol_version; void* protocol; void* transport; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int initiator_id; int max_target; int hba_eng_cnt; int target_sprt; int hba_inquiry; } ;
struct ccb_calc_geometry {long volume_size; long block_size; int heads; int secs_per_track; int cylinders; } ;
union ccb {TYPE_10__ ccb_h; struct ccb_scsiio csio; TYPE_3__ cts; struct ccb_pathinq cpi; struct ccb_calc_geometry ccg; } ;
typedef int uint32_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct cam_sim {int dummy; } ;
struct TYPE_21__ {int SgCount; TYPE_7__* SgEntry; } ;
struct aac_srb {scalar_t__ retry_limit; int timeout; int lun; int target; int bus; int function; scalar_t__ data_len; TYPE_8__ sg_map; int cdb_len; int * cdb; int flags; } ;
struct aac_softc {int flags; int aac_dev; } ;
struct aac_fib_header {int dummy; } ;
struct TYPE_13__ {int XferState; int Size; void* Command; } ;
struct aac_fib {TYPE_11__ Header; int * data; } ;
struct aac_event {int ev_type; union ccb* ev_arg; int ev_callback; } ;
struct aac_command {int cm_flags; int cm_sc; int cm_timestamp; union ccb* cm_private; int cm_complete; TYPE_8__* cm_sgtable; scalar_t__ cm_datalen; void* cm_data; struct aac_fib* cm_fib; } ;
struct aac_cam {TYPE_9__* inf; } ;
struct TYPE_22__ {int BusNumber; int InitiatorBusId; int TargetsPerBus; struct aac_softc* aac_sc; } ;
struct TYPE_20__ {scalar_t__ SgByteCount; int SgAddress; } ;
struct TYPE_17__ {struct aac_cam* ptr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int VAR_18 ;


 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 char* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 int VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 int FUNC_0 (struct aac_softc*,struct aac_event*) ;
 scalar_t__ FUNC_1 (struct aac_softc*,struct aac_command**) ;
 void* FUNC_2 (struct cam_sim*,union ccb*) ;
 int VAR_41 ;
 int VAR_42 ;
 void* FUNC_3 (struct cam_sim*,union ccb*) ;
 void* FUNC_4 (struct cam_sim*,union ccb*) ;
 int FUNC_5 (struct aac_command*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ) ;
 char* FUNC_8 (struct cam_sim*) ;
 scalar_t__ FUNC_9 (struct cam_sim*) ;
 int FUNC_10 (struct cam_sim*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct aac_softc*,char*,char*) ;
 struct aac_event* FUNC_13 (int,int ,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,int ) ;
 int VAR_43 ;
 int FUNC_16 (union ccb*) ;
 int FUNC_17 (struct cam_sim*,int) ;

__attribute__((used)) static void
FUNC_18(struct cam_sim *VAR_44, union ccb *VAR_45)
{
 struct aac_cam *VAR_46;
 struct aac_softc *VAR_47;
 struct aac_srb *VAR_48;
 struct aac_fib *VAR_49;
 struct aac_command *VAR_50;

 VAR_46 = (struct aac_cam *)FUNC_9(VAR_44);
 VAR_47 = VAR_46->inf->aac_sc;
 FUNC_12(VAR_47, VAR_27, "");



 switch(VAR_45->ccb_h.func_code) {
 case 130:
 case 131:

  break;
 case 135:
 {
  struct ccb_calc_geometry *VAR_51;
  u_int32_t VAR_52;
  u_int32_t VAR_53;

  VAR_51 = &VAR_45->ccg;
  VAR_52 = VAR_51->volume_size /
      ((1024L * 1024L) / VAR_51->block_size);
  if (VAR_52 >= (2 * 1024)) {
   VAR_51->heads = 255;
   VAR_51->secs_per_track = 63;
  } else if (VAR_52 >= (1 * 1024)) {
   VAR_51->heads = 128;
   VAR_51->secs_per_track = 32;
  } else {
   VAR_51->heads = 64;
   VAR_51->secs_per_track = 32;
  }
  VAR_53 = VAR_51->heads * VAR_51->secs_per_track;
  VAR_51->cylinders = VAR_51->volume_size / VAR_53;

  VAR_45->ccb_h.status = VAR_22;
  FUNC_16(VAR_45);
  return;
 }
 case 133:
 {
  struct ccb_pathinq *VAR_54 = &VAR_45->cpi;

  VAR_54->version_num = 1;
  VAR_54->hba_inquiry = VAR_34;
  VAR_54->target_sprt = 0;





  VAR_54->hba_misc = VAR_32 | VAR_33;
  VAR_54->hba_eng_cnt = 0;
  VAR_54->max_target = VAR_46->inf->TargetsPerBus;
  VAR_54->max_lun = 8;
  VAR_54->initiator_id = VAR_46->inf->InitiatorBusId;
  VAR_54->bus_id = VAR_46->inf->BusNumber;
  VAR_54->base_transfer_speed = 3300;
  FUNC_15(VAR_54->sim_vid, "FreeBSD", VAR_37);
  FUNC_15(VAR_54->hba_vid, "Adaptec", VAR_28);
  FUNC_15(VAR_54->dev_name, FUNC_8(VAR_44), VAR_26);
  VAR_54->unit_number = FUNC_10(VAR_44);
  VAR_54->transport = VAR_40;
  VAR_54->transport_version = 2;
  VAR_54->protocol = VAR_35;
  VAR_54->protocol_version = VAR_36;
  VAR_45->ccb_h.status = VAR_22;
  FUNC_16(VAR_45);
  return;
 }
 case 134:
 {
  struct ccb_trans_settings_scsi *VAR_55 =
   &VAR_45->cts.proto_specific.scsi;
  struct ccb_trans_settings_spi *VAR_56 =
   &VAR_45->cts.xport_specific.spi;
  VAR_45->cts.protocol = VAR_35;
  VAR_45->cts.protocol_version = VAR_36;
  VAR_45->cts.transport = VAR_40;
  VAR_45->cts.transport_version = 2;
  if (VAR_45->ccb_h.target_lun != VAR_20) {
   VAR_55->valid = VAR_24;
   VAR_56->valid |= VAR_25;
  } else {
   VAR_55->valid = 0;
  }
  VAR_45->ccb_h.status = VAR_22;
  FUNC_16(VAR_45);
  return;
 }
 case 129:
  VAR_45->ccb_h.status = VAR_19;
  FUNC_16(VAR_45);
  return;
 case 132:
  if (!(VAR_47->flags & VAR_8)) {
   VAR_45->ccb_h.status = FUNC_3(VAR_44, VAR_45);
  } else {
   VAR_45->ccb_h.status = VAR_22;
  }
  FUNC_16(VAR_45);
  return;
 case 136:
  VAR_45->ccb_h.status = FUNC_2(VAR_44, VAR_45);
  FUNC_16(VAR_45);
  return;
 case 128:
  VAR_45->ccb_h.status = FUNC_4(VAR_44, VAR_45);
  FUNC_16(VAR_45);
  return;
 default:
  FUNC_11(VAR_47->aac_dev, "Unsupported command 0x%x\n",
      VAR_45->ccb_h.func_code);
  VAR_45->ccb_h.status = VAR_21;
  FUNC_16(VAR_45);
  return;
 }



 if (FUNC_1(VAR_47, &VAR_50)) {
  struct aac_event *VAR_57;

  FUNC_17(VAR_44, 1);
  VAR_45->ccb_h.status = VAR_23;
  VAR_45->ccb_h.sim_priv.entries[0].ptr = VAR_46;
  VAR_57 = FUNC_13(sizeof(struct aac_event), VAR_29,
      VAR_30 | VAR_31);
  if (VAR_57 == ((void*)0)) {
   FUNC_11(VAR_47->aac_dev,
       "Warning, out of memory for event\n");
   return;
  }
  VAR_57->ev_callback = VAR_42;
  VAR_57->ev_arg = VAR_45;
  VAR_57->ev_type = VAR_2;
  FUNC_0(VAR_47, VAR_57);
  return;
 }

 VAR_49 = VAR_50->cm_fib;
 VAR_48 = (struct aac_srb *)&VAR_49->data[0];
 VAR_50->cm_datalen = 0;

 switch (VAR_45->ccb_h.flags & VAR_18) {
 case 139:
  VAR_48->flags = VAR_10;
  VAR_50->cm_flags |= VAR_0;
  break;
 case 137:
  VAR_48->flags = VAR_11;
  VAR_50->cm_flags |= VAR_1;
  break;
 case 138:
  VAR_48->flags = VAR_12;
  break;
 default:
  VAR_48->flags = VAR_13;
  VAR_50->cm_flags |= VAR_0 | VAR_1;
  break;
 }

 switch(VAR_45->ccb_h.func_code) {
 case 130:
 {
  struct ccb_scsiio *VAR_58 = &VAR_45->csio;

  VAR_48->function = VAR_14;





  VAR_48->cdb_len = VAR_58->cdb_len;
  if (VAR_45->ccb_h.flags & VAR_16)
   FUNC_7(VAR_58->cdb_io.cdb_ptr, (u_int8_t *)&VAR_48->cdb[0],
       VAR_48->cdb_len);
  else
   FUNC_7(VAR_58->cdb_io.cdb_bytes, (u_int8_t *)&VAR_48->cdb[0],
       VAR_48->cdb_len);


  VAR_49->Header.Command = (VAR_47->flags & VAR_9) ?
   VAR_39 : VAR_38;


  if ((VAR_45->ccb_h.flags & VAR_18) != 138) {
   switch ((VAR_45->ccb_h.flags & VAR_17)) {
   case 140:
    VAR_48->data_len = VAR_58->dxfer_len;




    VAR_50->cm_data = (void *)VAR_58->data_ptr;
    VAR_50->cm_datalen = VAR_58->dxfer_len;
    VAR_50->cm_sgtable = &VAR_48->sg_map;
    break;
   case 141:

    VAR_49->Header.Command = VAR_38;
    VAR_48->sg_map.SgCount = 1;
    VAR_48->sg_map.SgEntry[0].SgAddress =
        (uint32_t)(uintptr_t)VAR_58->data_ptr;
    VAR_48->sg_map.SgEntry[0].SgByteCount =
        VAR_58->dxfer_len;
    VAR_48->data_len = VAR_58->dxfer_len;
    break;
   default:

    FUNC_14("aac_cam: multiple s/g elements");
   }
  } else {
   VAR_48->sg_map.SgCount = 0;
   VAR_48->sg_map.SgEntry[0].SgByteCount = 0;
   VAR_48->data_len = 0;
  }

  break;
 }
 case 131:
  if (!(VAR_47->flags & VAR_8)) {
   VAR_48->function = VAR_15;
   break;
  } else {
   VAR_45->ccb_h.status = VAR_22;
   FUNC_16(VAR_45);
   return;
  }
 default:
  break;
 }

 VAR_48->bus = VAR_46->inf->BusNumber;
 VAR_48->target = VAR_45->ccb_h.target_id;
 VAR_48->lun = VAR_45->ccb_h.target_lun;
 VAR_48->timeout = VAR_45->ccb_h.timeout;
 VAR_48->retry_limit = 0;

 VAR_50->cm_complete = VAR_41;
 VAR_50->cm_private = VAR_45;
 VAR_50->cm_timestamp = VAR_43;

 VAR_49->Header.XferState =
     VAR_4 |
     VAR_5 |
     VAR_3 |
     VAR_7 |
     VAR_6;
 VAR_49->Header.Size = sizeof(struct aac_fib_header) +
     sizeof(struct aac_srb);

 FUNC_5(VAR_50);
 FUNC_6(VAR_50->cm_sc);
}
