
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {int destination_state; TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4 =
      (SCIF_SAS_REMOTE_DEVICE_T *)VAR_3;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0,
      "RemoteDevice:0x%x updating port width state stop handler\n",
      VAR_4,
      FUNC_2(&VAR_4->parent.state_machine)
   ));




   VAR_4->destination_state =
      VAR_1;

   return VAR_2;
}
