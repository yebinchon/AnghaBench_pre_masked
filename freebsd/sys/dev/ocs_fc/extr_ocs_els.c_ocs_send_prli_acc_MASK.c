
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_15__ {TYPE_3__* sport; int * ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_13__ {TYPE_6__* virt; } ;
struct TYPE_12__ {void* ox_id; } ;
struct TYPE_17__ {int page_length; void* service_params; void* flags; scalar_t__ type_ext; int type; void* payload_length; int command_code; TYPE_1__ els; } ;
struct TYPE_16__ {char* display_name; int hio_type; TYPE_2__ els_req; TYPE_6__ iparam; void* init_task_tag; void* els_callback_arg; int els_callback; TYPE_4__* node; } ;
typedef TYPE_5__ ocs_io_t ;
typedef int int32_t ;
typedef TYPE_6__ fc_prli_payload_t ;
typedef int els_cb_t ;
struct TYPE_14__ {scalar_t__ enable_tgt; scalar_t__ enable_ini; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;

ocs_io_t *
FUNC_5(ocs_io_t *VAR_7, uint32_t VAR_8, uint8_t VAR_9, els_cb_t VAR_10, void *VAR_11)
{
 ocs_node_t *VAR_12 = VAR_7->node;
 int32_t VAR_13;
 ocs_t *VAR_14 = VAR_12->ocs;
 fc_prli_payload_t *VAR_15;

 FUNC_0();

 VAR_7->els_callback = VAR_10;
 VAR_7->els_callback_arg = VAR_11;
 VAR_7->display_name = "prli_acc";
 VAR_7->init_task_tag = VAR_8;

 FUNC_4(&VAR_7->iparam, 0, sizeof(VAR_7->iparam));
 VAR_7->iparam.els.ox_id = VAR_8;

 VAR_15 = VAR_7->els_req.virt;
 FUNC_4(VAR_15, 0, sizeof(*VAR_15));

 VAR_15->command_code = VAR_0;
 VAR_15->page_length = 16;
 VAR_15->payload_length = FUNC_3(sizeof(fc_prli_payload_t));
 VAR_15->type = VAR_9;
 VAR_15->type_ext = 0;
 VAR_15->flags = FUNC_3(VAR_1 | VAR_4);

 VAR_15->service_params = FUNC_3(VAR_3 |
    (VAR_12->sport->enable_ini ? VAR_2 : 0) |
    (VAR_12->sport->enable_tgt ? VAR_5 : 0));

 VAR_7->hio_type = VAR_6;
 if ((VAR_13 = FUNC_2(VAR_7, sizeof(*VAR_15)))) {
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
 }

 return VAR_7;
}
