
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int core_object; } ;
struct TYPE_12__ {int core_object; int parent; TYPE_1__* state_handlers; } ;
struct TYPE_14__ {TYPE_4__ parent; } ;
struct TYPE_13__ {int core_object; TYPE_3__* domain; } ;
struct TYPE_11__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_10__ {scalar_t__ (* complete_io_handler ) (int *,int *,int *) ;} ;
struct TYPE_9__ {int (* destruct_handler ) (int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef TYPE_6__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_7__ SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCI_BASE_CONTROLLER_T * VAR_3,
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCIF_SAS_CONTROLLER_T * VAR_6 = (SCIF_SAS_CONTROLLER_T*)
                                              VAR_3;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_7 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                              VAR_4;
   SCIF_SAS_IO_REQUEST_T * VAR_8 = (SCIF_SAS_IO_REQUEST_T*)
                                              VAR_5;
   SCI_STATUS VAR_9;
   SCI_STATUS VAR_10;

   FUNC_0(*(
      FUNC_2(VAR_6),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_complete_io_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));

   VAR_8->parent.state_handlers->destruct_handler(&VAR_8->parent.parent);
   VAR_9 = VAR_7->domain->state_handlers->complete_io_handler(
               &VAR_7->domain->parent, VAR_4, VAR_5
            );


   VAR_10 = FUNC_3(
                    VAR_6->core_object,
                    VAR_7->core_object,
                    VAR_8->parent.core_object
                 );

   if (VAR_9 == VAR_2)
      VAR_9 = VAR_10;

   if (VAR_9 != VAR_2)
   {
      FUNC_1((
         FUNC_2(VAR_6),
         VAR_0,
         "Controller:0x%x IORequest:0x%x Status:0x%x CoreStatus:0x%x "
         "failure to complete IO\n",
         VAR_6, VAR_8, VAR_9, VAR_10
      ));
   }

   return VAR_9;
}
