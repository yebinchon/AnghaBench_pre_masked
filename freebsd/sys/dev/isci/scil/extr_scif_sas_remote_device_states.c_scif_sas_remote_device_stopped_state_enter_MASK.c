
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ request_count; scalar_t__ destruct_when_stopped; int parent; TYPE_4__* domain; TYPE_2__* state_handlers; int operation_status; } ;
struct TYPE_10__ {int parent; TYPE_3__* state_handlers; } ;
struct TYPE_9__ {int (* device_stop_complete_handler ) (int *,int *) ;} ;
struct TYPE_7__ {int (* destruct_handler ) (int *) ;} ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_5__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_3;

   FUNC_1(
      VAR_4,
      VAR_2,
      VAR_0
   );



   FUNC_0(VAR_4->request_count == 0);



   if (VAR_4->destruct_when_stopped == VAR_1)
      VAR_4->operation_status
         = VAR_4->state_handlers->parent.destruct_handler(
              &VAR_4->parent
           );


   VAR_4->domain->state_handlers->device_stop_complete_handler(
      &VAR_4->domain->parent, &VAR_4->parent
   );
}
