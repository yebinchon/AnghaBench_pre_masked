
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ previous_state_id; } ;
struct TYPE_7__ {TYPE_1__ state_machine; } ;
struct TYPE_8__ {TYPE_2__ parent; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_PORT_T *VAR_3;
   VAR_3 = (SCIC_SDS_PORT_T *)VAR_2;

   FUNC_1(
      VAR_3, VAR_0
   );

   if (
         VAR_1
      == VAR_3->parent.state_machine.previous_state_id
      )
   {



      FUNC_0(VAR_3);
   }
}
