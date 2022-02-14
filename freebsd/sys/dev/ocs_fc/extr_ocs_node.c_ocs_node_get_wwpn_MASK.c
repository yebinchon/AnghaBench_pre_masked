
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long long uint64_t ;
struct TYPE_4__ {scalar_t__ service_params; } ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_5__ {int port_name_lo; int port_name_hi; } ;
typedef TYPE_2__ fc_plogi_payload_t ;


 long long FUNC_0 (int ) ;

uint64_t
FUNC_1(ocs_node_t *VAR_0)
{
 fc_plogi_payload_t *VAR_1 = (fc_plogi_payload_t*) VAR_0->service_params;

 return (((uint64_t)FUNC_0(VAR_1->port_name_hi) << 32ll) | (FUNC_0(VAR_1->port_name_lo)));
}
