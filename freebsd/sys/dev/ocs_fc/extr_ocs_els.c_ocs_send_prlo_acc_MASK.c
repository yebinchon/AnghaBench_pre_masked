
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_13__ {int * ocs; } ;
typedef TYPE_3__ ocs_node_t ;
struct TYPE_12__ {TYPE_5__* virt; } ;
struct TYPE_11__ {void* ox_id; } ;
struct TYPE_15__ {int page_length; int response_code; scalar_t__ type_ext; int type; int payload_length; int command_code; TYPE_1__ els; } ;
struct TYPE_14__ {char* display_name; int hio_type; TYPE_2__ els_req; TYPE_5__ iparam; void* init_task_tag; void* els_callback_arg; int els_callback; TYPE_3__* node; } ;
typedef TYPE_4__ ocs_io_t ;
typedef int int32_t ;
typedef TYPE_5__ fc_prlo_acc_payload_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;

ocs_io_t *
FUNC_5(ocs_io_t *VAR_3, uint32_t VAR_4, uint8_t VAR_5, els_cb_t VAR_6, void *VAR_7)
{
 ocs_node_t *VAR_8 = VAR_3->node;
 int32_t VAR_9;
 ocs_t *VAR_10 = VAR_8->ocs;
 fc_prlo_acc_payload_t *VAR_11;

 FUNC_0();

 VAR_3->els_callback = VAR_6;
 VAR_3->els_callback_arg = VAR_7;
 VAR_3->display_name = "prlo_acc";
 VAR_3->init_task_tag = VAR_4;

 FUNC_4(&VAR_3->iparam, 0, sizeof(VAR_3->iparam));
 VAR_3->iparam.els.ox_id = VAR_4;

 VAR_11 = VAR_3->els_req.virt;
 FUNC_4(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->command_code = VAR_0;
 VAR_11->page_length = 16;
 VAR_11->payload_length = FUNC_3(sizeof(fc_prlo_acc_payload_t));
 VAR_11->type = VAR_5;
 VAR_11->type_ext = 0;
 VAR_11->response_code = VAR_1;

 VAR_3->hio_type = VAR_2;
 if ((VAR_9 = FUNC_2(VAR_3, sizeof(*VAR_11)))) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
