
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_13__ {int * ocs; } ;
typedef TYPE_3__ ocs_node_t ;
struct TYPE_12__ {TYPE_5__* virt; } ;
struct TYPE_11__ {void* ox_id; } ;
struct TYPE_15__ {void* reason_code_exp; void* reason_code; int command_code; TYPE_1__ els; } ;
struct TYPE_14__ {char* display_name; int hio_type; TYPE_2__ els_req; TYPE_5__ iparam; void* init_task_tag; void* els_callback_arg; int els_callback; TYPE_3__* node; } ;
typedef TYPE_4__ ocs_io_t ;
typedef int int32_t ;
typedef TYPE_5__ fc_ls_rjt_payload_t ;
typedef int els_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;

ocs_io_t *
FUNC_4(ocs_io_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
  uint32_t VAR_6, els_cb_t VAR_7, void *VAR_8)
{
 ocs_node_t *VAR_9 = VAR_2->node;
 int32_t VAR_10;
 ocs_t *VAR_11 = VAR_9->ocs;
 fc_ls_rjt_payload_t *VAR_12;

 FUNC_0();

 VAR_2->els_callback = VAR_7;
 VAR_2->els_callback_arg = VAR_8;
 VAR_2->display_name = "ls_rjt";
 VAR_2->init_task_tag = VAR_3;

 FUNC_3(&VAR_2->iparam, 0, sizeof(VAR_2->iparam));
 VAR_2->iparam.els.ox_id = VAR_3;

 VAR_12 = VAR_2->els_req.virt;
 FUNC_3(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->command_code = VAR_0;
 VAR_12->reason_code = VAR_4;
 VAR_12->reason_code_exp = VAR_5;

 VAR_2->hio_type = VAR_1;
 if ((VAR_10 = FUNC_2(VAR_2, sizeof(*VAR_12)))) {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
