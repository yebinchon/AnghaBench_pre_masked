
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_9__ {TYPE_2__* remote_node_context_table; } ;
struct TYPE_8__ {size_t reserved_rni; int physical_port_index; TYPE_5__* owning_controller; } ;
struct TYPE_6__ {int is_valid; } ;
struct TYPE_7__ {TYPE_1__ ssp; } ;
typedef TYPE_2__ SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static
void FUNC_2(
      SCIC_SDS_PORT_T *VAR_5
)
{
   U32 VAR_6;
   SCU_REMOTE_NODE_CONTEXT_T * VAR_7;

   if (VAR_5->reserved_rni != VAR_3)
   {
   VAR_7 = &(VAR_5->owning_controller->remote_node_context_table[VAR_5->reserved_rni]);

   VAR_7->ssp.is_valid = VAR_4;

   VAR_6 = (
       (VAR_1)
     | (VAR_5->physical_port_index << VAR_0)
     | (VAR_5->reserved_rni)
   );

   FUNC_1(VAR_5->owning_controller, VAR_6);

   FUNC_0(10);

   VAR_6 = (
       (VAR_2)
     | (VAR_5->physical_port_index << VAR_0)
     | (VAR_5->reserved_rni)
   );

   FUNC_1(VAR_5->owning_controller, VAR_6);
}
}
