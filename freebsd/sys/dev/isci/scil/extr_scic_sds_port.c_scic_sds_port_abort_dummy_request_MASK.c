
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int reserved_tci; int physical_port_index; int owning_controller; } ;
struct TYPE_5__ {int abort; } ;
typedef TYPE_1__ SCU_TASK_CONTEXT_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_PORT_T *VAR_3
)
{
   U32 VAR_4;
   SCU_TASK_CONTEXT_T * VAR_5;

   if (VAR_3->reserved_tci != VAR_2)
   {
   VAR_5 = FUNC_0(
                     VAR_3->owning_controller,
                     VAR_3->reserved_tci
                  );

   VAR_5->abort = 1;

   VAR_4 = (
        (VAR_1)
      | (VAR_3->physical_port_index << VAR_0)
      | (VAR_3->reserved_tci)
   );

   FUNC_1(VAR_3->owning_controller, VAR_4);
}
}
