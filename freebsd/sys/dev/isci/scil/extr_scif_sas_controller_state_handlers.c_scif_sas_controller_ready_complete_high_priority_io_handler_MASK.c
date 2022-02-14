
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_16__ {int pool; } ;
struct TYPE_19__ {TYPE_5__ hprq; int core_object; } ;
struct TYPE_13__ {int parent; TYPE_1__* state_handlers; int core_object; } ;
struct TYPE_18__ {TYPE_2__ parent; } ;
struct TYPE_17__ {TYPE_4__* domain; int core_object; } ;
struct TYPE_15__ {int parent; TYPE_3__* state_handlers; } ;
struct TYPE_14__ {scalar_t__ (* complete_high_priority_io_handler ) (int *,int *,int *,void*,int ) ;} ;
struct TYPE_12__ {int (* destruct_handler ) (int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_IO_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
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
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_8__*,int ,TYPE_8__*) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *,void*,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_11(
   SCI_BASE_CONTROLLER_T * VAR_5,
   SCI_BASE_REMOTE_DEVICE_T * VAR_6,
   SCI_BASE_REQUEST_T * VAR_7
)
{
   SCIF_SAS_CONTROLLER_T * VAR_8 = (SCIF_SAS_CONTROLLER_T*)
                                              VAR_5;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_9 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                              VAR_6;
   SCIF_SAS_IO_REQUEST_T * VAR_10 = (SCIF_SAS_IO_REQUEST_T*)
                                              VAR_7;
   SCI_IO_STATUS VAR_11 =
                    FUNC_7(VAR_10->parent.core_object);

   U8 VAR_12[VAR_2];

   SCI_STATUS VAR_13;
   SCI_STATUS VAR_14;

   FUNC_0(*(
      FUNC_3(VAR_8),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_complete_high_priority_io_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_5, VAR_6, VAR_7
   ));




   FUNC_2(VAR_12,
          FUNC_6(VAR_10->parent.core_object),
          VAR_2
         );

   VAR_14 = FUNC_5(
                    VAR_8->core_object,
                    VAR_9->core_object,
                    VAR_10->parent.core_object
                 );

   VAR_10->parent.state_handlers->destruct_handler(&VAR_10->parent.parent);
   VAR_13 = VAR_9->domain->state_handlers->complete_high_priority_io_handler(
               &VAR_9->domain->parent,
               VAR_6,
               VAR_7,
               (void *)VAR_12,
               VAR_11
            );

   if (VAR_13 == VAR_3)
      VAR_13 = VAR_14;

   if (VAR_13 == VAR_3)
   {

      if( !FUNC_4(VAR_8->hprq.pool) )
         FUNC_8(
            VAR_8,
            VAR_4,
            VAR_8
         );
   }
   else
   {
      FUNC_1((
         FUNC_3(VAR_8),
         VAR_0,
         "Controller:0x%x IORequest:0x%x Status:0x%x CoreStatus:0x%x "
         "failure to complete IO\n",
         VAR_8, VAR_10, VAR_13, VAR_14
      ));
   }

   return VAR_13;
}
