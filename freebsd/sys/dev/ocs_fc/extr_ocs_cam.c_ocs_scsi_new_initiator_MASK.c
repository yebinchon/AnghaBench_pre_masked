
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ac_device_changed {int arrived; int target; int port; int wwpn; } ;
struct ac_contract {scalar_t__ contract_data; int contract_number; } ;
struct TYPE_11__ {int io_high_watermark; } ;
typedef TYPE_3__ ocs_t ;
struct TYPE_10__ {int fc_id; } ;
struct TYPE_12__ {int instance_index; TYPE_2__ rnode; TYPE_1__* sport; TYPE_3__* ocs; } ;
typedef TYPE_4__ ocs_node_t ;
struct TYPE_13__ {int path; } ;
typedef TYPE_5__ ocs_fcport ;
typedef int int32_t ;
struct TYPE_9__ {TYPE_5__* tgt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,struct ac_contract*) ;

int32_t
FUNC_4(ocs_node_t *VAR_3)
{
 ocs_t *VAR_4 = VAR_3->ocs;
 struct ac_contract VAR_5;
 struct ac_device_changed *VAR_6;

 ocs_fcport *VAR_7 = ((void*)0);

 VAR_7 = VAR_3->sport->tgt_data;
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_4, "FCP is NULL \n");
  return 1;
 }





 FUNC_0(&VAR_4->io_high_watermark, VAR_2);

 VAR_5.contract_number = VAR_1;
 VAR_6 = (struct ac_device_changed *) VAR_5.contract_data;
 VAR_6->wwpn = FUNC_2(VAR_3);
 VAR_6->port = VAR_3->rnode.fc_id;
 VAR_6->target = VAR_3->instance_index;
 VAR_6->arrived = 1;
 FUNC_3(VAR_0, VAR_7->path, &VAR_5);

 return 0;
}
