
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_9__ {void* count; } ;
struct TYPE_8__ {void* count; } ;
struct TYPE_10__ {TYPE_2__ address_table; TYPE_1__ buffers; } ;
struct TYPE_11__ {int logical_port_entries; TYPE_3__ uf_control; int task_context_entries; int remote_node_entries; int completion_queue_entries; int completion_event_entries; scalar_t__ invalid_phy_mask; int * port_table; int * phy_table; int port_agent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,TYPE_4__*) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_9
)
{
   U8 VAR_10;
   SCIC_SDS_CONTROLLER_T *VAR_11;
   VAR_11= (SCIC_SDS_CONTROLLER_T *)VAR_9;

   FUNC_0(
      VAR_11, VAR_1);

   FUNC_3(&VAR_11->port_agent);


   for (VAR_10 = 0; VAR_10 < (VAR_3 + 1); VAR_10++)
   {
      FUNC_4(
         &VAR_11->port_table[VAR_10],
         (VAR_10 == VAR_3) ? VAR_0 : VAR_10,
         VAR_11
      );
   }


   for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
   {

      FUNC_2(
         &VAR_11->phy_table[VAR_10],
         &VAR_11->port_table[VAR_3],
         VAR_10
      );
   }

   VAR_11->invalid_phy_mask = 0;


   VAR_11->completion_event_entries = VAR_6;
   VAR_11->completion_queue_entries = VAR_5;
   VAR_11->remote_node_entries = VAR_4;
   VAR_11->logical_port_entries = VAR_3;
   VAR_11->task_context_entries = VAR_7;
   VAR_11->uf_control.buffers.count = VAR_8;
   VAR_11->uf_control.address_table.count= VAR_8;


   FUNC_1(VAR_11);
}
