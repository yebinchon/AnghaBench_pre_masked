
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct mly_softc {int mly_qfrzn_cnt; TYPE_1__** mly_btl; } ;
struct TYPE_19__ {int value; int scale; } ;
struct TYPE_17__ {int target; int channel; int lun; } ;
struct TYPE_18__ {TYPE_6__ phys; } ;
struct TYPE_16__ {int disable_disconnect; int data_direction; } ;
struct mly_command_scsi_small {int cdb; int cdb_length; int maximum_sense_size; TYPE_8__ timeout; TYPE_7__ addr; int data_size; TYPE_5__ command_control; int opcode; } ;
struct mly_command {TYPE_4__* mc_packet; int mc_flags; struct ccb_scsiio* mc_private; int mc_complete; int mc_length; struct ccb_scsiio* mc_data; } ;
struct TYPE_14__ {TYPE_2__* entries; } ;
struct TYPE_20__ {int target_id; int status; int flags; int timeout; int target_lun; TYPE_3__ sim_priv; } ;
struct TYPE_11__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_scsiio {TYPE_9__ ccb_h; int cdb_len; TYPE_10__ cdb_io; int sense_len; int dxfer_len; } ;
struct cam_sim {int dummy; } ;
struct TYPE_15__ {struct mly_command_scsi_small scsi_small; } ;
struct TYPE_13__ {int field; } ;
struct TYPE_12__ {int mb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct mly_softc*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct cam_sim*) ;
 struct mly_softc* FUNC_3 (struct cam_sim*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (struct mly_softc*,struct mly_command**) ;
 int VAR_20 ;
 int FUNC_6 (struct mly_command*) ;
 int FUNC_7 (struct cam_sim*,int) ;

__attribute__((used)) static int
FUNC_8(struct cam_sim *VAR_21, struct ccb_scsiio *VAR_22)
{
    struct mly_softc *VAR_23 = FUNC_3(VAR_21);
    struct mly_command *VAR_24;
    struct mly_command_scsi_small *VAR_25;
    int VAR_26, VAR_27;
    int VAR_28;

    VAR_26 = FUNC_2(VAR_21);
    VAR_27 = VAR_22->ccb_h.target_id;

    FUNC_4(2, "XPT_SCSI_IO %d:%d:%d", VAR_26, VAR_27, VAR_22->ccb_h.target_lun);


    if (!FUNC_0(VAR_23, VAR_26)) {
 FUNC_4(0, " invalid bus %d", VAR_26);
 VAR_22->ccb_h.status = VAR_6;
    }


    if (VAR_23->mly_btl[VAR_26][VAR_27].mb_flags & VAR_13) {
 FUNC_4(2, "  device protected");
 VAR_22->ccb_h.status = VAR_6;
    }


    if (!(VAR_23->mly_btl[VAR_26][VAR_27].mb_flags & (VAR_11 | VAR_12))) {
 FUNC_4(2, "  device %d:%d does not exist", VAR_26, VAR_27);
 VAR_22->ccb_h.status = VAR_6;
    }


    if (VAR_22->cdb_len > VAR_16) {
 FUNC_4(0, "  command too large (%d > %d)", VAR_22->cdb_len, VAR_16);
 VAR_22->ccb_h.status = VAR_6;
    }


    if ((VAR_22->ccb_h.flags & VAR_1) && (VAR_22->ccb_h.flags & VAR_0)) {
 FUNC_4(0, "  CDB pointer is to physical address");
 VAR_22->ccb_h.status = VAR_6;
    }


    if ((VAR_22->ccb_h.status & VAR_8) != VAR_7) {
 FUNC_4(2, "abandoning CCB due to abort/validation failure");
 return(VAR_9);
    }




    if ((VAR_28 = FUNC_5(VAR_23, &VAR_24))) {
 FUNC_7(VAR_21, 1);
 VAR_22->ccb_h.status |= VAR_5;
 VAR_23->mly_qfrzn_cnt++;
 return(VAR_28);
    }


    VAR_24->mc_data = VAR_22;
    VAR_24->mc_length = VAR_22->dxfer_len;
    VAR_24->mc_complete = VAR_20;
    VAR_24->mc_private = VAR_22;
    VAR_24->mc_flags |= VAR_15;



     VAR_22->ccb_h.sim_priv.entries[0].field = VAR_26;


    VAR_25 = &VAR_24->mc_packet->scsi_small;
    VAR_25->opcode = VAR_10;
    if (VAR_22->ccb_h.flags & VAR_4)
 VAR_25->command_control.disable_disconnect = 1;
    if ((VAR_22->ccb_h.flags & VAR_2) == VAR_3)
 VAR_25->command_control.data_direction = VAR_14;
    VAR_25->data_size = VAR_22->dxfer_len;
    VAR_25->addr.phys.lun = VAR_22->ccb_h.target_lun;
    VAR_25->addr.phys.target = VAR_22->ccb_h.target_id;
    VAR_25->addr.phys.channel = VAR_26;
    if (VAR_22->ccb_h.timeout < (60 * 1000)) {
 VAR_25->timeout.value = VAR_22->ccb_h.timeout / 1000;
 VAR_25->timeout.scale = VAR_19;
    } else if (VAR_22->ccb_h.timeout < (60 * 60 * 1000)) {
 VAR_25->timeout.value = VAR_22->ccb_h.timeout / (60 * 1000);
 VAR_25->timeout.scale = VAR_18;
    } else {
 VAR_25->timeout.value = VAR_22->ccb_h.timeout / (60 * 60 * 1000);
 VAR_25->timeout.scale = VAR_17;
    }
    VAR_25->maximum_sense_size = VAR_22->sense_len;
    VAR_25->cdb_length = VAR_22->cdb_len;
    if (VAR_22->ccb_h.flags & VAR_1) {
 FUNC_1(VAR_22->cdb_io.cdb_ptr, VAR_25->cdb, VAR_22->cdb_len);
    } else {
 FUNC_1(VAR_22->cdb_io.cdb_bytes, VAR_25->cdb, VAR_22->cdb_len);
    }


    if ((VAR_28 = FUNC_6(VAR_24))) {
 FUNC_7(VAR_21, 1);
 VAR_22->ccb_h.status |= VAR_5;
 VAR_23->mly_qfrzn_cnt++;
 return(VAR_28);
    }

    return(0);
}
