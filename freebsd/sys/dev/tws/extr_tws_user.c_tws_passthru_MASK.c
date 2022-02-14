
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;
struct tws_softc {int gen_lock; int ioctl_data_map; int ioctl_data_mem; } ;
struct tws_request {int length; int request_id; int flags; scalar_t__ state; int error_code; int data; TYPE_5__* cmd_pkt; int cb; int dma_map; } ;
struct TYPE_14__ {int os_status; int buffer_length; } ;
struct TYPE_10__ {scalar_t__ request_id; } ;
struct TYPE_11__ {TYPE_2__ generic; } ;
struct TYPE_9__ {int lun_l4__req_id; int res__opcode; } ;
struct TYPE_15__ {TYPE_3__ pkt_g; TYPE_1__ pkt_a; } ;
struct TYPE_12__ {TYPE_7__ cmd; TYPE_7__ hdr; } ;
struct tws_ioctl_no_data_buf {TYPE_6__ driver_pkt; int pdata; TYPE_4__ cmd_pkt; } ;
struct tws_command_apache {int dummy; } ;
struct TYPE_13__ {TYPE_7__ cmd; TYPE_7__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct tws_softc*,char*,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_15 ;
 int FUNC_4 (TYPE_7__*,TYPE_7__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tws_request*,int *,int ,char*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (struct tws_softc*,int ,char*,int) ;
 struct tws_request* FUNC_10 (struct tws_softc*,int ) ;
 scalar_t__ FUNC_11 (struct tws_softc*) ;
 int FUNC_12 (struct tws_softc*,struct tws_request*) ;
 int VAR_16 ;
 int FUNC_13 (void*) ;
 int FUNC_14 (struct tws_softc*,struct tws_request*) ;
 int FUNC_15 (struct tws_softc*) ;

__attribute__((used)) static int
FUNC_16(struct tws_softc *VAR_17, void *VAR_18)
{
    struct tws_request *VAR_19;
    struct tws_ioctl_no_data_buf *VAR_20 = (struct tws_ioctl_no_data_buf *)VAR_18;
    int VAR_21;
    u_int32_t VAR_22;
    u_int16_t VAR_23;

    VAR_22 = FUNC_8(VAR_20->driver_pkt.buffer_length, 512);
    if ( VAR_22 > VAR_8 ) {
        return(VAR_1);
    }
    if ( FUNC_11(VAR_17) != VAR_9) {
        return(VAR_0);
    }




    do {
        VAR_19 = FUNC_10(VAR_17, VAR_14);
        if ( !VAR_19 ) {
            VAR_21 = FUNC_9(VAR_17, 0, "tws_sleep", VAR_7*VAR_15);
            if ( VAR_21 == VAR_3 ) {
                return(VAR_2);
            }
        } else {

            if ( FUNC_11(VAR_17) != VAR_9) {
                return(VAR_0);
            }
            break;
        }
    } while(1);

    VAR_19->length = VAR_22;
    FUNC_1(VAR_17, "datal,rid", VAR_19->length, VAR_19->request_id);
    if ( VAR_19->length ) {
        VAR_19->data = VAR_17->ioctl_data_mem;
        VAR_19->dma_map = VAR_17->ioctl_data_map;




        VAR_21 = FUNC_2(VAR_20->pdata, VAR_19->data, VAR_19->length);
    }




    VAR_19->flags = VAR_4 | VAR_5;
    VAR_19->cb = VAR_16;

    FUNC_4(&VAR_19->cmd_pkt->cmd, &VAR_20->cmd_pkt.cmd,
                              sizeof(struct tws_command_apache));

    if ( FUNC_0(VAR_19->cmd_pkt->cmd.pkt_a.res__opcode) ==
                                               VAR_6 ) {
        VAR_23 = VAR_19->cmd_pkt->cmd.pkt_a.lun_l4__req_id & 0xF000;
        VAR_19->cmd_pkt->cmd.pkt_a.lun_l4__req_id = VAR_23 | VAR_19->request_id;
    } else {
        VAR_19->cmd_pkt->cmd.pkt_g.generic.request_id = (u_int8_t) VAR_19->request_id;
    }




    VAR_21 = FUNC_12(VAR_17, VAR_19);
    if (VAR_21) {
        VAR_20->driver_pkt.os_status = VAR_21;
        goto out_data;
    }

    if ( VAR_19->state == VAR_12 ) {
        VAR_20->driver_pkt.os_status = VAR_19->error_code;
        goto out_unmap;
    }

    FUNC_5(&VAR_17->gen_lock);
    VAR_21 = FUNC_6(VAR_19, &VAR_17->gen_lock, 0, "tws_passthru", VAR_7*VAR_15);
    FUNC_7(&VAR_17->gen_lock);
    if (( VAR_19->state != VAR_12 ) && ( VAR_21 == VAR_3 )) {
            FUNC_1(VAR_17, "msleep timeout", VAR_21, VAR_19->request_id);
            FUNC_13((void*) VAR_19);
    }

out_unmap:
    if ( VAR_19->error_code == VAR_10 ) {
        VAR_21 = VAR_0;
        VAR_19->error_code = VAR_0;
        FUNC_1(VAR_17, "ioctl reset", VAR_21, VAR_19->request_id);
    }

    FUNC_14(VAR_17, VAR_19);




    FUNC_4(&VAR_20->cmd_pkt.hdr, &VAR_19->cmd_pkt->hdr, sizeof(struct tws_command_apache));
    FUNC_4(&VAR_20->cmd_pkt.cmd, &VAR_19->cmd_pkt->cmd, sizeof(struct tws_command_apache));

out_data:
    if ( VAR_19->length ) {



        if ( !VAR_21 )
            VAR_21 = FUNC_3(VAR_19->data, VAR_20->pdata, VAR_20->driver_pkt.buffer_length);
    }

    if ( VAR_21 )
        FUNC_1(VAR_17, "errored", VAR_21, 0);

    if ( VAR_19->error_code != VAR_11 )
        VAR_20->driver_pkt.os_status = VAR_21;




    VAR_19->state = VAR_13;

    FUNC_15(VAR_17);

    return(VAR_21);
}
