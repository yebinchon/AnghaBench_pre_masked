
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int ;
typedef int u_char ;
struct ccb_scsiio {int sense_resid; int resid; scalar_t__ scsi_status; int sense_len; scalar_t__ sense_data; } ;
typedef TYPE_2__* hcb_p ;
typedef TYPE_3__* ccb_p ;
struct TYPE_16__ {scalar_t__ host_status; scalar_t__ ssss_status; int host_flags; scalar_t__ xerr_status; int sv_resid; scalar_t__ sv_scsi_status; scalar_t__ sv_xerr_status; scalar_t__ dmamapped; int link_ccbq; int dmamap; int lun; int target; int sns_bbuf; TYPE_1__* cam_ccb; } ;
struct TYPE_15__ {int squeue_ba; int comp_ccbq; int data_dmat; } ;
struct TYPE_14__ {struct ccb_scsiio csio; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_7 (int ,scalar_t__*,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__*,int) ;
 int VAR_22 ;
 int FUNC_10 (char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int VAR_23 ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ,int) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*,int,int ,int ,int) ;
 int FUNC_14 (TYPE_2__*,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (TYPE_3__*,scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (union ccb*,int ) ;
 scalar_t__ VAR_24 ;
 int FUNC_19 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_20 (hcb_p VAR_25, ccb_p VAR_26)
{
 struct ccb_scsiio *VAR_27;
 u_int VAR_28;
 int VAR_29, VAR_30;

 FUNC_6(VAR_17);




 if (!VAR_26 || !VAR_26->cam_ccb)
  return;

 if (VAR_9 & (VAR_11|VAR_10)) {
  FUNC_10 ("CCB=%lx STAT=%x/%x/%x DEV=%d/%d\n", (unsigned long)VAR_26,
   VAR_26->host_status, VAR_26->ssss_status, VAR_26->host_flags,
   VAR_26->target, VAR_26->lun);
  FUNC_1(100);
 }




 VAR_27 = &VAR_26->cam_ccb->csio;




 if (VAR_26->xerr_status) {
  if (VAR_24)
   FUNC_16(VAR_26, VAR_26->xerr_status);
  if (VAR_26->host_status == VAR_13)
   VAR_26->host_status = VAR_14;
 }




 VAR_27->sense_resid = 0;
 VAR_27->resid = FUNC_12(VAR_25, VAR_26);

 if (!VAR_18) {
  VAR_27->resid = 0;
  VAR_26->sv_resid = 0;
 }

 if (VAR_26->host_flags & VAR_12) {
  VAR_27->scsi_status = VAR_26->sv_scsi_status;
  VAR_27->sense_resid = VAR_27->resid;
  VAR_27->resid = VAR_26->sv_resid;
  VAR_26->sv_resid = 0;
  if (VAR_24 && VAR_26->sv_xerr_status)
   FUNC_16(VAR_26, VAR_26->sv_xerr_status);
  if (VAR_26->host_status == VAR_13 &&
      VAR_26->ssss_status == VAR_21 &&
      VAR_26->xerr_status == 0) {
   VAR_28 = FUNC_19(VAR_6,
        VAR_26->sv_xerr_status);
   VAR_28 |= VAR_3;




   FUNC_9(&VAR_27->sense_data, sizeof(VAR_27->sense_data));
   VAR_30 = VAR_20 - VAR_27->sense_resid;
   if (VAR_30 < VAR_27->sense_len)
    VAR_27->sense_resid = VAR_27->sense_len -
        VAR_30;
   else
    VAR_27->sense_resid = 0;
   FUNC_7(VAR_26->sns_bbuf, &VAR_27->sense_data,
       FUNC_2(VAR_27->sense_len, VAR_30));
  }
  else
   VAR_28 = VAR_2;
 }
 else if (VAR_26->host_status == VAR_13) {
  VAR_27->scsi_status = VAR_26->ssss_status;
  VAR_28 = VAR_6;
 }
 else if (VAR_26->host_status == VAR_15)
  VAR_28 = VAR_7;
 else if (VAR_26->host_status == VAR_16)
  VAR_28 = VAR_8;
 else {
  if (VAR_24) {
   FUNC_4(VAR_26);
   FUNC_10 ("COMMAND FAILED (%x %x %x).\n",
    VAR_26->host_status, VAR_26->ssss_status,
    VAR_26->xerr_status);
  }
  VAR_27->scsi_status = VAR_26->ssss_status;



  VAR_28 = FUNC_19(VAR_5,
       VAR_26->xerr_status);
 }





 VAR_29 = (FUNC_0 (VAR_22) - VAR_25->squeue_ba) / 4;
 (void) FUNC_13(VAR_25, VAR_29, VAR_26->target, VAR_26->lun, -1);




 FUNC_3 (FUNC_5 (VAR_25, VAR_23));




 if (VAR_26->dmamapped) {
  FUNC_8(VAR_25->data_dmat, VAR_26->dmamap,
   (VAR_26->dmamapped == VAR_19 ?
    VAR_0 : VAR_1));
 }





 FUNC_18((union ccb *) VAR_27, VAR_28);
 FUNC_17(&VAR_26->link_ccbq);
 FUNC_15(&VAR_26->link_ccbq, &VAR_25->comp_ccbq);
 FUNC_14(VAR_25, 0);
}
