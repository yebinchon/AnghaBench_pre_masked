
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_29__ {int* param; } ;
typedef TYPE_1__ mbreg_t ;
struct TYPE_30__ {int isp_revision; int isp_confopts; int isp_dblev; int isp_state; scalar_t__ isp_resodx; scalar_t__ isp_residx; scalar_t__ isp_reqodx; scalar_t__ isp_reqidx; scalar_t__ isp_result_dma; scalar_t__ isp_rquest_dma; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_31__ {int icb_fwoptions; scalar_t__ icb_maxfrmlen; int icb_maxalloc; int icb_execthrottle; scalar_t__ icb_hardaddr; int icb_xfwoptions; int icb_idelaytimer; int icb_zfwoptions; int icb_lunenables; int icb_ccnt; int icb_icnt; int icb_rqstqlen; int icb_rsltqlen; void** icb_respaddr; void** icb_rqstaddr; int icb_portname; int icb_nodename; int icb_lunetimeout; int icb_logintime; int icb_retry_count; int icb_retry_delay; int icb_version; } ;
typedef TYPE_3__ isp_icb_t ;
struct TYPE_32__ {int role; int isp_fwoptions; int isp_maxalloc; scalar_t__ isp_loopid; int isp_xfwoptions; int fctape_enabled; int isp_zfwoptions; int isp_wwnn; int isp_wwpn; int isp_scratch; scalar_t__ isp_scdma; int isp_retry_count; int isp_retry_delay; } ;
typedef TYPE_4__ fcparam ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 TYPE_4__* FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
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




 int const VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;



 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;


 int VAR_34 ;


 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_10 (TYPE_2__*,int,int,int) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_11 (TYPE_3__*,int) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 scalar_t__ VAR_45 ;
 int FUNC_15 (int ,int) ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_16 (TYPE_1__*,int ,int ,int) ;
 int FUNC_17 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_18 (TYPE_2__*) ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 int FUNC_19 (TYPE_2__*) ;
 int VAR_54 ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_21 (TYPE_2__*,char*,int,int) ;
 int FUNC_22 (TYPE_2__*,int,char*,...) ;
 int FUNC_23 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int VAR_55 ;

__attribute__((used)) static void
FUNC_24(ispsoftc_t *VAR_56)
{
 fcparam *VAR_57;
 isp_icb_t VAR_58, *VAR_59 = &VAR_58;
 mbreg_t VAR_60;
 int VAR_61;




 VAR_57 = FUNC_6(VAR_56, 0);
 if (VAR_57->role == VAR_42)
  return;

 VAR_56->isp_state = VAR_37;
 FUNC_11(VAR_59, sizeof (*VAR_59));
 VAR_59->icb_version = VAR_23;
 VAR_59->icb_fwoptions = VAR_57->isp_fwoptions;
 if (FUNC_12(VAR_56) && VAR_56->isp_revision < 5) {
  VAR_59->icb_fwoptions &= ~VAR_2;
 }






 if (!FUNC_10(VAR_56, 1, 17, 0)) {
  VAR_59->icb_fwoptions |= VAR_4;
 }




 VAR_59->icb_fwoptions |= VAR_7;




 if (VAR_57->role & VAR_43) {
  VAR_59->icb_fwoptions |= VAR_8;
 } else {
  VAR_59->icb_fwoptions &= ~VAR_8;
 }






 if ((VAR_57->role & VAR_41) || FUNC_12(VAR_56) || FUNC_13(VAR_56)) {
  VAR_59->icb_fwoptions &= ~VAR_6;
 } else {
  VAR_59->icb_fwoptions |= VAR_6;
 }

 VAR_59->icb_maxfrmlen = FUNC_1(VAR_56);
 if (VAR_59->icb_maxfrmlen < VAR_22 || VAR_59->icb_maxfrmlen > VAR_21) {
  FUNC_22(VAR_56, VAR_40, "bad frame length (%d) from NVRAM- using %d", FUNC_1(VAR_56), VAR_17);
  VAR_59->icb_maxfrmlen = VAR_17;
 }
 VAR_59->icb_maxalloc = VAR_57->isp_maxalloc;
 if (VAR_59->icb_maxalloc < 1) {
  FUNC_22(VAR_56, VAR_40, "bad maximum allocation (%d)- using 16", VAR_57->isp_maxalloc);
  VAR_59->icb_maxalloc = 16;
 }
 VAR_59->icb_execthrottle = FUNC_0(VAR_56);
 if (VAR_59->icb_execthrottle < 1) {
  FUNC_22(VAR_56, VAR_40, "bad execution throttle of %d- using %d", FUNC_0(VAR_56), VAR_18);
  VAR_59->icb_execthrottle = VAR_18;
 }
 VAR_59->icb_retry_delay = VAR_57->isp_retry_delay;
 VAR_59->icb_retry_count = VAR_57->isp_retry_count;
 VAR_59->icb_hardaddr = VAR_57->isp_loopid;
 VAR_61 = (VAR_56->isp_confopts & VAR_35) != 0;
 if (VAR_59->icb_hardaddr >= VAR_45) {
  VAR_59->icb_hardaddr = 0;
  VAR_61 = 0;
 }





 if (VAR_61 || FUNC_10(VAR_56, 2, 2, 5)) {
  VAR_59->icb_fwoptions |= VAR_5;
 }







 if (FUNC_12(VAR_56)) {




  VAR_59->icb_fwoptions &= ~VAR_3;
 } else if (FUNC_13(VAR_56) || FUNC_14(VAR_56)) {
  VAR_59->icb_fwoptions |= VAR_1;

  VAR_59->icb_xfwoptions = VAR_57->isp_xfwoptions;

  if (FUNC_9(VAR_56)) {
   if (VAR_56->isp_confopts & VAR_34)
    VAR_59->icb_xfwoptions &= ~VAR_9;

   if (VAR_56->isp_confopts & VAR_33)
    VAR_59->icb_xfwoptions |= VAR_9;

   if (VAR_59->icb_xfwoptions & VAR_9) {
    VAR_59->icb_fwoptions &= ~VAR_4;
    VAR_59->icb_xfwoptions |= VAR_10|VAR_11;
    FUNC_6(VAR_56, 0)->fctape_enabled = 1;
   } else {
    FUNC_6(VAR_56, 0)->fctape_enabled = 0;
   }
  } else {
   VAR_59->icb_xfwoptions &= ~VAR_9;
   FUNC_6(VAR_56, 0)->fctape_enabled = 0;
  }




  switch (VAR_56->isp_confopts & VAR_36) {
  case 130:
   VAR_59->icb_xfwoptions &= ~VAR_14;
   VAR_59->icb_xfwoptions |= 137;
   break;
  case 128:
   VAR_59->icb_xfwoptions &= ~VAR_14;
   VAR_59->icb_xfwoptions |= 135;
   break;
  case 131:
   VAR_59->icb_xfwoptions &= ~VAR_14;
   VAR_59->icb_xfwoptions |= 138;
   break;
  case 129:
   VAR_59->icb_xfwoptions &= ~VAR_14;
   VAR_59->icb_xfwoptions |= 136;
   break;
  default:

   switch (VAR_59->icb_xfwoptions & VAR_14) {
   case 136:
   case 135:
   case 137:
   case 138:
    break;
   default:
    VAR_59->icb_xfwoptions &= ~VAR_14;
    VAR_59->icb_xfwoptions |= 138;
   }
   break;
  }
  if (FUNC_13(VAR_56)) {
   VAR_59->icb_xfwoptions &= ~VAR_12;
   VAR_59->icb_fwoptions &= ~VAR_3;
  } else {






   VAR_59->icb_fwoptions &= ~VAR_3;
   if ((VAR_57->isp_xfwoptions & VAR_13) == VAR_15) {
    VAR_59->icb_xfwoptions |= VAR_15;
    VAR_59->icb_idelaytimer = 10;
   }
   VAR_59->icb_zfwoptions = VAR_57->isp_zfwoptions;
   if (VAR_56->isp_confopts & VAR_31) {
    VAR_59->icb_zfwoptions &= ~VAR_16;
    VAR_59->icb_zfwoptions |= 134;
   } else if (VAR_56->isp_confopts & VAR_32) {
    VAR_59->icb_zfwoptions &= ~VAR_16;
    VAR_59->icb_zfwoptions |= 133;
   } else {
    switch (VAR_59->icb_zfwoptions & VAR_16) {
    case 134:
    case 133:
    case 132:
     break;
    default:
     VAR_59->icb_zfwoptions &= ~VAR_16;
     VAR_59->icb_zfwoptions |= 132;
     break;
    }
   }
  }
 }





 if (FUNC_10(VAR_56, 2, 26, 0)) {
  FUNC_16(&VAR_60, VAR_49, VAR_46, 0);
  VAR_60.param[1] = VAR_25|VAR_28|VAR_29;
  VAR_60.param[2] = 0;
  VAR_60.param[3] = 0;
  if (FUNC_10(VAR_56, 3, 16, 0)) {
   VAR_60.param[1] |= VAR_27|VAR_24;
   if (VAR_57->role & VAR_43) {
    if (FUNC_10(VAR_56, 3, 25, 0)) {
     VAR_60.param[1] |= VAR_26;
    }
    VAR_60.param[3] = VAR_30;
   }
  }
  FUNC_20(VAR_56, &VAR_60);
  if (VAR_60.param[0] != VAR_47) {
   return;
  }
 }
 VAR_59->icb_logintime = VAR_19;
 if (VAR_57->isp_wwnn && VAR_57->isp_wwpn) {
  VAR_59->icb_fwoptions |= VAR_0;
  FUNC_15(VAR_59->icb_nodename, VAR_57->isp_wwnn);
  FUNC_15(VAR_59->icb_portname, VAR_57->isp_wwpn);
  FUNC_22(VAR_56, VAR_39,
      "Setting ICB Node 0x%08x%08x Port 0x%08x%08x",
      ((uint32_t) (VAR_57->isp_wwnn >> 32)),
      ((uint32_t) (VAR_57->isp_wwnn)),
      ((uint32_t) (VAR_57->isp_wwpn >> 32)),
      ((uint32_t) (VAR_57->isp_wwpn)));
 } else if (VAR_57->isp_wwpn) {
  VAR_59->icb_fwoptions &= ~VAR_0;
  FUNC_15(VAR_59->icb_portname, VAR_57->isp_wwpn);
  FUNC_22(VAR_56, VAR_39,
      "Setting ICB Port 0x%08x%08x",
      ((uint32_t) (VAR_57->isp_wwpn >> 32)),
      ((uint32_t) (VAR_57->isp_wwpn)));
 } else {
  FUNC_22(VAR_56, VAR_40, "No valid WWNs to use");
  return;
 }
 VAR_59->icb_rqstqlen = FUNC_19(VAR_56);
 if (VAR_59->icb_rqstqlen < 1) {
  FUNC_22(VAR_56, VAR_40, "bad request queue length");
 }
 VAR_59->icb_rsltqlen = FUNC_18(VAR_56);
 if (VAR_59->icb_rsltqlen < 1) {
  FUNC_22(VAR_56, VAR_40, "bad result queue length");
 }
 VAR_59->icb_rqstaddr[VAR_50] = FUNC_2(VAR_56->isp_rquest_dma);
 VAR_59->icb_rqstaddr[VAR_51] = FUNC_3(VAR_56->isp_rquest_dma);
 VAR_59->icb_rqstaddr[VAR_52] = FUNC_4(VAR_56->isp_rquest_dma);
 VAR_59->icb_rqstaddr[VAR_53] = FUNC_5(VAR_56->isp_rquest_dma);
 VAR_59->icb_respaddr[VAR_50] = FUNC_2(VAR_56->isp_result_dma);
 VAR_59->icb_respaddr[VAR_51] = FUNC_3(VAR_56->isp_result_dma);
 VAR_59->icb_respaddr[VAR_52] = FUNC_4(VAR_56->isp_result_dma);
 VAR_59->icb_respaddr[VAR_53] = FUNC_5(VAR_56->isp_result_dma);

 if (FUNC_7(VAR_56, 0)) {
  FUNC_22(VAR_56, VAR_40, VAR_55);
  return;
 }
 FUNC_22(VAR_56, VAR_38, "isp_fibre_init: fwopt 0x%x xfwopt 0x%x zfwopt 0x%x",
     VAR_59->icb_fwoptions, VAR_59->icb_xfwoptions, VAR_59->icb_zfwoptions);

 FUNC_23(VAR_56, VAR_59, (isp_icb_t *)VAR_57->isp_scratch);
 if (VAR_56->isp_dblev & VAR_39) {
  FUNC_21(VAR_56, "isp_fibre_init",
      sizeof(*VAR_59), VAR_57->isp_scratch);
 }




 FUNC_16(&VAR_60, VAR_48, VAR_46, 30000000);
 VAR_60.param[1] = 0;
 VAR_60.param[2] = FUNC_3(VAR_57->isp_scdma);
 VAR_60.param[3] = FUNC_2(VAR_57->isp_scdma);
 VAR_60.param[6] = FUNC_5(VAR_57->isp_scdma);
 VAR_60.param[7] = FUNC_4(VAR_57->isp_scdma);
 FUNC_22(VAR_56, VAR_38, "INIT F/W from %p (%08x%08x)",
     VAR_57->isp_scratch, (uint32_t) ((uint64_t)VAR_57->isp_scdma >> 32),
     (uint32_t) VAR_57->isp_scdma);
 FUNC_17(VAR_56, VAR_54, 0, sizeof (*VAR_59), 0);
 FUNC_20(VAR_56, &VAR_60);
 FUNC_8(VAR_56, 0);
 if (VAR_60.param[0] != VAR_47)
  return;
 VAR_56->isp_reqidx = 0;
 VAR_56->isp_reqodx = 0;
 VAR_56->isp_residx = 0;
 VAR_56->isp_resodx = 0;




 VAR_56->isp_state = VAR_44;
}
