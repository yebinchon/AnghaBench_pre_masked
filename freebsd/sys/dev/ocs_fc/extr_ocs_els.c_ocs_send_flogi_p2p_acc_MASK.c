
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int ocs_t ;
struct TYPE_16__ {TYPE_3__* sport; int * ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_14__ {TYPE_6__* virt; } ;
struct TYPE_13__ {void* s_id; void* ox_id; } ;
struct TYPE_19__ {TYPE_1__ els_sid; } ;
struct TYPE_17__ {char* display_name; int hio_type; TYPE_2__ els_req; TYPE_9__ iparam; void* init_task_tag; void* els_callback_arg; int els_callback; TYPE_4__* node; } ;
typedef TYPE_5__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_18__ {TYPE_9__* class4_service_parameters; TYPE_9__* class3_service_parameters; TYPE_9__* class2_service_parameters; TYPE_9__* class1_service_parameters; scalar_t__ resv1; int command_code; } ;
typedef TYPE_6__ fc_plogi_payload_t ;
typedef int els_cb_t ;
struct TYPE_15__ {int service_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 (TYPE_9__*,int ,int) ;

ocs_io_t *
FUNC_5(ocs_io_t *VAR_2, uint32_t VAR_3, uint32_t VAR_4, els_cb_t VAR_5, void *VAR_6)
{
 ocs_node_t *VAR_7 = VAR_2->node;
 int32_t VAR_8;
 ocs_t *VAR_9 = VAR_7->ocs;
 fc_plogi_payload_t *VAR_10;

 FUNC_0();

 VAR_2->els_callback = VAR_5;
 VAR_2->els_callback_arg = VAR_6;
 VAR_2->display_name = "flogi_p2p_acc";
 VAR_2->init_task_tag = VAR_3;

 FUNC_4(&VAR_2->iparam, 0, sizeof(VAR_2->iparam));
 VAR_2->iparam.els_sid.ox_id = VAR_3;
 VAR_2->iparam.els_sid.s_id = VAR_4;

 VAR_10 = VAR_2->els_req.virt;


 FUNC_3(VAR_10, VAR_7->sport->service_params, sizeof(*VAR_10));
 VAR_10->command_code = VAR_0;
 VAR_10->resv1 = 0;
 FUNC_4(VAR_10->class1_service_parameters, 0, sizeof(VAR_10->class1_service_parameters));
 FUNC_4(VAR_10->class2_service_parameters, 0, sizeof(VAR_10->class1_service_parameters));
 FUNC_4(VAR_10->class3_service_parameters, 0, sizeof(VAR_10->class1_service_parameters));
 FUNC_4(VAR_10->class4_service_parameters, 0, sizeof(VAR_10->class1_service_parameters));

 VAR_2->hio_type = VAR_1;
 if ((VAR_8 = FUNC_2(VAR_2, sizeof(*VAR_10)))) {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
