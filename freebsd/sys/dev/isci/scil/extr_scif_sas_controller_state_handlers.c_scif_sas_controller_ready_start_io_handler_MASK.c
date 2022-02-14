
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_21__ {int core_object; } ;
struct TYPE_17__ {TYPE_3__* state_handlers; int core_object; } ;
struct TYPE_20__ {TYPE_4__ parent; } ;
struct TYPE_19__ {TYPE_2__* domain; int core_object; } ;
struct TYPE_18__ {int state_machine; } ;
struct TYPE_16__ {int (* complete_handler ) (TYPE_5__*) ;} ;
struct TYPE_15__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_14__ {scalar_t__ (* start_io_handler ) (int *,int *,TYPE_5__*) ;int (* complete_io_handler ) (int *,int *,TYPE_5__*) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_5__ SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_6__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_7__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_8__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *,TYPE_5__*) ;
 int FUNC_6 (int *,int *,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_8(
   SCI_BASE_CONTROLLER_T * VAR_4,
   SCI_BASE_REMOTE_DEVICE_T * VAR_5,
   SCI_BASE_REQUEST_T * VAR_6,
   U16 VAR_7
)
{
   SCI_STATUS VAR_8;
   SCIF_SAS_IO_REQUEST_T *VAR_9 = (SCIF_SAS_IO_REQUEST_T*)VAR_6;
   SCIF_SAS_CONTROLLER_T *VAR_10 = (SCIF_SAS_CONTROLLER_T*)VAR_4;
   SCIF_SAS_REMOTE_DEVICE_T *VAR_11 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                             VAR_5;

   FUNC_0((
      FUNC_2(VAR_10),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_start_io_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));

   VAR_8 = VAR_11->domain->state_handlers->start_io_handler(
               &VAR_11->domain->parent, VAR_5, VAR_6
            );



   if (VAR_8 == VAR_3)
   {

      VAR_8 = (SCI_STATUS)FUNC_4(
                  VAR_10->core_object,
                  VAR_11->core_object,
                  VAR_9->parent.core_object,
                  VAR_7
               );

      if (VAR_8 == VAR_3)
      {



         FUNC_3(
            &VAR_6->state_machine, VAR_2
         );
      }
      else
      {




         VAR_11->domain->state_handlers->complete_io_handler(
            &VAR_11->domain->parent, VAR_5, VAR_6
         );




         VAR_9->parent.state_handlers->complete_handler(VAR_6);

         FUNC_1((
            FUNC_2(VAR_10),
            VAR_0,
            "Controller:0x%x IORequest:0x%x Status:0x%x core IO start failed\n",
            VAR_10, VAR_9, VAR_8
         ));
      }
   }
   else
   {
      FUNC_1((
         FUNC_2(VAR_10),
         VAR_0,
         "Controller:0x%x IORequest:0x%x Status:0x%x IO start failed\n",
         VAR_10, VAR_9, VAR_8
      ));
   }

   return VAR_8;
}
