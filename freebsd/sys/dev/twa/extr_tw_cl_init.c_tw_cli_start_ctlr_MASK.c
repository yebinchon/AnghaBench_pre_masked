
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int ctlr_handle; void* fw_on_ctlr_build; void* fw_on_ctlr_branch; void* fw_on_ctlr_srl; int operating_mode; void* working_build; void* working_branch; void* working_srl; scalar_t__ arch_id; scalar_t__ max_simult_reqs; } ;
typedef int TW_UINT32 ;
typedef void* TW_UINT16 ;
typedef int TW_INT32 ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int ,int ,int,int,int ,char*,char*,...) ;
 int FUNC_3 (int,int ,int ,char*) ;
 int FUNC_4 (struct tw_cli_ctlr_context*) ;
 int FUNC_5 (struct tw_cli_ctlr_context*) ;
 int FUNC_6 (struct tw_cli_ctlr_context*) ;
 int FUNC_7 (struct tw_cli_ctlr_context*,void*,int ,void*,void*,void*,void*,void**,void**,void**,void**,int*) ;
 int FUNC_8 (struct tw_cli_ctlr_context*,int ,int ) ;
 int FUNC_9 () ;

TW_INT32
FUNC_10(struct tw_cli_ctlr_context *VAR_15)
{
 TW_UINT16 VAR_16 = 0;
 TW_UINT16 VAR_17 = 0;
 TW_UINT16 VAR_18 = 0;
 TW_UINT16 VAR_19 = 0;
 TW_UINT32 VAR_20 = 0;
 TW_INT32 VAR_21 = VAR_14;

 FUNC_3(3, VAR_15->ctlr_handle, FUNC_9(), "entered");


 if ((VAR_21 = FUNC_8(VAR_15,
   VAR_8,
   VAR_9))) {
  FUNC_2(VAR_15->ctlr_handle, VAR_10,
   VAR_11,
   0x1009, 0x1, VAR_12,
   "Microcontroller not ready",
   "error = %d", VAR_21);
  return(VAR_21);
 }

 if ((VAR_21 = FUNC_5(VAR_15))) {
  FUNC_2(VAR_15->ctlr_handle, VAR_10,
   VAR_11,
   0x100A, 0x1, VAR_12,
   "Can't drain response queue",
   "error = %d", VAR_21);
  return(VAR_21);
 }

 if ((VAR_21 = FUNC_7(VAR_15,
   (TW_UINT16)(VAR_15->max_simult_reqs),
   VAR_7, VAR_6,
   (TW_UINT16)(VAR_15->arch_id),
   FUNC_0(VAR_15->arch_id),
   FUNC_1(VAR_15->arch_id),
   &VAR_16, &VAR_17,
   &VAR_18, &VAR_19,
   &VAR_20))) {
  FUNC_2(VAR_15->ctlr_handle, VAR_10,
   VAR_11,
   0x100B, 0x2, VAR_13,
   "Can't initialize connection in current mode",
   "error = %d", VAR_21);
  return(VAR_21);
 }
 {



  if (VAR_20 & VAR_4) {

   if (VAR_20 & VAR_5) {
    VAR_15->working_srl = VAR_6;
    VAR_15->working_branch =
     FUNC_0(VAR_15->arch_id);
    VAR_15->working_build =
     FUNC_1(VAR_15->arch_id);
   } else {
    VAR_15->working_srl = VAR_16;
    VAR_15->working_branch = VAR_18;
    VAR_15->working_build = VAR_19;
   }
  } else {




   FUNC_2(VAR_15->ctlr_handle, VAR_10,
    VAR_11,
    0x1010, 0x2, VAR_13,
    "Driver/Firmware mismatch. "
    "Negotiating for base level...",
    " ");
   if ((VAR_21 = FUNC_7(VAR_15,
     (TW_UINT16)(VAR_15->max_simult_reqs),
     VAR_7,
     VAR_2,
     (TW_UINT16)(VAR_15->arch_id),
     VAR_0, VAR_1,
     &VAR_16, &VAR_17,
     &VAR_18, &VAR_19,
     &VAR_20))) {
    FUNC_2(VAR_15->ctlr_handle,
     VAR_10,
     VAR_11,
     0x1011, 0x1,
     VAR_12,
     "Can't initialize connection in "
     "base mode",
     " ");
    return(VAR_21);
   }
   if (!(VAR_20 & VAR_4)) {





    return(1);
   }




   VAR_15->working_srl = VAR_2;
   VAR_15->working_branch = VAR_0;
   VAR_15->working_build = VAR_1;
   VAR_15->operating_mode = VAR_3;
  }
  VAR_15->fw_on_ctlr_srl = VAR_16;
  VAR_15->fw_on_ctlr_branch = VAR_18;
  VAR_15->fw_on_ctlr_build = VAR_19;
 }


 if ((VAR_21 = FUNC_4(VAR_15)))




  FUNC_2(VAR_15->ctlr_handle, VAR_10,
   VAR_11,
   0x1014, 0x2, VAR_13,
   "Can't drain AEN queue",
   "error = %d", VAR_21);


 FUNC_6(VAR_15);

 return(VAR_14);
}
