
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int U32 ;
typedef size_t U16 ;
struct TYPE_17__ {size_t task_context_entries; size_t logical_port_entries; int timeout_timer; TYPE_3__* port_table; int remote_node_entries; int available_remote_nodes; int tci_pool; } ;
struct TYPE_16__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_14__ {scalar_t__ (* start_handler ) (int *) ;} ;
struct TYPE_15__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_16(
   SCI_BASE_CONTROLLER_T * VAR_2,
   U32 VAR_3
)
{
   U16 VAR_4;
   SCI_STATUS VAR_5;
   SCIC_SDS_CONTROLLER_T * VAR_6;

   VAR_6 = (SCIC_SDS_CONTROLLER_T *)VAR_2;


   VAR_5 = FUNC_13(VAR_6);

   if (VAR_5 == VAR_1)
   {

      FUNC_11(VAR_6);
   }

   if (VAR_1 == VAR_5)
   {

      FUNC_1(VAR_6->tci_pool);
      for (VAR_4 = 0; VAR_4 < VAR_6->task_context_entries; VAR_4++)
      {
         FUNC_2(VAR_6->tci_pool, VAR_4);
      }


      FUNC_14(
         &VAR_6->available_remote_nodes,
         VAR_6->remote_node_entries
      );
   }

   if (VAR_1 == VAR_5)
   {


      FUNC_4(VAR_2);


      FUNC_6(VAR_6);


      FUNC_5(VAR_6);


      FUNC_8(VAR_6);


      FUNC_10(VAR_6);


      VAR_5 = FUNC_9(VAR_6);
   }


   for (
          VAR_4 = 0;
          (VAR_4 < VAR_6->logical_port_entries) && (VAR_5 == VAR_1);
          VAR_4++
       )
   {
      VAR_5 = VAR_6->port_table[VAR_4].
         state_handlers->parent.start_handler(&VAR_6->port_table[VAR_4].parent);
   }

   if (VAR_1 == VAR_5)
   {
      FUNC_12(VAR_6);


      if (VAR_3 != 0)
         FUNC_3(VAR_2, VAR_6->timeout_timer, VAR_3);

      FUNC_0(
         FUNC_7(VAR_6),
         VAR_0
      );
   }

   return VAR_5;
}
