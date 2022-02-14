
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_8__ {TYPE_1__* entries; } ;
struct TYPE_11__ {int target_id; int flags; int target_lun; TYPE_2__ sim_priv; } ;
struct TYPE_10__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_scsiio {TYPE_5__ ccb_h; int dxfer_len; int data_ptr; int cdb_len; TYPE_4__ cdb_io; } ;
struct amr_softc {scalar_t__ support_ext_cdb; } ;
struct amr_passthrough {int ap_ars; int ap_request_sense_length; int ap_channel; int ap_scsi_id; int ap_logical_drive_no; int ap_cdb_length; int * ap_cdb; int ap_data_transfer_length; scalar_t__ ap_islogical; scalar_t__ ap_timeout; } ;
struct amr_ext_passthrough {int ap_timeout; int ap_ars; int ap_request_sense_length; int ap_channel; int ap_scsi_id; int ap_logical_drive_no; int ap_cdb_length; int * ap_cdb; int ap_data_transfer_length; scalar_t__ ap_islogical; } ;
struct TYPE_12__ {int mb_command; } ;
struct amr_command {TYPE_6__ ac_mailbox; int ac_complete; struct ccb_scsiio* ac_private; int ac_flags; int ac_length; int ac_data; TYPE_3__* ac_ccb; } ;
struct TYPE_9__ {struct amr_passthrough ccb_pthru; struct amr_ext_passthrough ccb_epthru; } ;
struct TYPE_7__ {int field; } ;


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
 struct amr_command* FUNC_0 (struct amr_softc*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct amr_softc*) ;
 int FUNC_2 (struct amr_command*) ;
 int FUNC_3 (struct amr_softc*,union ccb*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int,char*,int ,int ,int ,int,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct amr_softc *VAR_11, struct amr_command **VAR_12)
{
 struct amr_command *VAR_13;
 struct amr_passthrough *VAR_14;
 struct amr_ext_passthrough *VAR_15;
 struct ccb_scsiio *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 VAR_19 = 0;
 VAR_13 = ((void*)0);
 VAR_14 = ((void*)0);
 VAR_15 = ((void*)0);


 if ((VAR_16 = (struct ccb_scsiio *)FUNC_1(VAR_11)) == ((void*)0))
 goto out;


 VAR_17 = VAR_16->ccb_h.sim_priv.entries[0].field;
 VAR_18 = VAR_16->ccb_h.target_id;






 if ((VAR_13 = FUNC_0(VAR_11)) == ((void*)0)) {
  VAR_19 = VAR_9;
  goto out;
 }


 if (VAR_11->support_ext_cdb ) {
  VAR_15 = &VAR_13->ac_ccb->ccb_epthru;
  VAR_15->ap_timeout = 2;
  VAR_15->ap_ars = 1;
  VAR_15->ap_request_sense_length = 14;
  VAR_15->ap_islogical = 0;
  VAR_15->ap_channel = VAR_17;
  VAR_15->ap_scsi_id = VAR_18;
  VAR_15->ap_logical_drive_no = VAR_16->ccb_h.target_lun;
  VAR_15->ap_cdb_length = VAR_16->cdb_len;
  VAR_15->ap_data_transfer_length = VAR_16->dxfer_len;
  if (VAR_16->ccb_h.flags & VAR_5) {
   FUNC_4(VAR_16->cdb_io.cdb_ptr, VAR_15->ap_cdb, VAR_16->cdb_len);
  } else {
   FUNC_4(VAR_16->cdb_io.cdb_bytes, VAR_15->ap_cdb,
       VAR_16->cdb_len);
  }





  FUNC_5(2, " COMMAND %x/%d+%d to %d:%d:%d", VAR_15->ap_cdb[0],
      VAR_15->ap_cdb_length, VAR_16->dxfer_len, VAR_15->ap_channel,
      VAR_15->ap_scsi_id, VAR_15->ap_logical_drive_no);

 } else {
  VAR_14 = &VAR_13->ac_ccb->ccb_pthru;
  VAR_14->ap_timeout = 0;
  VAR_14->ap_ars = 1;
  VAR_14->ap_request_sense_length = 14;
  VAR_14->ap_islogical = 0;
  VAR_14->ap_channel = VAR_17;
  VAR_14->ap_scsi_id = VAR_18;
  VAR_14->ap_logical_drive_no = VAR_16->ccb_h.target_lun;
  VAR_14->ap_cdb_length = VAR_16->cdb_len;
  VAR_14->ap_data_transfer_length = VAR_16->dxfer_len;
  if (VAR_16->ccb_h.flags & VAR_5) {
   FUNC_4(VAR_16->cdb_io.cdb_ptr, VAR_14->ap_cdb, VAR_16->cdb_len);
  } else {
   FUNC_4(VAR_16->cdb_io.cdb_bytes, VAR_14->ap_cdb,
       VAR_16->cdb_len);
  }





  FUNC_5(2, " COMMAND %x/%d+%d to %d:%d:%d", VAR_14->ap_cdb[0],
      VAR_14->ap_cdb_length, VAR_16->dxfer_len, VAR_14->ap_channel,
      VAR_14->ap_scsi_id, VAR_14->ap_logical_drive_no);
 }

 VAR_13->ac_flags |= VAR_0;

 VAR_13->ac_data = VAR_16->data_ptr;
 VAR_13->ac_length = VAR_16->dxfer_len;
 if ((VAR_16->ccb_h.flags & VAR_7) == VAR_6)
  VAR_13->ac_flags |= VAR_1;
 if ((VAR_16->ccb_h.flags & VAR_7) == VAR_8)
  VAR_13->ac_flags |= VAR_2;

 VAR_13->ac_private = VAR_16;
 VAR_13->ac_complete = VAR_10;
 if ( VAR_11->support_ext_cdb ) {
  VAR_13->ac_mailbox.mb_command = VAR_3;
 } else {
  VAR_13->ac_mailbox.mb_command = VAR_4;
 }

out:
 if (VAR_19 != 0) {
  if (VAR_13 != ((void*)0))
   FUNC_2(VAR_13);
  if (VAR_16 != ((void*)0))

   FUNC_3(VAR_11, (union ccb *)VAR_16);
 }
 *VAR_12 = VAR_13;
 return(VAR_19);
}
