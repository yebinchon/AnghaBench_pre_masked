
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int not_ready_reason; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIC_SDS_PORT_T *VAR_1 = (SCIC_SDS_PORT_T *)VAR_0;




   FUNC_1(VAR_1);

   FUNC_0(
      FUNC_2(VAR_1),
      VAR_1,
      VAR_1->not_ready_reason
   );
}
