
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ current_activity; } ;
struct TYPE_7__ {TYPE_1__ smp_device; } ;
struct TYPE_10__ {int parent; TYPE_3__* state_handlers; TYPE_2__ protocol_device; } ;
struct TYPE_9__ {int parent; int list_element; int core_object; } ;
struct TYPE_8__ {int (* complete_high_priority_io_handler ) (int *,int *,void*,int ) ;} ;
typedef int SCI_STATUS ;
typedef int SCI_IO_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_DOMAIN_T ;
typedef TYPE_4__ SCIF_SAS_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef scalar_t__ SCIC_TRANSPORT_PROTOCOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,void*,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_DOMAIN_T * VAR_4,
   SCI_BASE_REMOTE_DEVICE_T * VAR_5,
   SCI_BASE_REQUEST_T * VAR_6,
   void * VAR_7,
   SCI_IO_STATUS VAR_8
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_5;
   SCIF_SAS_REQUEST_T * VAR_10= (SCIF_SAS_REQUEST_T*) VAR_6;

   SCIC_TRANSPORT_PROTOCOL VAR_11;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_2,
      "scif_sas_domain_ready_complete_high_priority_io_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));

   VAR_11 = FUNC_3(VAR_10->core_object);






   if (
         (VAR_11 != VAR_0)
      || (VAR_9->protocol_device.smp_device.current_activity !=
                VAR_3)
      )
   {
      FUNC_2(&VAR_10->list_element);
   }

   return VAR_9->state_handlers->complete_high_priority_io_handler(
             &VAR_9->parent, &VAR_10->parent, VAR_7, VAR_8
          );
}
