
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCI_BASE_REMOTE_DEVICE_T * VAR_2
)
{
   FUNC_0((
      FUNC_1((SCIF_SAS_REMOTE_DEVICE_T *)VAR_2),
      VAR_0,
      "RemoteDevice:0x%x State:0x%x invalid state to complete reset.\n",
      VAR_2,
      FUNC_2(
         &((SCIF_SAS_REMOTE_DEVICE_T *)VAR_2)->parent.state_machine)
   ));

   return VAR_1;
}
