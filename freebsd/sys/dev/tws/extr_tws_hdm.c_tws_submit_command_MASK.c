
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct TYPE_4__ {int reqs_in; } ;
struct tws_softc {int io_lock; TYPE_2__ stats; int q_lock; int bus_mfa_handle; int bus_mfa_tag; scalar_t__ obfl_q_overrun; } ;
struct tws_request {int cmd_pkt_phy; scalar_t__ type; TYPE_1__* cmd_pkt; } ;
struct tws_command_packet {int dummy; } ;
struct tws_command_header {int dummy; } ;
struct TYPE_3__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct tws_softc*,char*,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tws_softc*) ;
 int FUNC_5 (struct tws_softc*,struct tws_request*,int ) ;
 int FUNC_6 (struct tws_softc*,int ,int) ;
 int FUNC_7 (struct tws_softc*,int ,int,int) ;

int
FUNC_8(struct tws_softc *VAR_8, struct tws_request *VAR_9)
{
    u_int32_t VAR_10, VAR_11;
    u_int64_t VAR_12=0;






    FUNC_2(&VAR_8->io_lock);

    if ( VAR_8->obfl_q_overrun ) {
        FUNC_4(VAR_8);
    }
    VAR_11 = FUNC_6(VAR_8, VAR_3, 4);
    VAR_12 = VAR_11;
    VAR_12 = VAR_12 << 32;
    VAR_10 = FUNC_6(VAR_8, VAR_4, 4);
    VAR_12 = VAR_12 | VAR_10;


    FUNC_3(&VAR_8->io_lock);

    if ( VAR_12 == VAR_2 ) {
        FUNC_0(VAR_8, "inbound fifo empty", VAR_12, 0);






        return(VAR_5);

    }


    for (int VAR_13=VAR_12; VAR_13<(sizeof(struct tws_command_packet)+ VAR_12 -
                            sizeof( struct tws_command_header)); VAR_13++) {

        FUNC_1(VAR_8->bus_mfa_tag, VAR_8->bus_mfa_handle,VAR_13,
                               ((u_int8_t *)&VAR_9->cmd_pkt->cmd)[VAR_13-VAR_12]);

    }


    if ( VAR_9->type == VAR_7 ) {
        FUNC_2(&VAR_8->q_lock);
        FUNC_5(VAR_8, VAR_9, VAR_1);
        FUNC_3(&VAR_8->q_lock);
    }






    FUNC_2(&VAR_8->io_lock);

    FUNC_7(VAR_8, VAR_3, VAR_11, 4);
    FUNC_7(VAR_8, VAR_4, VAR_10, 4);

    VAR_8->stats.reqs_in++;
    FUNC_3(&VAR_8->io_lock);

    return(VAR_6);

}
