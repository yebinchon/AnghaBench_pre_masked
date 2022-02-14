
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int parent; TYPE_2__* state_handlers; int destruct_when_stopped; } ;
struct TYPE_4__ {int (* stop_handler ) (int *) ;} ;
struct TYPE_5__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCI_BASE_REMOTE_DEVICE_T * VAR_1
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_1;

   VAR_2->destruct_when_stopped = VAR_0;

   return (VAR_2->state_handlers->parent.stop_handler(&VAR_2->parent));
}
