
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int parent; TYPE_4__* state_handlers; TYPE_2__* domain; } ;
struct TYPE_9__ {int (* destruct_handler ) (int *) ;} ;
struct TYPE_10__ {TYPE_3__ parent; } ;
struct TYPE_8__ {int parent; TYPE_1__* state_handlers; } ;
struct TYPE_7__ {int (* device_destruct_handler ) (int *,int *) ;} ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

SCI_STATUS FUNC_4(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_1
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_2 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_1;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scif_remote_device_destruct(0x%x) enter\n",
      VAR_1
   ));


   VAR_2->domain->state_handlers->device_destruct_handler(
      &VAR_2->domain->parent, &VAR_2->parent
   );




   return VAR_2->state_handlers->parent.destruct_handler(
             &VAR_2->parent
          );
}
