
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_18__ ;
typedef struct TYPE_47__ TYPE_17__ ;
typedef struct TYPE_46__ TYPE_16__ ;
typedef struct TYPE_45__ TYPE_15__ ;
typedef struct TYPE_44__ TYPE_14__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_56__ {scalar_t__ isp_reqidx; scalar_t__ isp_reqodx; int isp_dblev; int isp_rquest; int isp_rqstoutrp; } ;
typedef TYPE_8__ ispsoftc_t ;
struct TYPE_57__ {scalar_t__ req_dl; scalar_t__ req_seg_count; scalar_t__ req_alen_datadir; int req_dataseg; } ;
typedef TYPE_9__ ispreqt7_t ;
struct TYPE_40__ {scalar_t__ req_flags; scalar_t__ req_totalcnt; scalar_t__ req_seg_count; int * req_dataseg; } ;
typedef TYPE_10__ ispreqt3_t ;
struct TYPE_41__ {scalar_t__ req_flags; scalar_t__ req_totalcnt; scalar_t__ req_seg_count; int * req_dataseg; } ;
typedef TYPE_11__ ispreqt2_t ;
struct TYPE_42__ {scalar_t__ req_flags; scalar_t__ req_seg_count; int * req_dataseg; } ;
typedef TYPE_12__ ispreq_t ;
struct TYPE_43__ {int rqs_entry_type; int rqs_entry_count; } ;
typedef TYPE_13__ isphdr_t ;
struct TYPE_44__ {scalar_t__ req_seg_count; } ;
typedef TYPE_14__ ispextreq_t ;
typedef int ispds_t ;
typedef int ispds64_t ;
struct TYPE_50__ {int rqs_entry_count; int rqs_entry_type; } ;
struct TYPE_45__ {int * req_dataseg; TYPE_2__ req_header; } ;
typedef TYPE_15__ ispcontreq_t ;
struct TYPE_49__ {int rqs_entry_count; int rqs_entry_type; } ;
struct TYPE_46__ {int * req_dataseg; TYPE_1__ req_header; } ;
typedef TYPE_16__ ispcontreq64_t ;
typedef scalar_t__ isp_ddir_t ;
struct TYPE_54__ {int ds; } ;
struct TYPE_55__ {TYPE_6__ m0; } ;
struct TYPE_47__ {int ct_flags; int ct_seg_count; TYPE_7__ rsp; } ;
typedef TYPE_17__ ct7_entry_t ;
struct TYPE_51__ {int * ct_dataseg64; int * ct_dataseg; } ;
struct TYPE_52__ {TYPE_3__ u; } ;
struct TYPE_53__ {TYPE_4__ m0; } ;
struct TYPE_48__ {int ct_flags; int ct_seg_count; TYPE_5__ rsp; } ;
typedef TYPE_18__ ct2_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_8__*,scalar_t__) ;
 int FUNC_1 (TYPE_8__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 void* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_8__*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

 int VAR_19 ;




 int VAR_20 ;




 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ,void*,int ) ;
 int FUNC_8 (int ,void*,int ) ;
 int FUNC_9 (void*,scalar_t__) ;
 void* FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (TYPE_8__*,char*,int,void*) ;
 int FUNC_12 (TYPE_8__*,TYPE_16__*,void*) ;
 int FUNC_13 (TYPE_8__*,TYPE_15__*,void*) ;
 int FUNC_14 (TYPE_8__*,void*,void*) ;
 int FUNC_15 (TYPE_8__*,void*,void*) ;
 int FUNC_16 (TYPE_8__*,void*,void*) ;
 int FUNC_17 (TYPE_8__*,void*,void*) ;
 int FUNC_18 (TYPE_8__*,void*,void*) ;
 int FUNC_19 (TYPE_8__*,void*,void*) ;
 int FUNC_20 (TYPE_8__*,void*,void*) ;
 int FUNC_21 (TYPE_8__*,void*,void*) ;
 int FUNC_22 (TYPE_8__*,void*,void*) ;
 int FUNC_23 (TYPE_8__*,void*,void*) ;

int
FUNC_24(ispsoftc_t *VAR_21, void *VAR_22, void *VAR_23, uint32_t VAR_24, uint32_t VAR_25, isp_ddir_t VAR_26, ispds64_t *VAR_27)
{
 uint8_t VAR_28[VAR_16];
 uint8_t VAR_29, VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 ispds_t *VAR_37 = ((void*)0);
 ispds64_t *VAR_38 = ((void*)0);
 void *VAR_39, *VAR_40;

 VAR_39 = FUNC_10(VAR_21);
 if (VAR_39 == ((void*)0)) {
  return (VAR_1);
 }
 VAR_34 = FUNC_3(VAR_21->isp_reqidx, FUNC_6(VAR_21));

 VAR_29 = ((isphdr_t *)VAR_22)->rqs_entry_type;
 VAR_30 = 1;




 if (VAR_26 == VAR_11) {
  if (VAR_29 == 130 || VAR_29 == 129) {
   VAR_36 = VAR_4;
  } else {
   VAR_36 = 0;
  }
  goto copy_and_sync;
 }

 VAR_31 = 0;
 for (VAR_32 = 0; VAR_32 < VAR_24; VAR_32++)
  VAR_31 |= FUNC_9(VAR_23, VAR_32);
 if (VAR_31) {
  if (VAR_29 == 130)
   ((isphdr_t *)VAR_22)->rqs_entry_type = VAR_29 = 129;
  else if (VAR_29 == 131)
   ((isphdr_t *)VAR_22)->rqs_entry_type = VAR_29 = 136;
  else if (VAR_29 == 134)
   ((isphdr_t *)VAR_22)->rqs_entry_type = VAR_29 = 133;
 }





 switch (VAR_29) {
 case 131:
  VAR_36 = (VAR_26 == VAR_15)? VAR_18 : VAR_17;
  VAR_37 = ((ispreq_t *)VAR_22)->req_dataseg;
  VAR_33 = VAR_12;
  break;
 case 135:
  VAR_36 = (VAR_26 == VAR_15)? VAR_18 : VAR_17;
  VAR_33 = 0;
  break;
 case 130:
  VAR_36 = (VAR_26 == VAR_15)? VAR_18 : VAR_17;
  VAR_37 = ((ispreqt2_t *)VAR_22)->req_dataseg;
  VAR_33 = VAR_13;
  break;
 case 136:
  VAR_36 = (VAR_26 == VAR_15)? VAR_18 : VAR_17;
  VAR_38 = ((ispreqt3_t *)VAR_22)->req_dataseg;
  VAR_33 = VAR_14;
  break;
 case 129:
  VAR_36 = (VAR_26 == VAR_15)? VAR_18 : VAR_17;
  VAR_38 = ((ispreqt3_t *)VAR_22)->req_dataseg;
  VAR_33 = VAR_14;
  break;
 case 128:
  VAR_36 = (VAR_26 == VAR_15)? VAR_7 : VAR_6;
  VAR_38 = &((ispreqt7_t *)VAR_22)->req_dataseg;
  VAR_33 = 1;
  break;
 default:
  return (VAR_0);
 }
 if (VAR_33 > VAR_24)
  VAR_33 = VAR_24;
 VAR_32 = 0;
 while (VAR_32 < VAR_33) {
  if (VAR_38) {
   FUNC_7(VAR_38++, VAR_23, VAR_32++);
  } else {
   FUNC_8(VAR_37++, VAR_23, VAR_32++);
  }
 }




 while (VAR_32 < VAR_24) {
  VAR_35 = FUNC_3(VAR_34, FUNC_6(VAR_21));
  if (VAR_35 == VAR_21->isp_reqodx) {
   VAR_21->isp_reqodx = FUNC_5(VAR_21, VAR_21->isp_rqstoutrp);
   if (VAR_35 == VAR_21->isp_reqodx)
    return (VAR_1);
  }
  FUNC_2(VAR_28, VAR_16);
  VAR_40 = FUNC_4(VAR_21->isp_rquest, VAR_34);
  VAR_34 = VAR_35;
  if (VAR_38) {
   ispcontreq64_t *VAR_41 = (ispcontreq64_t *) VAR_28;
   VAR_33 = VAR_9;
   VAR_41->req_header.rqs_entry_type = VAR_19;
   VAR_41->req_header.rqs_entry_count = 1;
   VAR_38 = VAR_41->req_dataseg;
  } else {
   ispcontreq_t *VAR_42 = (ispcontreq_t *) VAR_28;
   VAR_33 = VAR_8;
   VAR_42->req_header.rqs_entry_type = VAR_20;
   VAR_42->req_header.rqs_entry_count = 1;
   VAR_37 = VAR_42->req_dataseg;
  }
  VAR_33 += VAR_32;
  if (VAR_33 > VAR_24)
   VAR_33 = VAR_24;
  while (VAR_32 < VAR_33) {
   if (VAR_38) {
    FUNC_7(VAR_38++, VAR_23, VAR_32++);
   } else {
    FUNC_8(VAR_37++, VAR_23, VAR_32++);
   }
  }
  if (VAR_38) {
   FUNC_12(VAR_21, (ispcontreq64_t *)VAR_28, VAR_40);
  } else {
   FUNC_13(VAR_21, (ispcontreq_t *)VAR_28, VAR_40);
  }
  if (VAR_21->isp_dblev & VAR_10) {
   FUNC_11(VAR_21, "additional queue entry",
       VAR_16, VAR_40);
  }
  VAR_30++;
        }

copy_and_sync:
 ((isphdr_t *)VAR_22)->rqs_entry_count = VAR_30;
 switch (VAR_29) {
 case 131:
  ((ispreq_t *)VAR_22)->req_flags |= VAR_36;

  if (VAR_24 == 0)
   VAR_24 = 1;
  ((ispreq_t *)VAR_22)->req_seg_count = VAR_24;
  FUNC_18(VAR_21, VAR_22, VAR_39);
  break;
 case 135:
  ((ispreq_t *)VAR_22)->req_flags |= VAR_36;

  if (VAR_24 == 0)
   VAR_24 = 1;
  ((ispextreq_t *)VAR_22)->req_seg_count = VAR_24;
  FUNC_17(VAR_21, VAR_22, VAR_39);
  break;
 case 130:
  ((ispreqt2_t *)VAR_22)->req_flags |= VAR_36;
  ((ispreqt2_t *)VAR_22)->req_seg_count = VAR_24;
  ((ispreqt2_t *)VAR_22)->req_totalcnt = VAR_25;
  if (FUNC_1(VAR_21)) {
   FUNC_20(VAR_21, VAR_22, VAR_39);
  } else {
   FUNC_19(VAR_21, VAR_22, VAR_39);
  }
  break;
 case 136:
 case 129:
  ((ispreqt3_t *)VAR_22)->req_flags |= VAR_36;
  ((ispreqt3_t *)VAR_22)->req_seg_count = VAR_24;
  ((ispreqt3_t *)VAR_22)->req_totalcnt = VAR_25;
  if (FUNC_1(VAR_21)) {
   FUNC_22(VAR_21, VAR_22, VAR_39);
  } else {
   FUNC_21(VAR_21, VAR_22, VAR_39);
  }
  break;
 case 128:
  ((ispreqt7_t *)VAR_22)->req_alen_datadir = VAR_36;
  ((ispreqt7_t *)VAR_22)->req_seg_count = VAR_24;
  ((ispreqt7_t *)VAR_22)->req_dl = VAR_25;
  FUNC_23(VAR_21, VAR_22, VAR_39);
  break;
 default:
  return (VAR_0);
 }
 if (VAR_21->isp_dblev & VAR_10) {
  FUNC_11(VAR_21, "first queue entry", VAR_16, VAR_39);
 }
 FUNC_0(VAR_21, VAR_34);
 return (VAR_2);
}
