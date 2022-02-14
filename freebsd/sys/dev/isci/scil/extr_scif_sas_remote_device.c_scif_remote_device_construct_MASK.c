
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_9__ {int parent; } ;
struct TYPE_8__ {int core_object; } ;
struct TYPE_7__ {int device_port_width; int core_object; TYPE_5__ parent; int ready_substate_machine; int starting_substate_machine; int * ea_target_reset_request_scheduled; int destination_state; scalar_t__ expander_phy_identifier; int * containing_device; int is_currently_discovered; scalar_t__ task_request_count; scalar_t__ request_count; int operation_status; int destruct_when_stopped; TYPE_2__* domain; } ;
typedef void* SCI_REMOTE_DEVICE_HANDLE_T ;
typedef scalar_t__ SCI_DOMAIN_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_8(
   SCI_DOMAIN_HANDLE_T VAR_10,
   void * VAR_11,
   SCI_REMOTE_DEVICE_HANDLE_T * VAR_12
)
{
   SCIF_SAS_DOMAIN_T * VAR_13 = (SCIF_SAS_DOMAIN_T *) VAR_10;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_14 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_11;

   FUNC_0((
      FUNC_2(VAR_13),
      VAR_1,
      "scif_remote_device_construct(0x%x, 0x%x, 0x%x) enter\n",
      VAR_10, VAR_11, VAR_12
   ));

   FUNC_1(VAR_11, 0, sizeof(SCIF_SAS_REMOTE_DEVICE_T));



   *VAR_12 = VAR_11;

   VAR_14->domain = VAR_13;
   VAR_14->destruct_when_stopped = VAR_0;

   VAR_14->operation_status = VAR_5;
   VAR_14->request_count = 0;
   VAR_14->task_request_count = 0;
   VAR_14->is_currently_discovered = VAR_6;
   VAR_14->containing_device = ((void*)0);
   VAR_14->device_port_width = 1;
   VAR_14->expander_phy_identifier = 0;
   VAR_14->destination_state =
      VAR_2;
   VAR_14->ea_target_reset_request_scheduled = ((void*)0);



   FUNC_3(
      &VAR_14->parent,
      FUNC_2(VAR_13),
      VAR_9
   );

   FUNC_4(
      &VAR_14->starting_substate_machine,
      &VAR_14->parent.parent,
      VAR_8,
      VAR_4
   );

   FUNC_4(
      &VAR_14->ready_substate_machine,
      &VAR_14->parent.parent,
      VAR_7,
      VAR_3
   );

   FUNC_7(VAR_14);

   FUNC_6(
      VAR_13->core_object,
      ((U8*) VAR_11) + sizeof(SCIF_SAS_REMOTE_DEVICE_T),
      &VAR_14->core_object
   );




   FUNC_5(VAR_14->core_object, VAR_14);
}
