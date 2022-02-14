
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int param_count; int size; scalar_t__ host_id__unit; void* request_id; int sgl_off__opcode; } ;
union tws_command_giga {TYPE_2__ param; } ;
typedef void* u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct tws_softc {int dummy; } ;
struct tws_request {int state; int * data; scalar_t__ request_id; struct tws_command_packet* cmd_pkt; int flags; int * cb; int length; } ;
struct tws_getset_param {int table_id; int data; scalar_t__ parameter_size_bytes; void* parameter_id; } ;
struct TYPE_3__ {union tws_command_giga pkt_g; } ;
struct tws_command_packet {TYPE_1__ cmd; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (void*,int ,int) ;
 struct tws_request* FUNC_6 (struct tws_softc*,scalar_t__) ;
 int FUNC_7 (struct tws_softc*,struct tws_request*) ;
 scalar_t__ FUNC_8 (struct tws_softc*,int *) ;
 int FUNC_9 (struct tws_softc*,struct tws_request*) ;

int
FUNC_10(struct tws_softc *VAR_10, u_int32_t VAR_11, u_int32_t VAR_12,
              u_int32_t VAR_13, void *VAR_14)
{
    struct tws_request *VAR_15;
    struct tws_command_packet *VAR_16;
    union tws_command_giga *VAR_17;
    struct tws_getset_param *VAR_18;
    u_int16_t VAR_19;
    u_int64_t VAR_20;
    int VAR_21 = VAR_3;


    VAR_15 = FUNC_6(VAR_10, VAR_8);
    if ( VAR_15 == ((void*)0) ) {
        FUNC_1(VAR_10, "null req", 0, 0);
        return(VAR_0);
    }

    VAR_15->length = VAR_9;
    VAR_15->data = FUNC_4(VAR_9, VAR_2, VAR_1);
    if ( VAR_15->data == ((void*)0) )
        return(VAR_0);
    FUNC_2(VAR_15->data, VAR_9);
    VAR_18 = (struct tws_getset_param *)VAR_15->data;

    VAR_15->cb = ((void*)0);
    VAR_15->flags = VAR_5;
    VAR_16 = VAR_15->cmd_pkt;

    VAR_17 = &VAR_16->cmd.pkt_g;
    VAR_17->param.sgl_off__opcode =
            FUNC_0(2, VAR_6);
    VAR_17->param.request_id = (u_int8_t)VAR_15->request_id;
    VAR_17->param.host_id__unit = 0;
    VAR_17->param.param_count = 1;
    VAR_17->param.size = 2;


    VAR_18->table_id = (VAR_11 | VAR_4);
    VAR_18->parameter_id = (u_int8_t)(VAR_12);
    VAR_18->parameter_size_bytes = (u_int16_t)VAR_13;

    VAR_21 = FUNC_7(VAR_10, VAR_15);
    if (!VAR_21) {
        VAR_19 = FUNC_8(VAR_10, &VAR_20);
        FUNC_9(VAR_10, VAR_15);

        if ( VAR_19 == VAR_8 ) {
            FUNC_5(VAR_14, VAR_18->data, VAR_13);
        } else {
            VAR_21 = VAR_0;
        }
    }

    FUNC_3(VAR_15->data, VAR_2);
    VAR_15->state = VAR_7;
    return(VAR_21);

}
