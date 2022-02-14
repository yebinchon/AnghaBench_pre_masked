
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* domain; int ready_substate_machine; int request_count; } ;
struct TYPE_9__ {scalar_t__ is_internal; int core_object; } ;
struct TYPE_8__ {int controller; } ;
typedef int SCI_STATUS ;
typedef int SCI_IO_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_INTERNAL_IO_REQUEST_T ;
typedef scalar_t__ SCIC_TRANSPORT_PROTOCOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,void*,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

SCI_STATUS
FUNC_7(
   SCI_BASE_REMOTE_DEVICE_T * VAR_7,
   SCI_BASE_REQUEST_T * VAR_8,
   void * VAR_9,
   SCI_IO_STATUS VAR_10
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_11 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                           VAR_7;
   SCIF_SAS_REQUEST_T * VAR_12 = (SCIF_SAS_REQUEST_T*) VAR_8;
   SCI_STATUS VAR_13 = VAR_5;
   SCIC_TRANSPORT_PROTOCOL VAR_14;

   FUNC_0((
      FUNC_1(VAR_7),
      VAR_2 | VAR_1,
      "scif_sas_remote_device_ready_task_management_complete_high_priority_io_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_7, VAR_8, VAR_9, VAR_10
   ));

   VAR_11->request_count--;


   FUNC_2(
      &VAR_11->ready_substate_machine,
      VAR_3
   );

   VAR_14 = FUNC_3(VAR_12->core_object);



   if (VAR_14 == VAR_0)
   {
      if (VAR_10 != VAR_4)
      {
         VAR_13 = FUNC_5(
                     VAR_11, VAR_12, VAR_9, VAR_10
                  );
      }
      else
         FUNC_6(VAR_11, VAR_12);
   }
   else
   {


      if (VAR_12->is_internal == VAR_6)
      {
         FUNC_4(
            VAR_11->domain->controller,
            (SCIF_SAS_INTERNAL_IO_REQUEST_T *)VAR_12,
            VAR_5
         );
      }
   }

   return VAR_13;
}
