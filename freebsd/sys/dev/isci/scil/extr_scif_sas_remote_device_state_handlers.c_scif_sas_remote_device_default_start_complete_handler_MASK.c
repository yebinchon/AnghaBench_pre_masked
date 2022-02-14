
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void FUNC_3(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1,
   SCI_STATUS VAR_2
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "RemoteDevice:0x%x State:0x%x invalid state to start complete\n",
      VAR_1,
      FUNC_2(&VAR_1->parent.state_machine)
   ));
}
