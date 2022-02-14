
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer_handle; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIC_SDS_PORT_T *VAR_1;
   VAR_1 = (SCIC_SDS_PORT_T *)VAR_0;

   FUNC_0(
      FUNC_1(VAR_1),
      VAR_1->timer_handle
   );
}
