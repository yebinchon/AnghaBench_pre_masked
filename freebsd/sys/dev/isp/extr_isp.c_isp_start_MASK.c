
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_9__ ;
typedef struct TYPE_54__ TYPE_8__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_2__ ;
typedef struct TYPE_47__ TYPE_1__ ;
typedef struct TYPE_46__ TYPE_14__ ;
typedef struct TYPE_45__ TYPE_13__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_51__ {TYPE_4__* isp_devparam; scalar_t__ update; } ;
typedef TYPE_5__ sdparam ;
struct TYPE_52__ {scalar_t__ isp_state; } ;
typedef TYPE_6__ ispsoftc_t ;
struct TYPE_53__ {int req_task_attribute; int req_tidlo; int req_tidhi; void* req_cdb; int req_time; int req_crn; int req_lun; int req_vpidx; int req_nphdl; } ;
typedef TYPE_7__ ispreqt7_t ;
struct TYPE_54__ {void* req_cdb; int req_time; void* req_scclun; int req_target; } ;
typedef TYPE_8__ ispreqt2e_t ;
struct TYPE_55__ {void* req_cdb; int req_time; void* req_lun_trn; int req_target; void* req_scclun; int req_crn; void* req_flags; } ;
typedef TYPE_9__ ispreqt2_t ;
struct TYPE_49__ {int rqs_entry_count; int rqs_entry_type; } ;
struct TYPE_42__ {int req_target; int req_cdblen; scalar_t__ req_handle; void* req_cdb; int req_time; void* req_lun_trn; void* req_flags; TYPE_3__ req_header; } ;
typedef TYPE_10__ ispreq_t ;
struct TYPE_48__ {int rqs_entry_count; void* rqs_entry_type; } ;
struct TYPE_43__ {int mrk_target; void* mrk_modifier; TYPE_2__ mrk_header; } ;
typedef TYPE_11__ isp_marker_t ;
struct TYPE_47__ {int rqs_entry_count; void* rqs_entry_type; } ;
struct TYPE_44__ {int mrk_vphdl; void* mrk_modifier; TYPE_1__ mrk_header; } ;
typedef TYPE_12__ isp_marker_24xx_t ;
struct TYPE_45__ {scalar_t__ is_target; scalar_t__ state; int portid; int prli_word3; int handle; } ;
typedef TYPE_13__ fcportdb_t ;
struct TYPE_46__ {int role; scalar_t__ isp_loopstate; scalar_t__ fctape_enabled; TYPE_13__* portdb; } ;
typedef TYPE_14__ fcparam ;
typedef int XS_T ;
struct TYPE_50__ {int actv_flags; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_14__* FUNC_1 (TYPE_6__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int *,TYPE_10__*) ;
 int FUNC_6 (TYPE_6__*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (void*,int*,int) ;
 int FUNC_8 (int *,int) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_9 (TYPE_6__*,int,int ) ;
 int FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_5__* FUNC_15 (TYPE_6__*,int) ;
 void* VAR_34 ;
 int FUNC_16 (int *) ;
 int* FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 TYPE_6__* FUNC_20 (int *) ;
 void* FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 scalar_t__ FUNC_23 (int *) ;
 void* FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int *) ;
 int FUNC_28 (int ,int ) ;
 scalar_t__ FUNC_29 (TYPE_6__*,int *,int ) ;
 int FUNC_30 (TYPE_6__*,scalar_t__) ;
 void* FUNC_31 (TYPE_6__*) ;
 int FUNC_32 (TYPE_6__*,int ,char*,...) ;
 int FUNC_33 (TYPE_6__*,TYPE_11__*,void*) ;
 int FUNC_34 (TYPE_6__*,TYPE_12__*,void*) ;
 int FUNC_35 (TYPE_6__*,int) ;
 int FUNC_36 (TYPE_6__*,int *,int ,char*,int,long) ;

int
FUNC_37(XS_T *VAR_35)
{
 ispsoftc_t *VAR_36;
 uint32_t VAR_37;
 uint8_t VAR_38[VAR_25];
 ispreq_t *VAR_39;
 void *VAR_40, *VAR_41;
 uint16_t *VAR_42;
 fcportdb_t *VAR_43;
 int VAR_44, VAR_45;

 FUNC_19(VAR_35);
 VAR_36 = FUNC_20(VAR_35);
 if (FUNC_16(VAR_35) > (FUNC_13(VAR_36)? 16 : 44) || FUNC_16(VAR_35) == 0) {
  FUNC_32(VAR_36, VAR_18, "unsupported cdb length (%d, CDB[0]=0x%x)", FUNC_16(VAR_35), FUNC_17(VAR_35)[0] & 0xff);
  FUNC_22(VAR_35, VAR_12);
  return (VAR_0);
 }





 VAR_44 = FUNC_25(VAR_35);
 if (FUNC_13(VAR_36)) {
  fcparam *VAR_46 = FUNC_1(VAR_36, FUNC_18(VAR_35));

  if ((VAR_46->role & VAR_20) == 0) {
   FUNC_32(VAR_36, VAR_19,
       "%d.%d.%jx I am not an initiator",
       FUNC_18(VAR_35), VAR_44, (uintmax_t)FUNC_21(VAR_35));
   FUNC_22(VAR_35, VAR_13);
   return (VAR_0);
  }

  if (VAR_36->isp_state != VAR_21) {
   FUNC_32(VAR_36, VAR_18, "Adapter not at RUNSTATE");
   FUNC_22(VAR_35, VAR_10);
   return (VAR_0);
  }

  FUNC_32(VAR_36, VAR_17, "XS_TGT(xs)=%d", VAR_44);
  VAR_43 = &VAR_46->portdb[VAR_44];
  if (VAR_44 < 0 || VAR_44 >= VAR_23 ||
      VAR_43->is_target == 0) {
   FUNC_22(VAR_35, VAR_13);
   return (VAR_0);
  }
  if (VAR_46->isp_loopstate != VAR_22) {
   FUNC_32(VAR_36, VAR_16,
       "%d.%d.%jx loop is not ready",
       FUNC_18(VAR_35), VAR_44, (uintmax_t)FUNC_21(VAR_35));
   return (VAR_3);
  }
  if (VAR_43->state == VAR_9) {
   FUNC_32(VAR_36, VAR_16,
       "%d.%d.%jx target zombie",
       FUNC_18(VAR_35), VAR_44, (uintmax_t)FUNC_21(VAR_35));
   return (VAR_3);
  }
  if (VAR_43->state != VAR_8) {
   FUNC_32(VAR_36, VAR_16,
       "%d.%d.%jx bad db port state 0x%x",
       FUNC_18(VAR_35), VAR_44, (uintmax_t)FUNC_21(VAR_35), VAR_43->state);
   FUNC_22(VAR_35, VAR_13);
   return (VAR_0);
  }
 } else {
  sdparam *VAR_47 = FUNC_15(VAR_36, FUNC_18(VAR_35));
  if (VAR_36->isp_state != VAR_21) {
   FUNC_32(VAR_36, VAR_18, "Adapter not at RUNSTATE");
   FUNC_22(VAR_35, VAR_10);
   return (VAR_0);
  }

  if (VAR_47->update) {
   FUNC_35(VAR_36, FUNC_18(VAR_35));
  }
  VAR_43 = ((void*)0);
 }

 start_again:

 VAR_41 = FUNC_31(VAR_36);
 if (VAR_41 == ((void*)0)) {
  FUNC_32(VAR_36, VAR_19, "Request Queue Overflow");
  FUNC_22(VAR_35, VAR_10);
  return (VAR_1);
 }
 FUNC_22(VAR_35, VAR_11);






 VAR_39 = (ispreq_t *) VAR_38;
 FUNC_8(VAR_38, VAR_25);
 if (FUNC_11(VAR_36, FUNC_18(VAR_35))) {
  if (FUNC_12(VAR_36)) {
   isp_marker_24xx_t *VAR_48 = (isp_marker_24xx_t *) VAR_39;
   VAR_48->mrk_header.rqs_entry_count = 1;
   VAR_48->mrk_header.rqs_entry_type = VAR_30;
   VAR_48->mrk_modifier = VAR_34;
   VAR_48->mrk_vphdl = FUNC_18(VAR_35);
   FUNC_34(VAR_36, VAR_48, VAR_41);
  } else {
   isp_marker_t *VAR_49 = (isp_marker_t *) VAR_39;
   VAR_49->mrk_header.rqs_entry_count = 1;
   VAR_49->mrk_header.rqs_entry_type = VAR_30;
   VAR_49->mrk_target = (FUNC_18(VAR_35) << 7);
   VAR_49->mrk_modifier = VAR_34;
   FUNC_33(VAR_36, VAR_49, VAR_41);
  }
  FUNC_10(VAR_36);
  FUNC_9(VAR_36, FUNC_18(VAR_35), 0);
  goto start_again;
 }

 VAR_39->req_header.rqs_entry_count = 1;
 if (FUNC_12(VAR_36)) {
  VAR_39->req_header.rqs_entry_type = VAR_33;
 } else if (FUNC_13(VAR_36)) {
  VAR_39->req_header.rqs_entry_type = VAR_32;
 } else {
  if (FUNC_16(VAR_35) > 12) {
   VAR_39->req_header.rqs_entry_type = VAR_29;
  } else {
   VAR_39->req_header.rqs_entry_type = VAR_31;
  }
 }




 if (FUNC_12(VAR_36)) {
  int VAR_50;
  if (FUNC_23(VAR_35)) {
   VAR_50 = FUNC_24(VAR_35);
  } else {
   VAR_50 = VAR_28;
  }
  if (VAR_50 == VAR_27) {
   VAR_50 = VAR_6;
  } else if (VAR_50 == VAR_26) {
   VAR_50 = VAR_5;
  } else {
   VAR_50 = VAR_7;
  }
  ((ispreqt7_t *)VAR_39)->req_task_attribute = VAR_50;
 } else if (FUNC_13(VAR_36)) {
  if (FUNC_23(VAR_35)) {
   ((ispreqt2_t *)VAR_39)->req_flags = FUNC_24(VAR_35);
  } else {
   ((ispreqt2_t *)VAR_39)->req_flags = VAR_28;
  }
 } else {
  sdparam *VAR_51 = FUNC_15(VAR_36, FUNC_18(VAR_35));
  if ((VAR_51->isp_devparam[VAR_44].actv_flags & VAR_4) && FUNC_23(VAR_35)) {
   VAR_39->req_flags = FUNC_24(VAR_35);
  }
 }




 VAR_37 = FUNC_16(VAR_35);

 if (FUNC_14(VAR_36)) {
  if (VAR_37 > sizeof (VAR_39->req_cdb)) {
   FUNC_32(VAR_36, VAR_18, "Command Length %u too long for this chip", VAR_37);
   FUNC_22(VAR_35, VAR_12);
   return (VAR_0);
  }
  VAR_39->req_target = VAR_44 | (FUNC_18(VAR_35) << 7);
  VAR_39->req_lun_trn = FUNC_21(VAR_35);
  VAR_39->req_cdblen = VAR_37;
  VAR_42 = &VAR_39->req_time;
  VAR_40 = VAR_39->req_cdb;
 } else if (FUNC_12(VAR_36)) {
  ispreqt7_t *VAR_52 = (ispreqt7_t *)VAR_38;

  if (VAR_37 > sizeof (VAR_52->req_cdb)) {
   FUNC_32(VAR_36, VAR_18, "Command Length %u too long for this chip", VAR_37);
   FUNC_22(VAR_35, VAR_12);
   return (VAR_0);
  }

  VAR_52->req_nphdl = VAR_43->handle;
  VAR_52->req_tidlo = VAR_43->portid;
  VAR_52->req_tidhi = VAR_43->portid >> 16;
  VAR_52->req_vpidx = FUNC_6(VAR_36, FUNC_18(VAR_35));
  FUNC_28(VAR_52->req_lun, FUNC_0(FUNC_21(VAR_35)));
  if (FUNC_1(VAR_36, FUNC_18(VAR_35))->fctape_enabled && (VAR_43->prli_word3 & VAR_24)) {
   if (FUNC_2(VAR_36, &VAR_52->req_crn, VAR_35)) {
    FUNC_32(VAR_36, VAR_19,
        "%d.%d.%jx cannot generate next CRN",
        FUNC_18(VAR_35), VAR_44, (uintmax_t)FUNC_21(VAR_35));
    FUNC_22(VAR_35, VAR_10);
    return (VAR_1);
   }
  }
  VAR_42 = &VAR_52->req_time;
  VAR_40 = VAR_52->req_cdb;
 } else {
  ispreqt2_t *VAR_53 = (ispreqt2_t *)VAR_38;

  if (VAR_37 > sizeof VAR_53->req_cdb) {
   FUNC_32(VAR_36, VAR_18, "Command Length %u too long for this chip", VAR_37);
   FUNC_22(VAR_35, VAR_12);
   return (VAR_0);
  }
  if (FUNC_1(VAR_36, FUNC_18(VAR_35))->fctape_enabled && (VAR_43->prli_word3 & VAR_24)) {
   if (FUNC_2(VAR_36, &VAR_53->req_crn, VAR_35)) {
    FUNC_32(VAR_36, VAR_19,
        "%d.%d.%jx cannot generate next CRN",
        FUNC_18(VAR_35), VAR_44, (uintmax_t)FUNC_21(VAR_35));
    FUNC_22(VAR_35, VAR_10);
    return (VAR_1);
   }
  }
  if (FUNC_3(VAR_36)) {
   ispreqt2e_t *VAR_54 = (ispreqt2e_t *)VAR_38;
   VAR_54->req_target = VAR_43->handle;
   VAR_54->req_scclun = FUNC_21(VAR_35);
   VAR_42 = &VAR_54->req_time;
   VAR_40 = VAR_54->req_cdb;
  } else if (FUNC_4(VAR_36)) {
   VAR_53->req_target = VAR_43->handle;
   VAR_53->req_scclun = FUNC_21(VAR_35);
   VAR_42 = &VAR_53->req_time;
   VAR_40 = VAR_53->req_cdb;
  } else {
   VAR_53->req_target = VAR_43->handle;
   VAR_53->req_lun_trn = FUNC_21(VAR_35);
   VAR_42 = &VAR_53->req_time;
   VAR_40 = VAR_53->req_cdb;
  }
 }
 *VAR_42 = FUNC_26(VAR_35);
 FUNC_7(VAR_40, FUNC_17(VAR_35), VAR_37);


 VAR_39->req_handle = FUNC_29(VAR_36, VAR_35, VAR_14);
 if (VAR_39->req_handle == 0) {
  FUNC_32(VAR_36, VAR_19, "out of xflist pointers");
  FUNC_22(VAR_35, VAR_10);
  return (VAR_1);
 }







 VAR_45 = FUNC_5(VAR_36, VAR_35, VAR_39);
 if (VAR_45 != VAR_2) {
  FUNC_30(VAR_36, VAR_39->req_handle);




  return (VAR_45);
 }
 FUNC_36(VAR_36, VAR_35, VAR_15, "START cmd cdb[0]=0x%x datalen %ld", FUNC_17(VAR_35)[0], (long) FUNC_27(VAR_35));
 return (VAR_2);
}
