
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* viit_registers; void* port_pe_configuration_register; void* port_task_scheduler_registers; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;

SCI_STATUS FUNC_0(
   SCIC_SDS_PORT_T *VAR_1,
   void *VAR_2,
   void *VAR_3,
   void *VAR_4
)
{
   VAR_1->port_task_scheduler_registers = VAR_2;
   VAR_1->port_pe_configuration_register = VAR_3;
   VAR_1->viit_registers = VAR_4;

   return VAR_0;
}
