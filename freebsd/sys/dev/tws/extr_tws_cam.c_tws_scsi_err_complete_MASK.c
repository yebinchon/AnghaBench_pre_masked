
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int status; scalar_t__ target_lun; } ;
struct TYPE_8__ {int* cdb_bytes; } ;
struct TYPE_10__ {int scsi_status; int sense_len; int sense_data; TYPE_1__ cdb_io; } ;
union ccb {TYPE_7__ ccb_h; TYPE_3__ csio; } ;
typedef int u_int8_t ;
struct tws_softc {int q_lock; int sim_lock; } ;
struct tws_request {struct tws_softc* sc; int timeout; TYPE_6__* cmd_pkt; union ccb* ccb_ptr; } ;
struct TYPE_9__ {int error; } ;
struct tws_command_header {int sense_data; TYPE_2__ status_block; } ;
struct TYPE_11__ {int status; } ;
struct TYPE_12__ {TYPE_4__ pkt_a; } ;
struct TYPE_13__ {TYPE_5__ cmd; } ;


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
 int FUNC_0 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tws_softc*,struct tws_request*,int ) ;
 int FUNC_6 (struct tws_softc*,struct tws_request*,int ) ;
 int FUNC_7 (struct tws_softc*,struct tws_request*) ;
 int FUNC_8 (union ccb*) ;

__attribute__((used)) static void
FUNC_9(struct tws_request *VAR_12, struct tws_command_header *VAR_13)
{
    u_int8_t *VAR_14;
    struct tws_softc *VAR_15 = VAR_12->sc;
    union ccb *VAR_16 = VAR_12->ccb_ptr;

    FUNC_0(VAR_15, "sbe, cmd_status", VAR_13->status_block.error,
                                 VAR_12->cmd_pkt->cmd.pkt_a.status);
    if ( VAR_13->status_block.error == VAR_7 ||
         VAR_13->status_block.error == VAR_9 ) {

        if ( VAR_16->ccb_h.target_lun ) {
            FUNC_0(VAR_15, "invalid lun error",0,0);
            VAR_16->ccb_h.status |= VAR_1;
        } else {
            FUNC_0(VAR_15, "invalid target error",0,0);
            VAR_16->ccb_h.status |= VAR_4;
        }

    } else {
        FUNC_0(VAR_15, "scsi status  error",0,0);
        VAR_16->ccb_h.status |= VAR_3;
        if (((VAR_16->csio.cdb_io.cdb_bytes[0] == 0x1A) &&
              (VAR_13->status_block.error == VAR_8))) {
            VAR_16->ccb_h.status |= VAR_3 | VAR_0;
            FUNC_0(VAR_15, "page mode not supported",0,0);
        }
    }


    if (VAR_16->ccb_h.status == 0)
        VAR_16->ccb_h.status = VAR_2;

    VAR_14 = (u_int8_t *)&VAR_16->csio.sense_data;
    if (VAR_14) {
        FUNC_2(VAR_14, VAR_13->sense_data, VAR_11 );
        VAR_16->csio.sense_len = VAR_11;
        VAR_16->ccb_h.status |= VAR_0;
    }
    VAR_16->csio.scsi_status = VAR_12->cmd_pkt->cmd.pkt_a.status;

    VAR_16->ccb_h.status &= ~VAR_5;
    FUNC_3(&VAR_15->sim_lock);
    FUNC_8(VAR_16);
    FUNC_4(&VAR_15->sim_lock);

    FUNC_1(&VAR_12->timeout);
    FUNC_7(VAR_12->sc, VAR_12);
    FUNC_3(&VAR_15->q_lock);
    FUNC_6(VAR_15, VAR_12, VAR_6);
    FUNC_5(VAR_15, VAR_12, VAR_10);
    FUNC_4(&VAR_15->q_lock);
}
