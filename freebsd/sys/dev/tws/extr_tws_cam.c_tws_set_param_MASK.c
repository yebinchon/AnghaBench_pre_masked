
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int param_count; int size; scalar_t__ host_id__unit; void* request_id; int sgl_off__opcode; } ;
union tws_command_giga {TYPE_2__ param; } ;
typedef void* u_int8_t ;
typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct tws_softc {int dummy; } ;
struct tws_request {int timeout; scalar_t__ request_id; struct tws_command_packet* cmd_pkt; int flags; int cb; int * data; int length; } ;
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
 int VAR_8 ;
 int FUNC_1 (struct tws_softc*,char*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int ,struct tws_request*) ;
 int VAR_9 ;
 int * FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,void*,int) ;
 struct tws_request* FUNC_6 (struct tws_softc*,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct tws_softc*,struct tws_request*) ;
 int VAR_11 ;

int
FUNC_8(struct tws_softc *VAR_12, u_int32_t VAR_13, u_int32_t VAR_14,
              u_int32_t VAR_15, void *VAR_16)
{
    struct tws_request *VAR_17;
    struct tws_command_packet *VAR_18;
    union tws_command_giga *VAR_19;
    struct tws_getset_param *VAR_20;
    int VAR_21;

    VAR_17 = FUNC_6(VAR_12, VAR_7);
    if ( VAR_17 == ((void*)0) ) {
        FUNC_1(VAR_12, "null req", 0, 0);
        return(VAR_0);
    }

    VAR_17->length = VAR_8;
    VAR_17->data = FUNC_4(VAR_8, VAR_2, VAR_1);
    if ( VAR_17->data == ((void*)0) )
        return(VAR_0);
    FUNC_2(VAR_17->data, VAR_8);
    VAR_20 = (struct tws_getset_param *)VAR_17->data;

    VAR_17->cb = VAR_10;
    VAR_17->flags = VAR_4;
    VAR_18 = VAR_17->cmd_pkt;

    VAR_19 = &VAR_18->cmd.pkt_g;
    VAR_19->param.sgl_off__opcode =
            FUNC_0(2, VAR_5);
    VAR_19->param.request_id = (u_int8_t)VAR_17->request_id;
    VAR_19->param.host_id__unit = 0;
    VAR_19->param.param_count = 1;
    VAR_19->param.size = 2;


    VAR_20->table_id = (VAR_13 | VAR_3);
    VAR_20->parameter_id = (u_int8_t)(VAR_14);
    VAR_20->parameter_size_bytes = (u_int16_t)VAR_15;
    FUNC_5(VAR_20->data, VAR_16, VAR_15);

    FUNC_3(&VAR_17->timeout, (VAR_6 * VAR_9), VAR_11, VAR_17);
    VAR_21 = FUNC_7(VAR_12, VAR_17);
    return(VAR_21);

}
