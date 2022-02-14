
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_int8_t ;
struct scsi_inquiry_data {int revision; int product; int vendor; } ;
struct mly_softc {scalar_t__ mly_qfrzn_cnt; struct mly_btl** mly_btl; } ;
struct mly_command {int mc_status; int mc_resid; int mc_sense; int mc_packet; scalar_t__ mc_private; struct mly_softc* mc_sc; } ;
struct mly_btl {int mb_flags; int mb_state; int mb_type; } ;
struct TYPE_6__ {TYPE_1__* entries; } ;
struct TYPE_8__ {int target_id; int flags; int status; TYPE_2__ sim_priv; } ;
struct TYPE_7__ {int * cdb_bytes; int * cdb_ptr; } ;
struct ccb_scsiio {int scsi_status; TYPE_4__ ccb_h; int resid; int sense_len; int sense_data; TYPE_3__ cdb_io; scalar_t__ data_ptr; } ;
struct TYPE_5__ {int field; } ;


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
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mly_command*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static void
FUNC_8(struct mly_command *VAR_12)
{
    struct mly_softc *VAR_13 = VAR_12->mc_sc;
    struct ccb_scsiio *VAR_14 = (struct ccb_scsiio *)VAR_12->mc_private;
    struct scsi_inquiry_data *VAR_15 = (struct scsi_inquiry_data *)VAR_14->data_ptr;
    struct mly_btl *VAR_16;
    u_int8_t VAR_17;
    int VAR_18, VAR_19;

    FUNC_3(2);

    VAR_14->scsi_status = VAR_12->mc_status;
    switch(VAR_12->mc_status) {
    case 128:




 VAR_18 = VAR_14->ccb_h.sim_priv.entries[0].field;
 VAR_19 = VAR_14->ccb_h.target_id;

 if (VAR_13->mly_btl[VAR_18][VAR_19].mb_flags & VAR_8) {
     if (VAR_14->ccb_h.flags & VAR_1) {
  VAR_17 = *VAR_14->cdb_io.cdb_ptr;
     } else {
  VAR_17 = VAR_14->cdb_io.cdb_bytes[0];
     }
     if (VAR_17 == VAR_7) {
  VAR_16 = &VAR_13->mly_btl[VAR_18][VAR_19];
  FUNC_6(VAR_15->vendor, FUNC_4(VAR_11, VAR_16->mb_type), 8);
  FUNC_6(VAR_15->product, FUNC_4(VAR_10, VAR_16->mb_state), 16);
  FUNC_6(VAR_15->revision, "", 4);
     }
 }

 FUNC_2(2, "SCSI_STATUS_OK");
 VAR_14->ccb_h.status = VAR_3;
 break;

    case 129:
 FUNC_2(1, "SCSI_STATUS_CHECK_COND  sense %d  resid %d", VAR_12->mc_sense, VAR_12->mc_resid);
 VAR_14->ccb_h.status = VAR_6;
 FUNC_1(&VAR_14->sense_data, VAR_9);
 FUNC_0(VAR_12->mc_packet, &VAR_14->sense_data, VAR_12->mc_sense);
 VAR_14->sense_len = VAR_12->mc_sense;
 VAR_14->ccb_h.status |= VAR_0;
 VAR_14->resid = VAR_12->mc_resid;
 break;

    case 130:
 FUNC_2(1, "SCSI_STATUS_BUSY");
 VAR_14->ccb_h.status = VAR_5;
 break;

    default:
 FUNC_2(1, "unknown status 0x%x", VAR_14->scsi_status);
 VAR_14->ccb_h.status = VAR_4;
 break;
    }

    if (VAR_13->mly_qfrzn_cnt) {
 VAR_14->ccb_h.status |= VAR_2;
 VAR_13->mly_qfrzn_cnt--;
    }

    FUNC_7((union ccb *)VAR_14);
    FUNC_5(VAR_12);
}
