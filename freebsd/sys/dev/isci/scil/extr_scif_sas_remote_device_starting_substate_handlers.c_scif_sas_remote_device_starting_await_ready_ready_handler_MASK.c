
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {scalar_t__ destination_state; int domain; TYPE_1__ parent; } ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static
void FUNC_2(
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3
)
{

   if (VAR_3->destination_state ==
          VAR_0)
   {
      {
         FUNC_0(
            &VAR_3->parent.state_machine,
            VAR_2
         );
      }
   }
   else

   {
      FUNC_0(
         &VAR_3->parent.state_machine, VAR_1
      );
   }


   FUNC_1(VAR_3->domain,VAR_3);

}
