
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout_timer; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIC_SDS_CONTROLLER_T *VAR_1;
   VAR_1= (SCIC_SDS_CONTROLLER_T *)VAR_0;

   FUNC_0(VAR_1, VAR_1->timeout_timer);
}
