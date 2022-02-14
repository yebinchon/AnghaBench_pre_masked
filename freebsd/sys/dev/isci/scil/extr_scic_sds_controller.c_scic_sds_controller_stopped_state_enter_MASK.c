
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int port_agent; int * timeout_timer; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_CONTROLLER_T *VAR_3;
   VAR_3= (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_2(
      VAR_3, VAR_0);


   FUNC_1(
      VAR_3,
      VAR_3->timeout_timer
   );
   VAR_3->timeout_timer = ((void*)0);


   FUNC_3(VAR_3);

   FUNC_4(
      VAR_3,
      &VAR_3->port_agent
   );

   FUNC_0(VAR_3, VAR_1);
}
