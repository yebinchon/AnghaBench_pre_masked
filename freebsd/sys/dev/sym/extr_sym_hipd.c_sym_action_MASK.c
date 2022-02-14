
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_15__ ;
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


struct TYPE_43__ {int* cdb_ptr; int* cdb_bytes; } ;
struct ccb_hdr {int status; size_t target_id; scalar_t__ target_lun; int flags; } ;
struct ccb_scsiio {int tag_action; TYPE_5__ cdb_io; struct ccb_hdr ccb_h; } ;
struct TYPE_42__ {scalar_t__ func_code; int path; } ;
union ccb {struct ccb_scsiio csio; TYPE_4__ ccb_h; } ;
typedef int u_int ;
typedef int u_char ;
typedef TYPE_12__* tcb_p ;
struct cam_sim {int dummy; } ;
typedef TYPE_13__* lcb_p ;
typedef TYPE_14__* hcb_p ;
typedef TYPE_15__* ccb_p ;
struct TYPE_47__ {void* restart; void* start; } ;
struct TYPE_45__ {scalar_t__ width; scalar_t__ period; scalar_t__ offset; scalar_t__ options; } ;
struct TYPE_44__ {scalar_t__ width; scalar_t__ period; scalar_t__ offset; scalar_t__ options; } ;
struct TYPE_46__ {TYPE_7__ goal; TYPE_6__ current; } ;
struct TYPE_41__ {void* size; void* addr; } ;
struct TYPE_40__ {int uval; int sval; int wval; } ;
struct TYPE_39__ {int sel_scntl4; int sel_sxfer; int sel_scntl3; int sel_id; } ;
struct TYPE_33__ {TYPE_9__ go; } ;
struct TYPE_34__ {TYPE_3__ smsg; TYPE_1__ select; TYPE_10__ head; } ;
struct TYPE_38__ {int lun; int tag; int* scsi_smsg; int ext_sg; scalar_t__ ext_ofs; scalar_t__ extra_bytes; scalar_t__ host_flags; scalar_t__ xerr_status; int ssss_status; scalar_t__ nego_status; int host_status; int actualquirks; TYPE_11__ phys; int target; union ccb* cam_ccb; } ;
struct TYPE_37__ {size_t myaddr; TYPE_12__* target; } ;
struct TYPE_36__ {int current_flags; } ;
struct TYPE_35__ {int usrflags; int quirks; TYPE_2__ head; int nego_cp; TYPE_8__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_15__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_14__*,int ) ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_4 (struct cam_sim*) ;
 void* FUNC_5 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (struct cam_sim*,union ccb*) ;
 int FUNC_7 (TYPE_14__*,TYPE_15__*) ;
 TYPE_15__* FUNC_8 (TYPE_14__*,size_t,scalar_t__,int) ;
 TYPE_13__* FUNC_9 (TYPE_12__*,scalar_t__) ;
 int FUNC_10 (TYPE_14__*,TYPE_15__*,int ,int*) ;
 scalar_t__ FUNC_11 (TYPE_14__*,struct ccb_scsiio*,TYPE_15__*) ;
 int FUNC_12 (TYPE_14__*,struct ccb_scsiio*,TYPE_15__*) ;
 int FUNC_13 (TYPE_14__*,union ccb*,TYPE_15__*) ;
 int FUNC_14 (TYPE_14__*,union ccb*,int ) ;
 int FUNC_15 (union ccb*) ;

__attribute__((used)) static void FUNC_16(struct cam_sim *VAR_25, union ccb *VAR_26)
{
 hcb_p VAR_27;
 tcb_p VAR_28;
 lcb_p VAR_29;
 ccb_p VAR_30;
 int VAR_31;
 u_char VAR_32, *VAR_33;
 u_int VAR_34;
 struct ccb_scsiio *VAR_35;
 struct ccb_hdr *VAR_36;

 FUNC_0(VAR_26->ccb_h.path, VAR_2, ("sym_action\n"));




 VAR_27 = (hcb_p) FUNC_4(VAR_25);

 FUNC_3(VAR_10);





 if (VAR_26->ccb_h.func_code != VAR_21) {
  FUNC_6(VAR_25, VAR_26);
  return;
 }
 VAR_35 = &VAR_26->csio;
 VAR_36 = &VAR_35->ccb_h;




 if ((VAR_36->status & VAR_6) != VAR_4) {
  FUNC_15(VAR_26);
  return;
 }





 if (VAR_36->target_id == VAR_27->myaddr ||
     VAR_36->target_id >= VAR_15 ||
     VAR_36->target_lun >= VAR_14) {
  FUNC_14(VAR_27, VAR_26, VAR_3);
  return;
        }




 VAR_28 = &VAR_27->target[VAR_36->target_id];
 VAR_29 = FUNC_9(VAR_28, VAR_36->target_lun);
 if (!(VAR_36->flags & VAR_0) &&
     (0x12 == ((VAR_36->flags & VAR_1) ?
    VAR_35->cdb_io.cdb_ptr[0] : VAR_35->cdb_io.cdb_bytes[0]))) {
  if ((VAR_28->usrflags & VAR_18) ||
      ((VAR_28->usrflags & VAR_19) &&
       VAR_36->target_lun != 0)) {
   VAR_28->usrflags &= ~VAR_18;
   FUNC_14(VAR_27, VAR_26, VAR_3);
   return;
  }
 }




 VAR_31 = ((VAR_36->flags & VAR_7) != 0);
 VAR_30 = FUNC_8(VAR_27, VAR_36->target_id, VAR_36->target_lun, VAR_31);
 if (!VAR_30) {
  FUNC_14(VAR_27, VAR_26, VAR_5);
  return;
 }




 VAR_30->cam_ccb = VAR_26;




 VAR_32 = VAR_11 | VAR_30->lun;
 if (VAR_30->tag != VAR_13 || (VAR_29 && (VAR_29->current_flags & VAR_16)))
  VAR_32 |= 0x40;

 VAR_33 = VAR_30->scsi_smsg;
 VAR_34 = 0;
 VAR_33[VAR_34++] = VAR_32;




 if (VAR_30->tag != VAR_13) {
  u_char VAR_37 = VAR_35->tag_action;

  switch(VAR_37) {
  case 128:
   break;
  case 129:
   break;
  default:
   VAR_37 = VAR_12;
  }
  VAR_33[VAR_34++] = VAR_37;
  VAR_33[VAR_34++] = (VAR_30->tag << 1) + 1;

 }





 VAR_30->nego_status = 0;
 if (VAR_28->tinfo.current.width != VAR_28->tinfo.goal.width ||
     VAR_28->tinfo.current.period != VAR_28->tinfo.goal.period ||
     VAR_28->tinfo.current.offset != VAR_28->tinfo.goal.offset ||
     VAR_28->tinfo.current.options != VAR_28->tinfo.goal.options) {
  if (!VAR_28->nego_cp && VAR_29)
   VAR_34 += FUNC_10(VAR_27, VAR_30, 0, VAR_33 + VAR_34);
 }
 VAR_30->phys.head.go.start = FUNC_5(FUNC_2 (VAR_27, VAR_24));
 VAR_30->phys.head.go.restart = FUNC_5(FUNC_2 (VAR_27, VAR_22));




 VAR_30->phys.select.sel_id = VAR_30->target;
 VAR_30->phys.select.sel_scntl3 = VAR_28->head.wval;
 VAR_30->phys.select.sel_sxfer = VAR_28->head.sval;
 VAR_30->phys.select.sel_scntl4 = VAR_28->head.uval;




 VAR_30->phys.smsg.addr = FUNC_5(FUNC_1 (VAR_30, VAR_23));
 VAR_30->phys.smsg.size = FUNC_5(VAR_34);




 if (FUNC_11(VAR_27, VAR_35, VAR_30) < 0) {
  FUNC_13(VAR_27, VAR_26, VAR_30);
  FUNC_7(VAR_27, VAR_30);
  return;
 }







 VAR_30->actualquirks = VAR_17;
 VAR_30->host_status = VAR_30->nego_status ? VAR_9 : VAR_8;
 VAR_30->ssss_status = VAR_20;
 VAR_30->xerr_status = 0;
 VAR_30->host_flags = 0;
 VAR_30->extra_bytes = 0;





 VAR_30->ext_sg = -1;
 VAR_30->ext_ofs = 0;





 FUNC_12(VAR_27, VAR_35, VAR_30);
}
