
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_inquiry_data {int device; } ;
struct TYPE_7__ {int flags; int status; } ;
struct ccb_scsiio {scalar_t__ data_ptr; int dxfer_len; TYPE_3__ ccb_h; int sense_len; int sense_data; int scsi_status; } ;
struct amr_passthrough {int ap_scsi_status; int* ap_cdb; int ap_request_sense_area; } ;
struct amr_ext_passthrough {int ap_scsi_status; int* ap_cdb; int ap_request_sense_area; } ;
struct TYPE_6__ {scalar_t__ mb_command; } ;
struct amr_command {scalar_t__ ac_status; TYPE_4__* ac_sc; TYPE_2__ ac_mailbox; scalar_t__ ac_private; TYPE_1__* ac_ccb; } ;
struct TYPE_8__ {int amr_list_lock; } ;
struct TYPE_5__ {struct amr_ext_passthrough ccb_epthru; struct amr_passthrough ccb_pthru; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct scsi_inquiry_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct amr_command*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int,char*,scalar_t__,int,...) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(struct amr_command *VAR_15)
{
 struct amr_passthrough *VAR_16;
 struct amr_ext_passthrough *VAR_17;
 struct ccb_scsiio *VAR_18;
 struct scsi_inquiry_data *VAR_19;
 int VAR_20, VAR_21;

 VAR_16 = &VAR_15->ac_ccb->ccb_pthru;
 VAR_17 = &VAR_15->ac_ccb->ccb_epthru;
 VAR_18 = (struct ccb_scsiio *)VAR_15->ac_private;
 VAR_19 = (struct scsi_inquiry_data *)VAR_18->data_ptr;

 if (VAR_15->ac_mailbox.mb_command == VAR_0)
  VAR_20 = VAR_17->ap_scsi_status;
 else
  VAR_20 = VAR_16->ap_scsi_status;
 FUNC_3(1, "status 0x%x  AP scsi_status 0x%x", VAR_15->ac_status,
     VAR_20);


 if ((VAR_15->ac_status != VAR_2) && (VAR_20 == 0)) {
  VAR_18->ccb_h.status = VAR_7;
  goto out;
 }
 switch(VAR_20) {
 case 0:
  if (VAR_15->ac_mailbox.mb_command == VAR_0)
   VAR_21 = VAR_17->ap_cdb[0];
  else
   VAR_21 = VAR_16->ap_cdb[0];
  if ((VAR_21 == VAR_11) && (FUNC_0(VAR_19) == VAR_13))
   VAR_19->device = (VAR_19->device & 0xe0) | VAR_14;
  VAR_18->ccb_h.status = VAR_6;
  break;

 case 0x02:
  VAR_18->ccb_h.status = VAR_9;
  VAR_18->scsi_status = VAR_12;
  if (VAR_15->ac_mailbox.mb_command == VAR_0)
   FUNC_2(VAR_17->ap_request_sense_area, &VAR_18->sense_data,
       VAR_1);
  else
   FUNC_2(VAR_16->ap_request_sense_area, &VAR_18->sense_data,
       VAR_1);
  VAR_18->sense_len = VAR_1;
  VAR_18->ccb_h.status |= VAR_3;
  break;

 case 0x08:
  VAR_18->ccb_h.status = VAR_8;
  break;

 case 0xf0:
 case 0xf4:
 default:




  VAR_18->ccb_h.status = VAR_10;
  break;
 }

out:
 if ((VAR_18->ccb_h.flags & VAR_4) != VAR_5)
  FUNC_3(2, "%*D\n", FUNC_4(VAR_18->dxfer_len, 16), VAR_18->data_ptr,
      " ");

 FUNC_5(&VAR_15->ac_sc->amr_list_lock);
 FUNC_7((union ccb *)VAR_18);
 FUNC_1(VAR_15);
 FUNC_6(&VAR_15->ac_sc->amr_list_lock);
}
