
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* cdb_ptr; int* cdb_bytes; } ;
struct ccb_scsiio {int* data_ptr; int scsi_status; int sense_data; scalar_t__ sense_resid; scalar_t__ sense_len; TYPE_2__ cdb_io; } ;
struct ccb_hdr {int status; int flags; struct mfip_softc* ccb_mfip_ptr; } ;
union ccb {struct ccb_scsiio csio; struct ccb_hdr ccb_h; } ;
typedef int uint8_t ;
struct scsi_sense_data {int dummy; } ;
struct mfip_softc {int dummy; } ;
struct TYPE_8__ {int cmd_status; int scsi_status; scalar_t__ sense_len; } ;
struct mfi_pass_frame {TYPE_4__ header; } ;
struct mfi_command {TYPE_3__* cm_sense; TYPE_1__* cm_frame; union ccb* cm_private; } ;
struct TYPE_7__ {int * data; } ;
struct TYPE_5__ {struct mfi_pass_frame pass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_10 ;
 int FUNC_2 (struct mfi_command*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(struct mfi_command *VAR_11)
{
 union ccb *VAR_12 = VAR_11->cm_private;
 struct ccb_hdr *VAR_13 = &VAR_12->ccb_h;
 struct ccb_scsiio *VAR_14 = &VAR_12->csio;
 struct mfip_softc *VAR_15;
 struct mfi_pass_frame *VAR_16;

 VAR_15 = VAR_13->ccb_mfip_ptr;
 VAR_16 = &VAR_11->cm_frame->pass;

 switch (VAR_16->header.cmd_status) {
 case 130:
 {
  uint8_t VAR_17, VAR_18;

  VAR_13->status = VAR_2;
  VAR_14->scsi_status = VAR_16->header.scsi_status;
  if (VAR_13->flags & VAR_1)
   VAR_17 = VAR_14->cdb_io.cdb_ptr[0];
  else
   VAR_17 = VAR_14->cdb_io.cdb_bytes[0];
  if (VAR_17 == VAR_6) {
   VAR_18 = VAR_14->data_ptr[0] & 0x1f;
   if ((!VAR_10 && VAR_18 == VAR_7) ||
       (VAR_18 == VAR_9))
    VAR_14->data_ptr[0] =
         (VAR_14->data_ptr[0] & 0xe0) | VAR_8;
  }
  break;
 }
 case 129:
 {
  int VAR_19;

  VAR_13->status = VAR_4 | VAR_0;
  VAR_14->scsi_status = VAR_16->header.scsi_status;
  if (VAR_16->header.sense_len < VAR_14->sense_len)
   VAR_14->sense_resid = VAR_14->sense_len -
       VAR_16->header.sense_len;
  else
   VAR_14->sense_resid = 0;
  VAR_19 = FUNC_3(VAR_16->header.sense_len,
      sizeof(struct scsi_sense_data));
  FUNC_1(&VAR_14->sense_data, sizeof(struct scsi_sense_data));
  FUNC_0(&VAR_11->cm_sense->data[0], &VAR_14->sense_data, VAR_19);
  break;
 }
 case 131:
  VAR_13->status = VAR_5;
  break;
 case 128:
  VAR_13->status = VAR_3;
  VAR_14->scsi_status = VAR_16->header.scsi_status;
  break;
 default:
  VAR_13->status = VAR_3;
  VAR_14->scsi_status = VAR_16->header.scsi_status;
  break;
 }

 FUNC_2(VAR_11);
 FUNC_4(VAR_12);
}
