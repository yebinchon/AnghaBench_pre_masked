
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_CONTROLLER_T * VAR_1,
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2
)
{
   if (!FUNC_1(VAR_1))
   {
      FUNC_0(
         &VAR_1->parent.state_machine,
         VAR_0
      );
   }
}
