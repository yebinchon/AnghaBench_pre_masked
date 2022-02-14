
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int semaphore; int port_protocol; int status; } ;
typedef TYPE_1__ ocs_mgmt_get_port_protocol_result_t ;
typedef int ocs_hw_port_protocol_e ;
typedef int int32_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(int32_t VAR_0,
         ocs_hw_port_protocol_e VAR_1,
         void *VAR_2)
{
 ocs_mgmt_get_port_protocol_result_t *VAR_3 = VAR_2;

 VAR_3->status = VAR_0;
 VAR_3->port_protocol = VAR_1;

 FUNC_0(&(VAR_3->semaphore));
}
