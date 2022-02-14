
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ccb_hdr {scalar_t__ target_id; int target_lun; int flags; int timeout; int status; } ;
struct TYPE_5__ {int cdb_bytes; int cdb_ptr; } ;
struct ccb_scsiio {int cdb_len; TYPE_1__ cdb_io; } ;
union ccb {struct ccb_hdr ccb_h; struct ccb_scsiio csio; } ;
typedef int u_int16_t ;
struct TYPE_8__ {int scsi_ios; } ;
struct tws_softc {TYPE_4__ stats; int sim_lock; } ;
struct tws_request {int request_id; int timeout; union ccb* ccb_ptr; int flags; union ccb* data; struct tws_command_packet* cmd_pkt; int cb; int type; } ;
struct TYPE_6__ {scalar_t__ unit; int sgl_offset; int lun_l4__req_id; int lun_h4__sgl_entries; int cdb; scalar_t__ status; int res__opcode; } ;
struct TYPE_7__ {TYPE_2__ pkt_a; } ;
struct tws_command_packet {TYPE_3__ cmd; } ;
typedef int int32_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct tws_softc*,char*,scalar_t__,int) ;
 int FUNC_1 (struct tws_softc*,char*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int,int ,int ,struct tws_request*,int ) ;
 int FUNC_4 (int *,int ) ;
 struct tws_request* FUNC_5 (struct tws_softc*,int ) ;
 int FUNC_6 (struct tws_softc*,struct tws_request*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (union ccb*) ;

__attribute__((used)) static int32_t
FUNC_8(struct tws_softc *VAR_23, union ccb *VAR_24)
{
    struct tws_command_packet *VAR_25;
    struct tws_request *VAR_26;
    struct ccb_hdr *VAR_27 = &(VAR_24->ccb_h);
    struct ccb_scsiio *VAR_28 = &(VAR_24->csio);
    int VAR_29;
    u_int16_t VAR_30;

    FUNC_4(&VAR_23->sim_lock, VAR_11);
    if (VAR_27->target_id >= VAR_19) {
        FUNC_1(VAR_23, "traget id too big", VAR_27->target_id, VAR_27->target_lun);
        VAR_27->status |= VAR_10;
        FUNC_7(VAR_24);
        return(0);
    }
    if (VAR_27->target_lun >= VAR_18) {
        FUNC_1(VAR_23, "target lun 2 big", VAR_27->target_id, VAR_27->target_lun);
        VAR_27->status |= VAR_6;
        FUNC_7(VAR_24);
        return(0);
    }

    if(VAR_27->flags & VAR_0) {
        FUNC_1(VAR_23, "cdb phy", VAR_27->target_id, VAR_27->target_lun);
        VAR_27->status = VAR_8;
        FUNC_7(VAR_24);
        return(0);
    }





    VAR_27->status |= VAR_9;

    VAR_26 = FUNC_5(VAR_23, VAR_20);
    if ( !VAR_26 ) {
        FUNC_1(VAR_23, "no reqs", VAR_27->target_id, VAR_27->target_lun);
        VAR_27->status |= VAR_7;
        FUNC_7(VAR_24);
        return(0);
    }

    if((VAR_27->flags & VAR_3) != VAR_4) {
        if(VAR_27->flags & VAR_2)
            VAR_26->flags |= VAR_14;
        if(VAR_27->flags & VAR_5)
            VAR_26->flags |= VAR_16;
    } else {
        VAR_26->flags = VAR_15;
    }

    VAR_26->type = VAR_20;
    VAR_26->cb = VAR_21;

    VAR_25 = VAR_26->cmd_pkt;

    VAR_25->cmd.pkt_a.res__opcode = VAR_17;
    VAR_25->cmd.pkt_a.unit = VAR_27->target_id;
    VAR_25->cmd.pkt_a.status = 0;
    VAR_25->cmd.pkt_a.sgl_offset = 16;


    VAR_30 = VAR_27->target_lun & 0XF;
    VAR_30 = VAR_30 << 12;
    VAR_25->cmd.pkt_a.lun_l4__req_id = VAR_30 | VAR_26->request_id;

    VAR_30 = VAR_27->target_lun & 0XF0;
    VAR_30 = VAR_30 << 8;
    VAR_25->cmd.pkt_a.lun_h4__sgl_entries = VAR_30;






    if(VAR_27->flags & VAR_1)
        FUNC_2(VAR_28->cdb_io.cdb_ptr, VAR_25->cmd.pkt_a.cdb, VAR_28->cdb_len);
    else
        FUNC_2(VAR_28->cdb_io.cdb_bytes, VAR_25->cmd.pkt_a.cdb, VAR_28->cdb_len);

    VAR_26->data = VAR_24;
    VAR_26->flags |= VAR_13;

    VAR_26->ccb_ptr = VAR_24;




    VAR_23->stats.scsi_ios++;
    FUNC_3(&VAR_26->timeout, VAR_12 * VAR_24->ccb_h.timeout, 0,
      VAR_22, VAR_26, 0);
    VAR_29 = FUNC_6(VAR_23, VAR_26);
    return(VAR_29);
}
