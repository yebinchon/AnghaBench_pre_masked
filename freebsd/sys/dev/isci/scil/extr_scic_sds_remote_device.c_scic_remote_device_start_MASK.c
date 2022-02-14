
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_7__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_5__ {int (* start_handler ) (int *) ;} ;
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
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3,
   U32 VAR_4
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_5;
   VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_start(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));

   return VAR_5->state_handlers->parent.start_handler(&VAR_5->parent);
}
