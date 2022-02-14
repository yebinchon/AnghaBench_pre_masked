
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef scalar_t__ U8 ;
typedef int U16 ;
struct TYPE_22__ {int core_object; scalar_t__ is_internal; TYPE_2__* state_handlers; } ;
struct TYPE_28__ {scalar_t__ retry_count; TYPE_3__ parent; } ;
struct TYPE_24__ {int * smp_activity_timer; } ;
struct TYPE_25__ {TYPE_5__ smp_device; } ;
struct TYPE_27__ {TYPE_6__ protocol_device; TYPE_4__* domain; int core_object; } ;
struct TYPE_26__ {int state_machine; } ;
struct TYPE_23__ {int controller; int parent; TYPE_1__* state_handlers; } ;
struct TYPE_21__ {int (* complete_handler ) (TYPE_7__*) ;} ;
struct TYPE_20__ {scalar_t__ (* start_high_priority_io_handler ) (int *,int *,TYPE_7__*) ;int (* complete_io_handler ) (int *,int *,TYPE_7__*) ;} ;
struct TYPE_19__ {int core_object; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_7__ SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_8__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_9__ SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_INTERNAL_IO_REQUEST_T ;
typedef TYPE_10__ SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ SCIC_TRANSPORT_PROTOCOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_10__*,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_8__*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int *,int *,TYPE_7__*) ;
 int FUNC_9 (int *,int *,TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_12(
   SCI_BASE_CONTROLLER_T * VAR_6,
   SCI_BASE_REMOTE_DEVICE_T * VAR_7,
   SCI_BASE_REQUEST_T * VAR_8,
   U16 VAR_9
)
{
   SCI_STATUS VAR_10;
   SCIF_SAS_IO_REQUEST_T *VAR_11 = (SCIF_SAS_IO_REQUEST_T*)VAR_8;
   SCIF_SAS_CONTROLLER_T *VAR_12 = (SCIF_SAS_CONTROLLER_T*)VAR_6;
   SCIF_SAS_REMOTE_DEVICE_T *VAR_13 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                             VAR_7;

   VAR_10 = VAR_13->domain->state_handlers->start_high_priority_io_handler(
               &VAR_13->domain->parent, VAR_7, VAR_8
            );



   if (VAR_10 == VAR_4)
   {

      VAR_10 = (SCI_STATUS)FUNC_3(
                  VAR_12->core_object,
                  VAR_13->core_object,
                  VAR_11->parent.core_object,
                  VAR_9
               );

      if (VAR_10 == VAR_4)
      {



         FUNC_2(
            &VAR_8->state_machine, VAR_3
         );
      }
      else
      {




         VAR_13->domain->state_handlers->complete_io_handler(
            &VAR_13->domain->parent, VAR_7, VAR_8
         );




         VAR_11->parent.state_handlers->complete_handler(VAR_8);

         FUNC_0((
            FUNC_1(VAR_12),
            VAR_1,
            "Controller:0x%x IORequest:0x%x Status:0x%x core IO start failed\n",
            VAR_12, VAR_11, VAR_10
         ));
      }
   }
   else
   {
      FUNC_0((
         FUNC_1(VAR_12),
         VAR_1,
         "Controller:0x%x IORequest:0x%x Status:0x%x IO start failed\n",
         VAR_12, VAR_11, VAR_10
      ));




      VAR_11->parent.state_handlers->complete_handler(VAR_8);

   }

   if (VAR_11->parent.is_internal && VAR_10 != VAR_4 )
   {
      SCIC_TRANSPORT_PROTOCOL VAR_14 =
         FUNC_4(VAR_11->parent.core_object);

      U8 VAR_15 = VAR_11->retry_count;

      FUNC_6(
         VAR_13->domain->controller,
         (SCIF_SAS_INTERNAL_IO_REQUEST_T *)VAR_11
      );

      if ( VAR_14 == VAR_0 )
      {
         if (VAR_13->protocol_device.smp_device.smp_activity_timer != ((void*)0))
         {

            FUNC_5 (
               VAR_12,
               VAR_13->protocol_device.smp_device.smp_activity_timer
            );

            VAR_13->protocol_device.smp_device.smp_activity_timer = ((void*)0);
         }


         if ( VAR_15 < VAR_2)
         {



         FUNC_7(
            (SCIF_SAS_REMOTE_DEVICE_T *)VAR_7,
            VAR_15,
            VAR_5
         );
      }
   }
   }

   return VAR_10;
}
