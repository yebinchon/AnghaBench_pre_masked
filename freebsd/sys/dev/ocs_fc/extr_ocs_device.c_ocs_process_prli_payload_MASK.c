
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int init; int targ; int fcp2device; int fc_type; } ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_6__ {int type; int service_params; } ;
typedef TYPE_2__ fc_prli_payload_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

void
FUNC_1(ocs_node_t *VAR_3, fc_prli_payload_t *VAR_4)
{
 VAR_3->init = (FUNC_0(VAR_4->service_params) & VAR_0) != 0;
 VAR_3->targ = (FUNC_0(VAR_4->service_params) & VAR_2) != 0;
 VAR_3->fcp2device = (FUNC_0(VAR_4->service_params) & VAR_1) != 0;
 VAR_3->fc_type = VAR_4->type;
}
