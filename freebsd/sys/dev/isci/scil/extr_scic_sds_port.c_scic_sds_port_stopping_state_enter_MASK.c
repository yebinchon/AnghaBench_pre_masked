
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {scalar_t__ started_request_count; TYPE_1__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_PORT_T *VAR_3;
   VAR_3 = (SCIC_SDS_PORT_T *)VAR_2;

   FUNC_1(
      VAR_3, VAR_1
   );

   if (VAR_3->started_request_count == 0)
   {
      FUNC_0(
         &VAR_3->parent.state_machine,
         VAR_0
      );
   }
}
