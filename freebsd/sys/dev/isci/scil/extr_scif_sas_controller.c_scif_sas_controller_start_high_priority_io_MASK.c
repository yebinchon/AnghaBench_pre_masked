
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pool; } ;
struct TYPE_12__ {TYPE_3__* state_handlers; TYPE_2__ hprq; } ;
struct TYPE_8__ {scalar_t__ device; } ;
struct TYPE_11__ {TYPE_1__ parent; } ;
struct TYPE_10__ {int (* start_high_priority_io_handler ) (int *,int *,int *,int ) ;} ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_4__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_5__ SCIF_SAS_CONTROLLER_T ;
typedef scalar_t__ POINTER_UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int *,int *,int ) ;

void FUNC_5(
   SCIF_SAS_CONTROLLER_T * VAR_3
)
{
   POINTER_UINT VAR_4;
   SCIF_SAS_IO_REQUEST_T * VAR_5;
   SCI_STATUS VAR_6;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_controller_start_high_priority_io(0x%x) enter\n",
      VAR_3
   ));

   while ( !FUNC_2(VAR_3->hprq.pool) )
   {
      FUNC_3(VAR_3->hprq.pool, VAR_4);

      VAR_5 = (SCIF_SAS_IO_REQUEST_T *)VAR_4;

      VAR_6 = VAR_3->state_handlers->start_high_priority_io_handler(
         (SCI_BASE_CONTROLLER_T*) VAR_3,
         (SCI_BASE_REMOTE_DEVICE_T*) VAR_5->parent.device,
         (SCI_BASE_REQUEST_T*) VAR_5,
         VAR_2
      );
   }
}
