
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_9__ {size_t remote_node_entries; TYPE_3__** device_table; } ;
struct TYPE_6__ {scalar_t__ current_state_id; } ;
struct TYPE_7__ {TYPE_1__ state_machine; } ;
struct TYPE_8__ {TYPE_2__ parent; } ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

BOOL FUNC_0(
   SCIC_SDS_CONTROLLER_T * VAR_3
)
{
   U32 VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_3->remote_node_entries; VAR_4++)
   {
      if (
            (VAR_3->device_table[VAR_4] != ((void*)0))
         && (
               VAR_3->device_table[VAR_4]->parent.state_machine.current_state_id
            == VAR_1
            )
         )
      {
         return VAR_2;
      }
   }

   return VAR_0;
}
