
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {scalar_t__ destination_state; scalar_t__ device_port_width; TYPE_1__ parent; int core_object; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static
void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5,
   SCI_STATUS VAR_6
)
{
   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0,
      "RemoteDevice:0x%x updating port width state start complete handler\n",
      VAR_5,
      FUNC_3(&VAR_5->parent.state_machine)
   ));

   if ( VAR_5->destination_state
           == VAR_2 )
   {



      FUNC_2(
         &VAR_5->parent.state_machine,
         VAR_4
      );
   }
   else if ( FUNC_4(VAR_5->core_object)
                != VAR_5->device_port_width
            && VAR_5->device_port_width != 0)
   {
      FUNC_5(
         VAR_5->core_object,
         VAR_1
      );
   }
   else
   {

      FUNC_2(
         &VAR_5->parent.state_machine,
         VAR_3
      );
   }
}
