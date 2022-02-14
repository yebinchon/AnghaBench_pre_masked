
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef void* uint32_t ;
struct TYPE_22__ {TYPE_4__* sport; } ;
struct TYPE_23__ {TYPE_5__ rnode; TYPE_2__* sport; struct TYPE_23__* ocs; } ;
typedef TYPE_6__ ocs_t ;
typedef TYPE_6__ ocs_node_t ;
struct TYPE_20__ {TYPE_10__* virt; } ;
struct TYPE_18__ {void* ox_id; } ;
struct TYPE_17__ {int port_id; int node_name_lo; int node_name_hi; int port_name_lo; int port_name_hi; scalar_t__ hard_address; int command_code; TYPE_1__ els; } ;
struct TYPE_24__ {char* display_name; int hio_type; TYPE_3__ els_req; TYPE_10__ iparam; void* init_task_tag; void* els_callback_arg; int els_callback; TYPE_6__* node; } ;
typedef TYPE_8__ ocs_io_t ;
typedef int int32_t ;
struct TYPE_25__ {int node_name_lo; int node_name_hi; int port_name_lo; int port_name_hi; } ;
typedef TYPE_9__ fc_plogi_payload_t ;
typedef TYPE_10__ fc_adisc_payload_t ;
typedef int els_cb_t ;
struct TYPE_21__ {int fc_id; } ;
struct TYPE_19__ {scalar_t__ service_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (TYPE_10__*,int ,int) ;

ocs_io_t *
FUNC_6(ocs_io_t *VAR_2, uint32_t VAR_3, els_cb_t VAR_4, void *VAR_5)
{
 ocs_node_t *VAR_6 = VAR_2->node;
 int32_t VAR_7;
 fc_adisc_payload_t *VAR_8;
 fc_plogi_payload_t *VAR_9;
 ocs_t *VAR_10;

 FUNC_2(VAR_6, ((void*)0));
 FUNC_2(VAR_6->ocs, ((void*)0));
 VAR_10 = VAR_6->ocs;

 FUNC_1();

 VAR_2->els_callback = VAR_4;
 VAR_2->els_callback_arg = VAR_5;
 VAR_2->display_name = "adisc_acc";
 VAR_2->init_task_tag = VAR_3;


 FUNC_5(&VAR_2->iparam, 0, sizeof(VAR_2->iparam));
 VAR_2->iparam.els.ox_id = VAR_3;

 VAR_9 = (fc_plogi_payload_t*) VAR_6->sport->service_params;
 VAR_8 = VAR_2->els_req.virt;
 FUNC_5(VAR_8, 0, sizeof(fc_adisc_payload_t));
 VAR_8->command_code = VAR_0;
 VAR_8->hard_address = 0;
 VAR_8->port_name_hi = VAR_9->port_name_hi;
 VAR_8->port_name_lo = VAR_9->port_name_lo;
 VAR_8->node_name_hi = VAR_9->node_name_hi;
 VAR_8->node_name_lo = VAR_9->node_name_lo;
 VAR_8->port_id = FUNC_0(VAR_6->rnode.sport->fc_id);

 VAR_2->hio_type = VAR_1;
 if ((VAR_7 = FUNC_4(VAR_2, sizeof(*VAR_8)))) {
  FUNC_3(VAR_2);
  VAR_2 = ((void*)0);
 }

 return VAR_2;
}
