
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct tws_softc {int dummy; } ;
struct tws_request {int timeout; int flags; int * data; int length; int request_id; struct tws_command_packet* cmd_pkt; int cb; } ;
struct TYPE_3__ {int sgl_offset; int* cdb; int lun_l4__req_id; scalar_t__ unit; scalar_t__ status; int res__opcode; } ;
struct TYPE_4__ {TYPE_1__ pkt_a; } ;
struct tws_command_packet {TYPE_2__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tws_softc*,char*,struct tws_softc*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ,struct tws_request*) ;
 int VAR_8 ;
 int * FUNC_3 (int ,int ,int ) ;
 int VAR_9 ;
 struct tws_request* FUNC_4 (struct tws_softc*,int ) ;
 int FUNC_5 (struct tws_softc*,struct tws_request*) ;
 int VAR_10 ;

int
FUNC_6(struct tws_softc *VAR_11, int VAR_12)
{
    struct tws_request *VAR_13;
    struct tws_command_packet *VAR_14;
    int VAR_15;

    FUNC_0(VAR_11, "entry",VAR_11, VAR_12);
    VAR_13 = FUNC_4(VAR_11, VAR_6);

    if ( VAR_13 == ((void*)0) )
        return(VAR_0);

    VAR_13->cb = VAR_9;

    VAR_14 = VAR_13->cmd_pkt;
    VAR_14->cmd.pkt_a.res__opcode = VAR_4;
    VAR_14->cmd.pkt_a.status = 0;
    VAR_14->cmd.pkt_a.unit = 0;
    VAR_14->cmd.pkt_a.sgl_offset = 16;
    VAR_14->cmd.pkt_a.lun_l4__req_id = VAR_13->request_id;

    VAR_14->cmd.pkt_a.cdb[0] = (u_int8_t)VAR_12;
    VAR_14->cmd.pkt_a.cdb[4] = 128;

    VAR_13->length = VAR_7;
    VAR_13->data = FUNC_3(VAR_7, VAR_2, VAR_1);
    if ( VAR_13->data == ((void*)0) )
        return(VAR_0);
    FUNC_1(VAR_13->data, VAR_7);
    VAR_13->flags = VAR_3;

    FUNC_2(&VAR_13->timeout, (VAR_5 * VAR_8), VAR_10, VAR_13);
    VAR_15 = FUNC_5(VAR_11, VAR_13);
    return(VAR_15);

}
