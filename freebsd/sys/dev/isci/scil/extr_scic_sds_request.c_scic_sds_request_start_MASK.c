
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ device_sequence; int parent; TYPE_2__* state_handlers; int target_device; } ;
struct TYPE_5__ {int (* start_handler ) (int *) ;} ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

SCI_STATUS FUNC_2(
   SCIC_SDS_REQUEST_T *VAR_1
)
{
   if (
         VAR_1->device_sequence
      == FUNC_0(VAR_1->target_device)
      )
   {
      return VAR_1->state_handlers->parent.start_handler(
                &VAR_1->parent
             );
   }

   return VAR_0;
}
