
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; } ;
struct TYPE_4__ {TYPE_1__ parent; } ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static
void FUNC_2(
   void * VAR_1
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2;
   VAR_2 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_1;

   if (
         FUNC_1(&VAR_2->parent.state_machine)
      != VAR_0
      )
   {
      FUNC_0(
         &VAR_2->parent.state_machine,
         VAR_0
      );
   }
}
