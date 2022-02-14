
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_9__ {int fc_id; } ;
struct TYPE_10__ {TYPE_1__ rnode; int instance_index; } ;
typedef TYPE_2__ ocs_node_t ;
struct TYPE_11__ {TYPE_4__* tgt; } ;
typedef TYPE_3__ ocs_fcport ;
struct TYPE_12__ {int wwnn; int wwpn; int port_id; int state; int node_id; } ;
typedef TYPE_4__ ocs_fc_target_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

uint32_t
FUNC_2(ocs_node_t *VAR_1, ocs_fcport *VAR_2, uint32_t VAR_3)
{
 ocs_fc_target_t *VAR_4 = ((void*)0);

 VAR_4 = &VAR_2->tgt[VAR_3];

 VAR_4->node_id = VAR_1->instance_index;
 VAR_4->state = VAR_0;

 VAR_4->port_id = VAR_1->rnode.fc_id;
 VAR_4->wwpn = FUNC_1(VAR_1);
 VAR_4->wwnn = FUNC_0(VAR_1);
 return 0;
}
