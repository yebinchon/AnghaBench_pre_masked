
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_4__ {int core_object; int saved_interrupt_coalesce_timeout; int saved_interrupt_coalesce_number; } ;
typedef TYPE_1__ SCIF_SAS_CONTROLLER_T ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(
   SCIF_SAS_CONTROLLER_T * VAR_0
)
{
   if ( !FUNC_2(VAR_0))
   {



      FUNC_0(
         VAR_0->core_object,
         (U32*)&(VAR_0->saved_interrupt_coalesce_number),
         &(VAR_0->saved_interrupt_coalesce_timeout)
      );


      FUNC_1(VAR_0->core_object,0,0);
   }
}
