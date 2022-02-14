
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_25__ ;
typedef struct TYPE_48__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int u_long ;
struct TYPE_51__ {int update; TYPE_2__* isp_devparam; } ;
typedef TYPE_3__ sdparam ;
typedef int lb ;
struct TYPE_49__ {int rqs_entry_type; int rqs_flags; } ;
struct TYPE_52__ {int req_scsi_status; int req_completion_status; int req_status_flags; int req_state_flags; scalar_t__ req_resid; scalar_t__ req_response_len; scalar_t__ req_sense_len; int req_handle; scalar_t__* req_sense_data; scalar_t__* req_response; TYPE_25__ req_header; } ;
typedef TYPE_4__ ispstatusreq_t ;
struct TYPE_53__ {int req_sense_data; } ;
typedef TYPE_5__ ispstatus_cont_t ;
struct TYPE_54__ {scalar_t__ isp_state; int isp_revision; scalar_t__ isp_resodx; int isp_dblev; int isp_respoutrp; int isp_result; scalar_t__ isp_residx; int isp_respinrp; } ;
typedef TYPE_6__ ispsoftc_t ;
typedef int isphdr_t ;
struct TYPE_48__ {int rqs_seqno; } ;
struct TYPE_55__ {int * req_handles; TYPE_1__ req_header; } ;
typedef TYPE_7__ isp_rio1_t ;
struct TYPE_56__ {int req_scsi_status; int req_completion_status; scalar_t__ req_resid; scalar_t__ req_response_len; scalar_t__ req_sense_len; scalar_t__* req_rsp_sense; } ;
typedef TYPE_8__ isp24xx_statusreq_t ;
typedef int XS_T ;
struct TYPE_50__ {int dev_refresh; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (TYPE_6__*,int,int) ;
 int FUNC_6 (char*,int,char*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;
 scalar_t__ FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,int ,scalar_t__,int,int) ;
 int VAR_14 ;
 int FUNC_14 (TYPE_6__*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
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
 TYPE_3__* FUNC_15 (TYPE_6__*,int) ;
 int VAR_37 ;
 int* FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *,scalar_t__*,scalar_t__) ;
 int FUNC_23 (int *,int ,int) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,scalar_t__) ;
 int* FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;
 int FUNC_29 (TYPE_6__*,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (TYPE_6__*,int ) ;
 int * FUNC_32 (TYPE_6__*,int ) ;
 int FUNC_33 (TYPE_6__*,TYPE_8__*,TYPE_8__*) ;
 int FUNC_34 (TYPE_6__*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_35 (TYPE_6__*,int *,TYPE_25__*) ;
 int FUNC_36 (TYPE_6__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_37 (TYPE_6__*,TYPE_7__*,TYPE_7__*) ;
 scalar_t__ FUNC_38 (TYPE_6__*,int,int *,scalar_t__*) ;
 int FUNC_39 (TYPE_6__*,TYPE_4__*,int *,scalar_t__*) ;
 int FUNC_40 (TYPE_6__*,TYPE_8__*,int *,scalar_t__*) ;
 int FUNC_41 (TYPE_6__*,char*,scalar_t__,int *) ;
 int FUNC_42 (TYPE_6__*,int,char*,...) ;
 int FUNC_43 (TYPE_6__*,int *,int ,char*,scalar_t__,char const*,int) ;
 int FUNC_44 (int,int) ;
 char* VAR_38 ;

void
FUNC_45(ispsoftc_t *VAR_39)
{
 XS_T *VAR_40, *VAR_41;
 uint8_t VAR_42[VAR_14];
 ispstatusreq_t *VAR_43 = (ispstatusreq_t *)VAR_42;
 isp24xx_statusreq_t *VAR_44 = (isp24xx_statusreq_t *)VAR_42;
 isphdr_t *VAR_45;
 uint8_t *VAR_46, *VAR_47;
 int VAR_48, VAR_49, VAR_50 = 0, VAR_51, VAR_52;
 int VAR_53, VAR_54, VAR_55;
 uint32_t VAR_56, VAR_57, VAR_58, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63, VAR_64;




 if (VAR_39->isp_state != VAR_13) {
  FUNC_42(VAR_39, VAR_9, "respq interrupt when not ready");
  return;
 }

 VAR_56 = FUNC_4(VAR_39, VAR_39->isp_respinrp);

 if (FUNC_8(VAR_39) || (FUNC_9(VAR_39) && VAR_39->isp_revision < 2)) {
  do {
   VAR_57 = VAR_56;
   VAR_56 = FUNC_4(VAR_39, VAR_39->isp_respinrp);
  } while (VAR_57 != VAR_56);
 }
 VAR_39->isp_residx = VAR_56;

 VAR_59 = VAR_39->isp_resodx;
 while (VAR_59 != VAR_56) {
  VAR_62 = VAR_58 = VAR_59;
  VAR_45 = (isphdr_t *) FUNC_3(VAR_39->isp_result, VAR_58);
  VAR_59 = FUNC_2(VAR_59, FUNC_14(VAR_39));




  FUNC_13(VAR_39, VAR_37, VAR_58, VAR_14, -1);
  if (VAR_39->isp_dblev & VAR_6)
   FUNC_41(VAR_39, "Response Queue Entry", VAR_58, VAR_45);
  FUNC_35(VAR_39, VAR_45, &VAR_43->req_header);
  VAR_51 = VAR_43->req_header.rqs_entry_type;


  if (VAR_50 > 0 && VAR_51 != VAR_35) {
   VAR_50 = 0;
   FUNC_30(VAR_41);
  }

  if (FUNC_10(VAR_39) && VAR_51 == VAR_32) {
   FUNC_33(VAR_39, (isp24xx_statusreq_t *)VAR_45, VAR_44);
   VAR_55 = VAR_44->req_scsi_status;
   VAR_49 = VAR_44->req_completion_status;
   VAR_53 = 0;
   if ((VAR_55 & 0xff) != 0)
    VAR_54 = VAR_28;
   else
    VAR_54 = 0;
   VAR_64 = VAR_44->req_resid;
  } else if (VAR_51 == VAR_32) {
   FUNC_36(VAR_39, (ispstatusreq_t *) VAR_45, VAR_43);
   VAR_55 = VAR_43->req_scsi_status;
   VAR_49 = VAR_43->req_completion_status;
   VAR_53 = VAR_43->req_status_flags;
   VAR_54 = VAR_43->req_state_flags;
   VAR_64 = VAR_43->req_resid;
  } else if (VAR_51 == VAR_33) {
   isp_rio1_t *VAR_65 = (isp_rio1_t *) VAR_42;
   FUNC_37(VAR_39, (isp_rio1_t *) VAR_45, VAR_65);
   for (VAR_52 = 0; VAR_52 < VAR_65->req_header.rqs_seqno; VAR_52++) {
    FUNC_31(VAR_39, VAR_65->req_handles[VAR_52]);
   }
   FUNC_1(VAR_45, VAR_14);
   continue;
  } else if (VAR_51 == VAR_34) {
   FUNC_42(VAR_39, VAR_8, "dropping RIO2 response");
   FUNC_1(VAR_45, VAR_14);
   continue;
  } else if (VAR_51 == VAR_35) {
   ispstatus_cont_t *VAR_66 = (ispstatus_cont_t *)VAR_42;
   FUNC_34(VAR_39, (ispstatus_cont_t *)VAR_45, VAR_66);
   if (VAR_50 > 0) {
    VAR_52 = FUNC_44(VAR_50, sizeof(VAR_66->req_sense_data));
    FUNC_23(VAR_41, VAR_66->req_sense_data, VAR_52);
    VAR_50 -= VAR_52;
    if (VAR_50 == 0) {
     FUNC_30(VAR_41);
    } else {
     FUNC_42(VAR_39, VAR_5|VAR_11,
         "Expecting Status Continuations for %u bytes",
         VAR_50);
    }
   } else {
    FUNC_42(VAR_39, VAR_12, "Ignored Continuation Response");
   }
   FUNC_1(VAR_45, VAR_14);
   continue;
  } else if (FUNC_38(VAR_39, VAR_51, VAR_45, &VAR_58)) {

   while (VAR_62 != VAR_58) {
    FUNC_1(VAR_45, VAR_14);
    VAR_62 = FUNC_2(VAR_62, FUNC_14(VAR_39));
    VAR_45 = (isphdr_t *)FUNC_3(VAR_39->isp_result, VAR_62);
   }
   FUNC_1(VAR_45, VAR_14);
   VAR_59 = FUNC_2(VAR_58, FUNC_14(VAR_39));
   continue;
  } else {

   FUNC_42(VAR_39, VAR_8, VAR_38, VAR_51, VAR_58, VAR_59);
   FUNC_1(VAR_45, VAR_14);
   continue;
  }

  VAR_48 = 0;
  if (VAR_43->req_header.rqs_flags & VAR_26) {
   if (VAR_43->req_header.rqs_flags & VAR_24) {
    FUNC_41(VAR_39, "unexpected continuation segment",
        VAR_58, VAR_45);
    continue;
   }
   if (VAR_43->req_header.rqs_flags & VAR_25) {
    FUNC_42(VAR_39, VAR_12, "internal queues full");



   }
   if (VAR_43->req_header.rqs_flags & VAR_21) {
    FUNC_41(VAR_39, "bad header flag",
        VAR_58, VAR_45);
    VAR_48++;
   }
   if (VAR_43->req_header.rqs_flags & VAR_23) {
    FUNC_41(VAR_39, "bad request packet",
        VAR_58, VAR_45);
    VAR_48++;
   }
   if (VAR_43->req_header.rqs_flags & VAR_20) {
    FUNC_41(VAR_39, "invalid entry count",
        VAR_58, VAR_45);
    VAR_48++;
   }
   if (VAR_43->req_header.rqs_flags & VAR_22) {
    FUNC_41(VAR_39, "invalid IOCB ordering",
        VAR_58, VAR_45);
    continue;
   }
  }

  VAR_40 = FUNC_32(VAR_39, VAR_43->req_handle);
  if (VAR_40 == ((void*)0)) {
   uint8_t VAR_67 = VAR_49 & 0xff;




   if (VAR_51 != VAR_32) {
    FUNC_42(VAR_39, VAR_8, "cannot find handle 0x%x (type 0x%x)", VAR_43->req_handle, VAR_51);
   } else if (VAR_67 != VAR_15 && VAR_67 != VAR_16) {
    FUNC_42(VAR_39, VAR_8, "cannot find handle 0x%x (status 0x%x)", VAR_43->req_handle, VAR_67);
   }
   FUNC_1(VAR_45, VAR_14);
   continue;
  }
  if (VAR_53 & VAR_30) {
   FUNC_42(VAR_39, VAR_12, "%d.%d.%jx bus was reset",
       FUNC_17(VAR_40), FUNC_27(VAR_40), (uintmax_t)FUNC_20(VAR_40));
   FUNC_24(VAR_40, VAR_2);
   FUNC_5(VAR_39, FUNC_17(VAR_40), 1);
  }
  if (VAR_48) {
   FUNC_42(VAR_39, VAR_12, "%d.%d.%jx buddaboom",
       FUNC_17(VAR_40), FUNC_27(VAR_40), (uintmax_t)FUNC_20(VAR_40));
   FUNC_24(VAR_40, VAR_1);
  }

  VAR_46 = VAR_47 = ((void*)0);
  VAR_60 = VAR_61 = VAR_63 = 0;
  if (FUNC_10(VAR_39) && (VAR_55 & (VAR_18|VAR_19)) != 0) {
   VAR_46 = VAR_44->req_rsp_sense;
   VAR_60 = VAR_44->req_response_len;
  } else if (FUNC_11(VAR_39) && (VAR_55 & VAR_18) != 0) {
   VAR_46 = VAR_43->req_response;
   VAR_60 = VAR_43->req_response_len;
  }
  if (FUNC_11(VAR_39) && (VAR_55 & VAR_19) != 0) {





   VAR_54 |= VAR_28|VAR_27;
   if (FUNC_10(VAR_39)) {
    VAR_47 = VAR_44->req_rsp_sense;
    VAR_47 += VAR_60;
    VAR_63 = VAR_44->req_sense_len;
    VAR_61 = sizeof(VAR_44->req_rsp_sense) - VAR_60;
   } else {
    VAR_47 = VAR_43->req_sense_data;
    VAR_63 = VAR_43->req_sense_len;
    VAR_61 = sizeof(VAR_43->req_sense_data);
   }
  } else if (FUNC_12(VAR_39) && (VAR_54 & VAR_27)) {
   VAR_47 = VAR_43->req_sense_data;
   VAR_63 = VAR_43->req_sense_len;
   VAR_61 = sizeof (VAR_43->req_sense_data);
  }
  if (VAR_61 > VAR_63)
   VAR_61 = VAR_63;
  if (VAR_54 & VAR_28)
   *FUNC_26(VAR_40) = VAR_55 & 0xff;

  if (VAR_60 >= 4 && VAR_46[VAR_0] != 0) {
   const char *VAR_68;
   char VAR_69[64];
   const char *VAR_70[10] = {
       "Task Management function complete",
       "FCP_DATA length different than FCP_BURST_LEN",
       "FCP_CMND fields invalid",
       "FCP_DATA parameter mismatch with FCP_DATA_RO",
       "Task Management function rejected",
       "Task Management function failed",
       ((void*)0),
       ((void*)0),
       "Task Management function succeeded",
       "Task Management function incorrect logical unit number",
   };
   uint8_t VAR_71 = VAR_46[VAR_0];
   if (VAR_71 >= 10 || VAR_70[VAR_71] == ((void*)0)) {
    FUNC_6(VAR_69, sizeof(VAR_69),
        "Unknown FCP Response Code 0x%x", VAR_71);
    VAR_68 = VAR_69;
   } else {
    VAR_68 = VAR_70[VAR_71];
   }
   FUNC_43(VAR_39, VAR_40, VAR_10,
       "FCP RESPONSE, LENGTH %u: %s CDB0=0x%02x",
       VAR_60, VAR_68, FUNC_16(VAR_40)[0] & 0xff);
   if (VAR_71 != 0 && VAR_71 != 8)
    FUNC_24(VAR_40, VAR_1);
  }
  if (FUNC_10(VAR_39))
   FUNC_40(VAR_39, VAR_44, VAR_40, &VAR_64);
  else
   FUNC_39(VAR_39, VAR_43, VAR_40, &VAR_64);
  if ((FUNC_21(VAR_40) || FUNC_18(VAR_40) == VAR_3) &&
      (*FUNC_26(VAR_40) == VAR_36))
   FUNC_24(VAR_40, VAR_4);
  if (FUNC_12(VAR_39)) {
   FUNC_25(VAR_40, VAR_64);





   if (VAR_53 & VAR_31) {
    int VAR_72 = FUNC_27(VAR_40);
    sdparam *VAR_73 = FUNC_15(VAR_39, FUNC_17(VAR_40));
    VAR_73->isp_devparam[VAR_72].dev_refresh = 1;
    VAR_73->update = 1;
   }
  } else {
   if (VAR_53 & VAR_29) {
    FUNC_25(VAR_40, 0);
   } else if (VAR_55 & VAR_17) {
    FUNC_25(VAR_40, VAR_64);
   } else {
    FUNC_25(VAR_40, 0);
   }
  }
  if (VAR_61 > 0) {
   FUNC_22(VAR_40, VAR_47, VAR_61);
   if (VAR_63 > VAR_61) {
    VAR_50 = VAR_63 - VAR_61;
    VAR_41 = VAR_40;
    FUNC_42(VAR_39, VAR_5|VAR_11,
        "Expecting Status Continuations for %u bytes",
        VAR_50);
   }
  }
  FUNC_42(VAR_39, VAR_7, "asked for %lu got raw resid %lu settled for %lu",
      (u_long)FUNC_28(VAR_40), (u_long)VAR_64, (u_long)FUNC_19(VAR_40));

  if (FUNC_28(VAR_40))
   FUNC_0(VAR_39, VAR_40, VAR_43->req_handle);
  FUNC_29(VAR_39, VAR_43->req_handle);

  FUNC_1(VAR_45, VAR_14);


  if (VAR_50 == 0)
   FUNC_30(VAR_40);
 }


 if (VAR_50 > 0)
  FUNC_30(VAR_41);


 if (VAR_59 != VAR_39->isp_resodx) {
  FUNC_7(VAR_39, VAR_39->isp_respoutrp, VAR_59);
  VAR_39->isp_resodx = VAR_59;
 }
}
