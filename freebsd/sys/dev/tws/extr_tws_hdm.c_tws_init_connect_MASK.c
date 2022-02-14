
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int64_t ;
typedef scalar_t__ u_int16_t ;
struct TYPE_9__ {int reqs_out; } ;
struct TYPE_8__ {scalar_t__ fw_on_ctlr_build; scalar_t__ fw_on_ctlr_branch; int fw_on_ctlr_srl; scalar_t__ working_build; scalar_t__ working_branch; int working_srl; } ;
struct tws_softc {TYPE_4__ stats; TYPE_3__ cinfo; scalar_t__ is64bit; struct tws_request* reqs; } ;
struct tws_request {size_t type; scalar_t__ request_id; int state; int error_code; TYPE_2__* cmd_pkt; int * prev; int next; int timeout; int * ccb_ptr; int * cb; int flags; scalar_t__ length; int * data; } ;
struct tws_command_apache {int dummy; } ;
struct tws_cmd_init_connect {int size; scalar_t__ request_id; scalar_t__ fw_build; scalar_t__ fw_branch; int fw_srl; scalar_t__ fw_arch_id; int features; scalar_t__ message_credits; int res1__opcode; } ;
struct TYPE_6__ {struct tws_cmd_init_connect init_connect; } ;
struct TYPE_10__ {TYPE_1__ pkt_g; } ;
struct TYPE_7__ {TYPE_5__ cmd; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (struct tws_softc*,char*,scalar_t__,int ) ;
 int FUNC_2 (struct tws_softc*,char*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int *) ;
 struct tws_request* FUNC_5 (struct tws_softc*,size_t) ;
 scalar_t__ FUNC_6 (struct tws_softc*,int *) ;
 int FUNC_7 (struct tws_softc*,struct tws_request*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_12 ;

int
FUNC_11(struct tws_softc *VAR_13, u_int16_t VAR_14 )
{
    struct tws_request *VAR_15;
    struct tws_cmd_init_connect *VAR_16;
    u_int16_t VAR_17;
    u_int64_t VAR_18;

    FUNC_2(VAR_13, "entry", 0, VAR_14);



    VAR_15 = &VAR_13->reqs[VAR_11];
    FUNC_3(&VAR_15->cmd_pkt->cmd, sizeof(struct tws_command_apache));
    VAR_15->data = ((void*)0);
    VAR_15->length = 0;
    VAR_15->type = VAR_11;
    VAR_15->flags = VAR_5;
    VAR_15->error_code = VAR_8;
    VAR_15->cb = ((void*)0);
    VAR_15->ccb_ptr = ((void*)0);
    FUNC_4(&VAR_15->timeout);
    VAR_15->next = *(VAR_15->prev = ((void*)0));
    VAR_15->state = VAR_9;


    if ( VAR_15 == ((void*)0) ) {
        FUNC_2(VAR_13, "no requests", 0, 0);

        return(VAR_0);
    }

    FUNC_8(0xbeef);
    FUNC_9(0xdeadbeef);
    FUNC_10(0xdeadbeef);
    VAR_16 = &(VAR_15->cmd_pkt->cmd.pkt_g.init_connect);


    VAR_16->res1__opcode =
              FUNC_0(0, VAR_6);
    VAR_16->size = 6;
    VAR_16->request_id = VAR_15->request_id;
    VAR_16->message_credits = VAR_14;
    VAR_16->features |= VAR_3;
    if ( VAR_13->is64bit && !VAR_12 )
        VAR_16->features |= VAR_2;


    VAR_16->size = 6;
    VAR_16->fw_srl = VAR_13->cinfo.working_srl = VAR_4;
    VAR_16->fw_arch_id = 0;
    VAR_16->fw_branch = VAR_13->cinfo.working_branch = 0;
    VAR_16->fw_build = VAR_13->cinfo.working_build = 0;

    VAR_15->error_code = FUNC_7(VAR_13, VAR_15);
    VAR_17 = FUNC_6(VAR_13, &VAR_18);
    if ( VAR_17 != VAR_7 && VAR_17 == VAR_15->request_id ) {
        VAR_13->cinfo.fw_on_ctlr_srl = VAR_16->fw_srl;
        VAR_13->cinfo.fw_on_ctlr_branch = VAR_16->fw_branch;
        VAR_13->cinfo.fw_on_ctlr_build = VAR_16->fw_build;
        VAR_13->stats.reqs_out++;
        VAR_15->state = VAR_10;
    }
    else {




        FUNC_1(VAR_13, "unexpected req_id ", VAR_17, 0);
        FUNC_1(VAR_13, "INITCONNECT FAILED", VAR_17, 0);
        return(VAR_0);
    }
    return(VAR_1);
}
