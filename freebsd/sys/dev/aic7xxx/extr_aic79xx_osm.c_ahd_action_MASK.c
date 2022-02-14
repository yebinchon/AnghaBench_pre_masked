
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int func_code; int flags; void* status; int target_lun; struct scb* ccb_scb_ptr; int path; int target_id; } ;
struct TYPE_13__ {void* status; } ;
struct TYPE_11__ {int ppr_options; } ;
struct TYPE_12__ {TYPE_3__ spi; } ;
struct ccb_pathinq {int version_num; int hba_inquiry; int target_sprt; int max_target; int base_transfer_speed; int transport_version; TYPE_5__ ccb_h; TYPE_4__ xport_specific; int transport; int protocol_version; int protocol; int unit_number; int dev_name; int hba_vid; int sim_vid; int bus_id; int hba_misc; int initiator_id; int max_lun; int hba_eng_cnt; } ;
struct TYPE_15__ {int tag_action; int tag_id; int scsi_status; int init_id; } ;
union ccb {TYPE_8__ ccb_h; struct ccb_pathinq cpi; int ccg; int cts; TYPE_7__ csio; } ;
typedef int u_int ;
struct target_data {int initiator_tag; int target_phases; int scsi_status; } ;
struct scb {int flags; union ccb* io_ctx; struct hardware_scb* hscb; } ;
struct TYPE_10__ {struct target_data tdata; } ;
struct hardware_scb {int control; int task_management; TYPE_2__ shared_data; int cdb_len; int lun; int scsiid; } ;
struct cam_sim {int dummy; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_tmode_lstate {int immed_notifies; int accept_tios; } ;
struct ahd_softc {int flags; int features; int our_id; struct ahd_tmode_lstate* pending_device; struct ahd_tmode_lstate* black_hole; } ;
struct TYPE_9__ {int ppr_options; } ;
struct ahd_initiator_tinfo {TYPE_1__ curr; } ;
typedef void* cam_status ;
struct TYPE_14__ {int sle; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ahd_softc*,struct cam_sim*,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_3 (struct ahd_softc*,struct cam_sim*) ;
 int VAR_39 ;
 int FUNC_4 (struct ahd_softc*,struct cam_sim*) ;
 int FUNC_5 (struct ahd_softc*,struct cam_sim*) ;
 int VAR_40 ;
 int FUNC_6 (int *,TYPE_8__*,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_7 (struct ahd_softc*,struct cam_sim*,union ccb*) ;
 int FUNC_8 (struct scb*,int *,int ,int ) ;
 struct ahd_initiator_tinfo* FUNC_9 (struct ahd_softc*,char,int ,int ,struct ahd_tmode_tstate**) ;
 void* FUNC_10 (struct ahd_softc*,struct cam_sim*,union ccb*,struct ahd_tmode_tstate**,struct ahd_tmode_lstate**,int ) ;
 struct scb* FUNC_11 (struct ahd_softc*,int ) ;
 int FUNC_12 (struct ahd_softc*,int ,int ,int *) ;
 int FUNC_13 (struct ahd_softc*,struct cam_sim*,union ccb*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct ahd_softc*,int ,int ) ;
 int FUNC_16 (struct ahd_softc*,int ) ;
 int FUNC_17 (struct ahd_softc*,struct ahd_tmode_lstate*) ;
 int FUNC_18 (struct ahd_softc*,int ,int ,int *) ;
 int FUNC_19 (struct ahd_softc*,struct cam_sim*,TYPE_7__*,struct scb*) ;
 int FUNC_20 (int *,int) ;
 int VAR_45 ;
 int FUNC_21 (struct cam_sim*) ;
 char* FUNC_22 (struct cam_sim*) ;
 scalar_t__ FUNC_23 (struct cam_sim*) ;
 int FUNC_24 (struct cam_sim*) ;
 int FUNC_25 (char*,int) ;
 TYPE_6__ VAR_46 ;
 int FUNC_26 (int ,char*,int ) ;
 int FUNC_27 (union ccb*) ;
 int FUNC_28 (struct cam_sim*,int) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static void
FUNC_30(struct cam_sim *VAR_47, union ccb *VAR_48)
{
 struct ahd_softc *VAR_49;



 u_int VAR_50;
 u_int VAR_51;

 FUNC_2(VAR_48->ccb_h.path, VAR_10, ("ahd_action\n"));

 VAR_49 = (struct ahd_softc *)FUNC_23(VAR_47);

 VAR_50 = VAR_48->ccb_h.target_id;
 VAR_51 = FUNC_5(VAR_49, VAR_47);

 switch (VAR_48->ccb_h.func_code) {
 case 130:
 case 131:
 {
  struct scb *VAR_52;
  struct hardware_scb *VAR_53;
  struct ahd_initiator_tinfo *VAR_54;
  struct ahd_tmode_tstate *VAR_55;
  u_int VAR_56;

  if ((VAR_49->flags & VAR_1) == 0
   && (VAR_48->ccb_h.func_code == 130
    || VAR_48->ccb_h.func_code == 131)) {
   VAR_48->ccb_h.status = VAR_12;
   FUNC_27(VAR_48);
   return;
  }




  VAR_54 = FUNC_9(VAR_49, 'A', VAR_51,
         VAR_50, &VAR_55);
  if ((VAR_48->ccb_h.flags & VAR_18) == 0
   || (VAR_54->curr.ppr_options & VAR_23) != 0
   || VAR_48->ccb_h.func_code == 138) {
   VAR_56 = VAR_2;
  } else {
   VAR_56 = FUNC_0(VAR_50,
          VAR_48->ccb_h.target_lun);
  }
  if ((VAR_52 = FUNC_11(VAR_49, VAR_56)) == ((void*)0)) {

   FUNC_28(VAR_47, 1);
   VAR_49->flags |= VAR_5;
   VAR_48->ccb_h.status = VAR_13;
   FUNC_27(VAR_48);
   return;
  }

  VAR_53 = VAR_52->hscb;

  FUNC_2(VAR_48->ccb_h.path, VAR_9,
     ("start scb(%p)\n", VAR_52));
  VAR_52->io_ctx = VAR_48;



  VAR_48->ccb_h.ccb_scb_ptr = VAR_52;




  VAR_53->control = 0;
  VAR_53->scsiid = FUNC_1(VAR_49, VAR_47, VAR_50, VAR_51);
  VAR_53->lun = VAR_48->ccb_h.target_lun;
  if (VAR_48->ccb_h.func_code == 131) {
   VAR_53->cdb_len = 0;
   VAR_52->flags |= VAR_33;
   VAR_53->control |= VAR_22;
   VAR_53->task_management = VAR_40;
   FUNC_8(VAR_52, ((void*)0), 0, 0);
  } else {
   VAR_53->task_management = 0;
   if (VAR_48->ccb_h.flags & VAR_18)
    VAR_53->control |= VAR_48->csio.tag_action;

   FUNC_19(VAR_49, VAR_47, &VAR_48->csio, VAR_52);
  }
  break;
 }
 case 141:
 {
  FUNC_7(VAR_49, VAR_47, VAR_48);
  break;
 }
 case 129:
 {
  FUNC_18(VAR_49, FUNC_5(VAR_49, VAR_47),
          FUNC_3(VAR_49, VAR_47), &VAR_48->cts);
  FUNC_27(VAR_48);
  break;
 }
 case 136:

 {
  FUNC_12(VAR_49, FUNC_5(VAR_49, VAR_47),
          FUNC_3(VAR_49, VAR_47), &VAR_48->cts);
  FUNC_27(VAR_48);
  break;
 }
 case 139:
 {
  FUNC_20(&VAR_48->ccg, VAR_49->flags & VAR_0);
  FUNC_27(VAR_48);
  break;
 }
 case 132:
 {
  int VAR_57;

  VAR_57 = FUNC_15(VAR_49, FUNC_3(VAR_49, VAR_47),
                         VAR_43);
  if (VAR_45) {
   FUNC_29(FUNC_4(VAR_49, VAR_47));
   FUNC_25("SCSI bus reset delivered. "
          "%d SCBs aborted.\n", VAR_57);
  }
  VAR_48->ccb_h.status = VAR_14;
  FUNC_27(VAR_48);
  break;
 }
 case 128:

  VAR_48->ccb_h.status = VAR_16;
  FUNC_27(VAR_48);
  break;
 case 133:
 {
  struct ccb_pathinq *VAR_58 = &VAR_48->cpi;

  VAR_58->version_num = 1;
  VAR_58->hba_inquiry = VAR_29|VAR_30;
  if ((VAR_49->features & VAR_8) != 0)
   VAR_58->hba_inquiry |= VAR_31;
  if ((VAR_49->features & VAR_6) != 0) {
   VAR_58->target_sprt = VAR_27
      | VAR_26
      | VAR_28;
  } else {
   VAR_58->target_sprt = 0;
  }
  VAR_58->hba_misc = 0;
  VAR_58->hba_eng_cnt = 0;
  VAR_58->max_target = (VAR_49->features & VAR_8) ? 15 : 7;
  VAR_58->max_lun = VAR_3 - 1;
  VAR_58->initiator_id = VAR_49->our_id;
  if ((VAR_49->flags & VAR_4) == 0) {
   VAR_58->hba_misc |= VAR_25;
  }
  VAR_58->bus_id = FUNC_21(VAR_47);
  VAR_58->base_transfer_speed = 3300;
  FUNC_26(VAR_58->sim_vid, "FreeBSD", VAR_39);
  FUNC_26(VAR_58->hba_vid, "Adaptec", VAR_21);
  FUNC_26(VAR_58->dev_name, FUNC_22(VAR_47), VAR_19);
  VAR_58->unit_number = FUNC_24(VAR_47);
  VAR_58->protocol = VAR_32;
  VAR_58->protocol_version = VAR_35;
  VAR_58->transport = VAR_44;
  VAR_58->transport_version = 4;
  VAR_58->xport_specific.spi.ppr_options = VAR_36
          | VAR_37
          | VAR_38;
  VAR_58->ccb_h.status = VAR_14;
  FUNC_27(VAR_48);
  break;
 }
 default:
  VAR_48->ccb_h.status = VAR_12;
  FUNC_27(VAR_48);
  break;
 }
}
