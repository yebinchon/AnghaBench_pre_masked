
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {TYPE_2__ parent; TYPE_1__* domain; } ;
struct TYPE_5__ {int device_start_in_progress_count; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS
FUNC_3(
   SCI_BASE_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_3;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0,
      "RemoteDevice:0x%x starting device requested to stop\n",
      VAR_4
   ));

   VAR_4->domain->device_start_in_progress_count--;

   FUNC_2(
      &VAR_4->parent.state_machine, VAR_1
   );

   return VAR_2;
}
