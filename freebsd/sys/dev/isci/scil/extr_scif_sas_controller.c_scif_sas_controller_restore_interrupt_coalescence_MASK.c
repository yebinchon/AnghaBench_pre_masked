
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int saved_interrupt_coalesce_timeout; int saved_interrupt_coalesce_number; int core_object; } ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(
   SCIF_SAS_CONTROLLER_T * VAR_0
)
{
   if ( !FUNC_1(VAR_0))
      FUNC_0(
         VAR_0->core_object,
         VAR_0->saved_interrupt_coalesce_number,
         VAR_0->saved_interrupt_coalesce_timeout
      );
}
