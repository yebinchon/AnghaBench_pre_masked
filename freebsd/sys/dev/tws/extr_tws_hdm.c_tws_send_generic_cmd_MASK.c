
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct tws_softc {int dummy; } ;
struct tws_request {int error_code; int request_id; int cb; TYPE_3__* cmd_pkt; } ;
struct tws_cmd_generic {int size; scalar_t__ count; scalar_t__ flags; scalar_t__ status; scalar_t__ host_id__unit; int request_id; int sgl_off__opcode; } ;
struct TYPE_4__ {struct tws_cmd_generic generic; } ;
struct TYPE_5__ {TYPE_1__ pkt_g; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct tws_softc*,char*,struct tws_softc*,int ) ;
 int FUNC_2 (struct tws_cmd_generic*,int) ;
 int VAR_3 ;
 struct tws_request* FUNC_3 (struct tws_softc*,int ) ;
 int FUNC_4 (struct tws_softc*,struct tws_request*) ;

int
FUNC_5(struct tws_softc *VAR_4, u_int8_t VAR_5)
{
    struct tws_request *VAR_6;
    struct tws_cmd_generic *VAR_7;

    FUNC_1(VAR_4, "entry", VAR_4, VAR_5);
    VAR_6 = FUNC_3(VAR_4, VAR_2);

    if ( VAR_6 == ((void*)0) ) {
        FUNC_1(VAR_4, "no requests", 0, 0);
        return(VAR_0);
    }

    VAR_7 = &(VAR_6->cmd_pkt->cmd.pkt_g.generic);
    FUNC_2(VAR_7, sizeof(struct tws_cmd_generic));

    VAR_6->cb = VAR_3;

    VAR_7->sgl_off__opcode = FUNC_0(0, VAR_5);
    VAR_7->size = 2;
    VAR_7->request_id = VAR_6->request_id;
    VAR_7->host_id__unit = 0;
    VAR_7->status = 0;
    VAR_7->flags = 0;
    VAR_7->count = 0;

    VAR_6->error_code = FUNC_4(VAR_4, VAR_6);

    return(VAR_1);

}
