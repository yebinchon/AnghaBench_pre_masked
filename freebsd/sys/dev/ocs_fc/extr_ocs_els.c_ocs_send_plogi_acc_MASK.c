
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
struct TYPE_16__ {int display_name; TYPE_3__* sport; scalar_t__ service_params; int * ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_14__ {TYPE_6__* virt; } ;
struct TYPE_13__ {void* ox_id; } ;
struct TYPE_19__ {TYPE_1__ els; } ;
struct TYPE_17__ {char* display_name; int hio_type; TYPE_2__ els_req; TYPE_9__ iparam; void* init_task_tag; void* els_callback_arg; int els_callback; TYPE_4__* node; } ;
typedef TYPE_5__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_18__ {int* common_service_parameters; scalar_t__ resv1; int command_code; } ;
typedef TYPE_6__ fc_plogi_payload_t ;
typedef int els_cb_t ;
struct TYPE_15__ {int service_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,int *,int*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 int FUNC_6 (TYPE_9__*,int ,int) ;

ocs_io_t *
FUNC_7(ocs_io_t *VAR_2, uint32_t VAR_3, els_cb_t VAR_4, void *VAR_5)
{
 ocs_node_t *VAR_6 = VAR_2->node;
 int32_t VAR_7;
 ocs_t *VAR_8 = VAR_6->ocs;
 fc_plogi_payload_t *VAR_9;
 fc_plogi_payload_t *VAR_10 = (fc_plogi_payload_t *)VAR_6->service_params;

 FUNC_0();

 VAR_2->els_callback = VAR_4;
 VAR_2->els_callback_arg = VAR_5;
 VAR_2->display_name = "plog_acc";
 VAR_2->init_task_tag = VAR_3;

 FUNC_6(&VAR_2->iparam, 0, sizeof(VAR_2->iparam));
 VAR_2->iparam.els.ox_id = VAR_3;

 VAR_9 = VAR_2->els_req.virt;


 FUNC_5(VAR_9, VAR_6->sport->service_params, sizeof(*VAR_9));
 VAR_9->command_code = VAR_0;
 VAR_9->resv1 = 0;


 if (VAR_10->common_service_parameters[1] & FUNC_4(1U << 24)) {
  VAR_9->common_service_parameters[1] |= FUNC_4(1U << 24);
 }


 if (VAR_10->common_service_parameters[1] & FUNC_4(1U << 23)) {
  VAR_9->common_service_parameters[1] |= FUNC_4(1U << 23);
 }

 FUNC_1(VAR_6->display_name, "plogi send resp", 0, ((void*)0), VAR_9->common_service_parameters);

 VAR_2->hio_type = VAR_1;
 if ((VAR_7 = FUNC_3(VAR_2, sizeof(*VAR_9)))) {
  FUNC_2(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
