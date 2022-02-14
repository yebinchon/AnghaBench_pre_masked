
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_2__ {int interrupt_coalesce_timeout; int interrupt_coalesce_number; } ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;



void FUNC_0(
   SCI_CONTROLLER_HANDLE_T VAR_0,
   U32 * VAR_1,
   U32 * VAR_2
)
{
   SCIC_SDS_CONTROLLER_T * VAR_3 = (SCIC_SDS_CONTROLLER_T *)VAR_0;
   *VAR_1 = VAR_3->interrupt_coalesce_number;
   *VAR_2 = VAR_3->interrupt_coalesce_timeout;
}
