
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_5__ {int (* destruct_handler ) (int *) ;} ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_3__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4;
   VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_destruct(0x%x) enter\n",
      VAR_3
   ));

   return VAR_4->state_handlers->parent.destruct_handler(&VAR_4->parent);
}
