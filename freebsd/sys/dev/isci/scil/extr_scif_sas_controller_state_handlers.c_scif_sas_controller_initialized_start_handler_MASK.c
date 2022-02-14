
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_13__ {int state_machine; } ;
struct TYPE_15__ {scalar_t__ internal_request_entries; TYPE_4__ parent; int core_object; TYPE_3__* domains; int internal_request_memory_pool; TYPE_5__* mdes; } ;
struct TYPE_14__ {void* virtual_address; } ;
struct TYPE_11__ {scalar_t__ status; } ;
struct TYPE_10__ {int state_machine; } ;
struct TYPE_12__ {TYPE_2__ operation; TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_5__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_6__ SCIF_SAS_CONTROLLER_T ;
typedef int POINTER_UINT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static
SCI_STATUS FUNC_10(
   SCI_BASE_CONTROLLER_T * VAR_8,
   U32 VAR_9
)
{
   SCI_STATUS VAR_10 = VAR_7;
   SCIF_SAS_CONTROLLER_T * VAR_11 = (SCIF_SAS_CONTROLLER_T *)VAR_8;
   U16 VAR_12 = 0;

   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T VAR_13 =
      VAR_11->mdes[VAR_2];

   void * VAR_14 = VAR_13.virtual_address;
   POINTER_UINT VAR_15 = (POINTER_UINT)VAR_14;

   FUNC_1((
      FUNC_2(VAR_11),
      VAR_0 | VAR_1,
      "scif_sas_controller_initialized_start_handler(0x%x, 0x%x) enter\n",
      VAR_8, VAR_9
   ));

   FUNC_3(
      &VAR_11->parent.state_machine,
      VAR_4
   );

   VAR_10 = FUNC_8(VAR_11);



   if (VAR_10 == VAR_7)
   {

      FUNC_4(VAR_11->internal_request_memory_pool);

      for (VAR_12 = 0; VAR_12 < VAR_11->internal_request_entries; VAR_12++)
      {
         FUNC_5(VAR_11->internal_request_memory_pool, VAR_15);

         VAR_15 += FUNC_9();
      }



      FUNC_7(VAR_11);
   }

   if (VAR_10 == VAR_7)
   {





      for (VAR_12 = 0;
           (VAR_12 < VAR_6) && (VAR_10 == VAR_7);
           VAR_12++)
      {
         FUNC_3(
            &VAR_11->domains[VAR_12].parent.state_machine,
            VAR_5
         );
         VAR_10 = VAR_11->domains[VAR_12].operation.status;
      }
   }


   if (VAR_10 != VAR_7)
   {
      FUNC_0((
         FUNC_2(VAR_11),
         VAR_0 | VAR_1,
         "Controller:0x%x Domain:0x%x Status:0x%x unable to start\n",
         VAR_11, VAR_12, VAR_10
      ));

      return VAR_10;
   }


   VAR_10 = FUNC_6(VAR_11->core_object, VAR_9);
   if (VAR_10 != VAR_7)
   {
      FUNC_0((
         FUNC_2(VAR_11),
         VAR_0 | VAR_1,
         "Controller:0x%x Status:0x%x unable to start controller.\n",
         VAR_11, VAR_10
      ));

      FUNC_3(
         &VAR_11->parent.state_machine,
         VAR_3
      );
   }

   return VAR_10;
}
