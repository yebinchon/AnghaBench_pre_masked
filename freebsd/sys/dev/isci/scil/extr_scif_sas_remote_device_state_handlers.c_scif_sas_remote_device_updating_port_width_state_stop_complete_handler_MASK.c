
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state_machine; } ;
struct TYPE_8__ {scalar_t__ destination_state; int core_object; int device_port_width; TYPE_2__ parent; TYPE_1__* domain; } ;
struct TYPE_6__ {int device_start_count; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static
void FUNC_6(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   SCI_STATUS VAR_5
)
{
   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0,
      "RemoteDevice:0x%x updating port width state stop complete handler\n",
      VAR_4,
      FUNC_3(&VAR_4->parent.state_machine)
   ));

   if ( VAR_4->destination_state
           == VAR_2 )
   {

      VAR_4->domain->device_start_count--;




      FUNC_2(
         &VAR_4->parent.state_machine,
         VAR_3
      );
   }
   else
   {
      FUNC_4(
         VAR_4->core_object,
         VAR_4->device_port_width
      );



      FUNC_5(
         VAR_4->core_object, VAR_1);
   }
}
