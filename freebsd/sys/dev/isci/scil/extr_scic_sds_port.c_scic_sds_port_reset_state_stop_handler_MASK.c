
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; } ;
struct TYPE_4__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCI_BASE_PORT_T *VAR_2
)
{
   SCIC_SDS_PORT_T *VAR_3 = (SCIC_SDS_PORT_T *)VAR_2;

   FUNC_0(
      &VAR_3->parent.state_machine,
      VAR_0
   );

   return VAR_1;
}
