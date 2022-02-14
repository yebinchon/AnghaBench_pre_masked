
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {int func_code; int flags; void* status; int target_lun; struct scb* ccb_scb_ptr; int path; int target_id; } ;
struct TYPE_14__ {void* status; } ;
struct TYPE_25__ {int ppr_options; } ;
struct TYPE_26__ {TYPE_8__ spi; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int target_sprt; int max_target; int base_transfer_speed; int transport_version; TYPE_10__ ccb_h; TYPE_9__ xport_specific; int transport; int protocol_version; int protocol; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int hba_misc; int initiator_id; int max_lun; int hba_eng_cnt; } ;
struct TYPE_21__ {int target_lun; int target_id; } ;
struct ccb_trans_settings_spi {int valid; int flags; int ppr_options; int sync_offset; int sync_period; int bus_width; } ;
struct TYPE_20__ {struct ccb_trans_settings_spi spi; } ;
struct ccb_trans_settings_scsi {int valid; int flags; } ;
struct TYPE_19__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {int transport_version; int protocol_version; int type; TYPE_4__ ccb_h; TYPE_3__ xport_specific; TYPE_2__ proto_specific; } ;
struct TYPE_16__ {int tag_action; int tag_id; int scsi_status; int init_id; } ;
union ccb {TYPE_13__ ccb_h; struct ccb_pathinq cpi; int ccg; struct ccb_trans_settings cts; TYPE_12__ csio; } ;
typedef int uint16_t ;
typedef int u_int ;
struct target_data {int initiator_tag; int target_phases; int scsi_status; } ;
struct scb {int flags; union ccb* io_ctx; struct hardware_scb* hscb; } ;
struct TYPE_18__ {struct target_data tdata; } ;
struct hardware_scb {int control; TYPE_1__ shared_data; int cdb_len; int lun; int scsiid; } ;
struct cam_sim {int dummy; } ;
struct ahc_tmode_tstate {int tagenable; int discenable; } ;
struct ahc_tmode_lstate {int immed_notifies; int accept_tios; } ;
struct ahc_syncrate {int dummy; } ;
struct ahc_softc {int flags; int features; int our_id; int our_id_b; int user_tagenable; int user_discenable; struct ahc_tmode_lstate* pending_device; struct ahc_tmode_lstate* black_hole; } ;
struct TYPE_24__ {int period; int offset; int ppr_options; int transport_version; int protocol_version; } ;
struct TYPE_23__ {int period; int offset; int ppr_options; int transport_version; int protocol_version; } ;
struct TYPE_22__ {int transport_version; int protocol_version; } ;
struct ahc_initiator_tinfo {TYPE_7__ goal; TYPE_6__ user; TYPE_5__ curr; } ;
struct ahc_devinfo {int target_mask; int target; int our_scsiid; int channel; } ;
typedef void* cam_status ;
struct TYPE_15__ {int sle; } ;


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
 int FUNC_0 (struct ahc_softc*,struct cam_sim*,int ,int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int FUNC_2 (struct ahc_softc*,struct cam_sim*) ;
 int VAR_60 ;
 int FUNC_3 (struct ahc_softc*,struct cam_sim*) ;
 int FUNC_4 (struct ahc_softc*,struct cam_sim*) ;
 int FUNC_5 (struct ahc_softc*,struct cam_sim*) ;
 int FUNC_6 (int *,TYPE_13__*,int ) ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_7 (struct ahc_softc*,struct cam_sim*,union ccb*) ;
 int FUNC_8 (struct ahc_devinfo*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct scb*,int *,int ,int ) ;
 struct ahc_initiator_tinfo* FUNC_10 (struct ahc_softc*,int ,int ,int ,struct ahc_tmode_tstate**) ;
 struct ahc_syncrate* FUNC_11 (struct ahc_softc*,int *,int *,int ) ;
 void* FUNC_12 (struct ahc_softc*,struct cam_sim*,union ccb*,struct ahc_tmode_tstate**,struct ahc_tmode_lstate**,int ) ;
 struct scb* FUNC_13 (struct ahc_softc*) ;
 int FUNC_14 (struct ahc_softc*,int ,int ,struct ccb_trans_settings*) ;
 int FUNC_15 (struct ahc_softc*,struct cam_sim*,union ccb*) ;
 int FUNC_16 (struct ahc_softc*,int ,int ) ;
 int FUNC_17 (struct ahc_softc*,int ) ;
 int FUNC_18 (struct ahc_softc*,struct ahc_tmode_lstate*) ;
 int FUNC_19 (struct ahc_softc*,struct ahc_devinfo*,struct ahc_syncrate*,int ,int ,int ,int ,int ) ;
 int FUNC_20 (struct ahc_softc*,struct ahc_devinfo*,int ,int ,int ) ;
 int FUNC_21 (struct ahc_softc*,struct cam_sim*,TYPE_12__*,struct scb*) ;
 int FUNC_22 (struct ahc_softc*,int *,struct ahc_syncrate*,int *,int ,int ) ;
 int FUNC_23 (struct ahc_softc*,int *,int *,int ) ;
 int FUNC_24 (int *,int) ;
 int VAR_65 ;
 int FUNC_25 (struct cam_sim*) ;
 char* FUNC_26 (struct cam_sim*) ;
 scalar_t__ FUNC_27 (struct cam_sim*) ;
 int FUNC_28 (struct cam_sim*) ;
 int FUNC_29 (char*,int) ;
 TYPE_11__ VAR_66 ;
 int FUNC_30 (int ,char*,int ) ;
 int FUNC_31 (union ccb*) ;
 int FUNC_32 (struct cam_sim*,int) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static void
FUNC_34(struct cam_sim *VAR_67, union ccb *VAR_68)
{
 struct ahc_softc *VAR_69;
 struct ahc_tmode_lstate *VAR_70;
 u_int VAR_71;
 u_int VAR_72;

 FUNC_1(VAR_68->ccb_h.path, VAR_19, ("ahc_action\n"));

 VAR_69 = (struct ahc_softc *)FUNC_27(VAR_67);

 VAR_71 = VAR_68->ccb_h.target_id;
 VAR_72 = FUNC_5(VAR_69, VAR_67);

 switch (VAR_68->ccb_h.func_code) {

 case 140:
 case 138:
 {
  struct ahc_tmode_tstate *VAR_73;
  cam_status VAR_74;

  VAR_74 = FUNC_12(VAR_69, VAR_67, VAR_68, &VAR_73,
          &VAR_70, VAR_63);

  if (VAR_74 != VAR_23) {
   if (VAR_68->ccb_h.func_code == 138) {

    VAR_73 = ((void*)0);
    VAR_70 = VAR_69->black_hole;
   } else {
    VAR_68->ccb_h.status = VAR_74;
    FUNC_31(VAR_68);
    break;
   }
  }
  if (VAR_68->ccb_h.func_code == 140) {

   FUNC_6(&VAR_70->accept_tios, &VAR_68->ccb_h,
       VAR_66.sle);
   VAR_68->ccb_h.status = VAR_24;
   if ((VAR_69->flags & VAR_12) != 0)
    FUNC_17(VAR_69, VAR_39);
   break;
  }






  VAR_72 = VAR_71;
  VAR_71 = VAR_68->csio.init_id;

 }
 case 130:
 case 131:
 {
  struct scb *VAR_75;
  struct hardware_scb *VAR_76;

  if ((VAR_69->flags & VAR_3) == 0
   && (VAR_68->ccb_h.func_code == 130
    || VAR_68->ccb_h.func_code == 131)) {
   VAR_68->ccb_h.status = VAR_21;
   FUNC_31(VAR_68);
   return;
  }




  if ((VAR_75 = FUNC_13(VAR_69)) == ((void*)0)) {

   FUNC_32(VAR_67, 1);
   VAR_69->flags |= VAR_7;
   VAR_68->ccb_h.status = VAR_22;
   FUNC_31(VAR_68);
   return;
  }

  VAR_76 = VAR_75->hscb;

  FUNC_1(VAR_68->ccb_h.path, VAR_18,
     ("start scb(%p)\n", VAR_75));
  VAR_75->io_ctx = VAR_68;



  VAR_68->ccb_h.ccb_scb_ptr = VAR_75;




  VAR_76->control = 0;
  VAR_76->scsiid = FUNC_0(VAR_69, VAR_67, VAR_71, VAR_72);
  VAR_76->lun = VAR_68->ccb_h.target_lun;
  if (VAR_68->ccb_h.func_code == 131) {
   VAR_76->cdb_len = 0;
   VAR_75->flags |= VAR_54;
   VAR_76->control |= VAR_41;
   FUNC_9(VAR_75, ((void*)0), 0, 0);
  } else {
   if (VAR_68->ccb_h.func_code == 138) {
    struct target_data *VAR_77;

    VAR_77 = &VAR_76->shared_data.tdata;
    if (VAR_69->pending_device == VAR_70)
     VAR_75->flags |= VAR_55;
    VAR_76->control |= VAR_62;
    VAR_75->flags |= VAR_56;
    VAR_77->target_phases = 0;
    if ((VAR_68->ccb_h.flags & VAR_26) != 0) {
     VAR_77->target_phases |= VAR_61;
     VAR_77->scsi_status =
         VAR_68->csio.scsi_status;
    }
     if (VAR_68->ccb_h.flags & VAR_20)
     VAR_77->target_phases |= VAR_44;

    VAR_77->initiator_tag = VAR_68->csio.tag_id;
   }
   if (VAR_68->ccb_h.flags & VAR_27)
    VAR_76->control |= VAR_68->csio.tag_action;

   FUNC_21(VAR_69, VAR_67, &VAR_68->csio, VAR_75);
  }
  break;
 }
 case 134:
 case 135:
 {
  struct ahc_tmode_tstate *VAR_78;
  struct ahc_tmode_lstate *VAR_79;
  cam_status VAR_80;

  VAR_80 = FUNC_12(VAR_69, VAR_67, VAR_68, &VAR_78,
          &VAR_79, VAR_63);

  if (VAR_80 != VAR_23) {
   VAR_68->ccb_h.status = VAR_80;
   FUNC_31(VAR_68);
   break;
  }
  FUNC_6(&VAR_79->immed_notifies, &VAR_68->ccb_h,
      VAR_66.sle);
  VAR_68->ccb_h.status = VAR_24;
  FUNC_18(VAR_69, VAR_79);
  break;
 }
 case 137:
  FUNC_15(VAR_69, VAR_67, VAR_68);
  FUNC_31(VAR_68);
  break;
 case 141:
 {
  FUNC_7(VAR_69, VAR_67, VAR_68);
  break;
 }
 case 129:
 {
  struct ahc_devinfo VAR_81;
  struct ccb_trans_settings *VAR_82;
  struct ccb_trans_settings_scsi *VAR_83;
  struct ccb_trans_settings_spi *VAR_84;
  struct ahc_initiator_tinfo *VAR_85;
  struct ahc_tmode_tstate *VAR_86;
  uint16_t *VAR_87;
  uint16_t *VAR_88;
  u_int VAR_89;

  VAR_82 = &VAR_68->cts;
  VAR_83 = &VAR_82->proto_specific.scsi;
  VAR_84 = &VAR_82->xport_specific.spi;
  FUNC_8(&VAR_81, FUNC_5(VAR_69, VAR_67),
        VAR_82->ccb_h.target_id,
        VAR_82->ccb_h.target_lun,
        FUNC_2(VAR_69, VAR_67),
        VAR_53);
  VAR_85 = FUNC_10(VAR_69, VAR_81.channel,
         VAR_81.our_scsiid,
         VAR_81.target, &VAR_86);
  VAR_89 = 0;
  if (VAR_82->type == VAR_36) {
   VAR_89 |= VAR_13;
   VAR_87 = &VAR_86->discenable;
   VAR_88 = &VAR_86->tagenable;
   VAR_85->curr.protocol_version =
       VAR_82->protocol_version;
   VAR_85->curr.transport_version =
       VAR_82->transport_version;
   VAR_85->goal.protocol_version =
       VAR_82->protocol_version;
   VAR_85->goal.transport_version =
       VAR_82->transport_version;
  } else if (VAR_82->type == VAR_37) {
   VAR_89 |= VAR_14;
   VAR_87 = &VAR_69->user_discenable;
   VAR_88 = &VAR_69->user_tagenable;
   VAR_85->user.protocol_version =
       VAR_82->protocol_version;
   VAR_85->user.transport_version =
       VAR_82->transport_version;
  } else {
   VAR_68->ccb_h.status = VAR_25;
   FUNC_31(VAR_68);
   break;
  }

  if ((VAR_84->valid & VAR_32) != 0) {
   if ((VAR_84->flags & VAR_30) != 0)
    *VAR_87 |= VAR_81.target_mask;
   else
    *VAR_87 &= ~VAR_81.target_mask;
  }

  if ((VAR_83->valid & VAR_29) != 0) {
   if ((VAR_83->flags & VAR_28) != 0)
    *VAR_88 |= VAR_81.target_mask;
   else
    *VAR_88 &= ~VAR_81.target_mask;
  }

  if ((VAR_84->valid & VAR_31) != 0) {
   FUNC_23(VAR_69, ((void*)0),
        &VAR_84->bus_width, VAR_53);
   FUNC_20(VAR_69, &VAR_81, VAR_84->bus_width,
          VAR_89, VAR_39);
  }

  if ((VAR_84->valid & VAR_33) == 0) {
   if (VAR_89 == VAR_14)
    VAR_84->ppr_options = VAR_85->user.ppr_options;
   else
    VAR_84->ppr_options = VAR_85->goal.ppr_options;
  }

  if ((VAR_84->valid & VAR_34) == 0) {
   if (VAR_89 == VAR_14)
    VAR_84->sync_offset = VAR_85->user.offset;
   else
    VAR_84->sync_offset = VAR_85->goal.offset;
  }

  if ((VAR_84->valid & VAR_35) == 0) {
   if (VAR_89 == VAR_14)
    VAR_84->sync_period = VAR_85->user.period;
   else
    VAR_84->sync_period = VAR_85->goal.period;
  }

  if (((VAR_84->valid & VAR_35) != 0)
   || ((VAR_84->valid & VAR_34) != 0)) {
   struct ahc_syncrate *VAR_90;
   u_int VAR_91;

   if ((VAR_69->features & VAR_16) != 0)
    VAR_91 = VAR_8;
   else if ((VAR_69->features & VAR_15) != 0)
    VAR_91 = VAR_10;
   else
    VAR_91 = VAR_9;

   if (VAR_84->bus_width != VAR_43)
    VAR_84->ppr_options &= ~VAR_42;

   VAR_90 = FUNC_11(VAR_69, &VAR_84->sync_period,
           &VAR_84->ppr_options,
           VAR_91);
   FUNC_22(VAR_69, ((void*)0),
         VAR_90, &VAR_84->sync_offset,
         VAR_84->bus_width, VAR_53);


   if (VAR_84->sync_offset == 0) {
    VAR_84->sync_period = 0;
    VAR_84->ppr_options = 0;
   }

   FUNC_19(VAR_69, &VAR_81, VAR_90,
      VAR_84->sync_period, VAR_84->sync_offset,
      VAR_84->ppr_options, VAR_89,
                VAR_39);
  }
  VAR_68->ccb_h.status = VAR_23;
  FUNC_31(VAR_68);
  break;
 }
 case 136:

 {

  FUNC_14(VAR_69, FUNC_5(VAR_69, VAR_67),
          FUNC_2(VAR_69, VAR_67), &VAR_68->cts);
  FUNC_31(VAR_68);
  break;
 }
 case 139:
 {
  int VAR_92;

  VAR_92 = FUNC_3(VAR_69, VAR_67)
    ? VAR_69->flags & VAR_2
    : VAR_69->flags & VAR_1;
  FUNC_24(&VAR_68->ccg, VAR_92);
  FUNC_31(VAR_68);
  break;
 }
 case 132:
 {
  int VAR_93;

  VAR_93 = FUNC_16(VAR_69, FUNC_2(VAR_69, VAR_67),
                         VAR_63);
  if (VAR_65) {
   FUNC_33(FUNC_4(VAR_69, VAR_67));
   FUNC_29("SCSI bus reset delivered. "
          "%d SCBs aborted.\n", VAR_93);
  }
  VAR_68->ccb_h.status = VAR_23;
  FUNC_31(VAR_68);
  break;
 }
 case 128:

  VAR_68->ccb_h.status = VAR_25;
  FUNC_31(VAR_68);
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_94 = &VAR_68->cpi;

  VAR_94->version_num = 1;
  VAR_94->hba_inquiry = VAR_49|VAR_50;
  if ((VAR_69->features & VAR_17) != 0)
   VAR_94->hba_inquiry |= VAR_51;
  if ((VAR_69->features & VAR_11) != 0) {
   VAR_94->target_sprt = VAR_47
      | VAR_46
      | VAR_48;
  } else {
   VAR_94->target_sprt = 0;
  }
  VAR_94->hba_misc = 0;
  VAR_94->hba_eng_cnt = 0;
  VAR_94->max_target = (VAR_69->features & VAR_17) ? 15 : 7;
  VAR_94->max_lun = VAR_4 - 1;
  if (FUNC_3(VAR_69, VAR_67)) {
   VAR_94->initiator_id = VAR_69->our_id_b;
   if ((VAR_69->flags & VAR_6) == 0)
    VAR_94->hba_misc |= VAR_45;
  } else {
   VAR_94->initiator_id = VAR_69->our_id;
   if ((VAR_69->flags & VAR_5) == 0)
    VAR_94->hba_misc |= VAR_45;
  }
  VAR_94->bus_id = FUNC_25(VAR_67);
  VAR_94->base_transfer_speed = 3300;
  FUNC_30(VAR_94->sim_vid, "FreeBSD", VAR_60);
  FUNC_30(VAR_94->hba_vid, "Adaptec", VAR_40);
  FUNC_30(VAR_94->dev_name, FUNC_26(VAR_67), VAR_38);
  VAR_94->unit_number = FUNC_28(VAR_67);
  VAR_94->protocol = VAR_52;
  VAR_94->protocol_version = VAR_57;
  VAR_94->transport = VAR_64;
  VAR_94->transport_version = 2;
  VAR_94->xport_specific.spi.ppr_options = VAR_59;
  if ((VAR_69->features & VAR_0) != 0) {
   VAR_94->transport_version = 3;
   VAR_94->xport_specific.spi.ppr_options =
       VAR_58;
  }
  VAR_94->ccb_h.status = VAR_23;
  FUNC_31(VAR_68);
  break;
 }
 default:
  VAR_68->ccb_h.status = VAR_21;
  FUNC_31(VAR_68);
  break;
 }
}
