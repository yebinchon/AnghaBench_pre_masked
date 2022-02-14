
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * timer_handle; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIC_SDS_PORT_T *VAR_1;
   VAR_1 = (SCIC_SDS_PORT_T *)VAR_0;

   FUNC_1(
      FUNC_3(VAR_1),
      VAR_1->timer_handle
   );

   FUNC_0(
      FUNC_3(VAR_1),
      VAR_1->timer_handle
   );
   VAR_1->timer_handle = ((void*)0);

   FUNC_2(VAR_1);
}
