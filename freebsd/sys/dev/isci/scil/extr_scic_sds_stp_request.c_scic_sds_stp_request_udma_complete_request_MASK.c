
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {int state_machine; } ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_REQUEST_T * VAR_1,
   U32 VAR_2,
   SCI_STATUS VAR_3
)
{
   FUNC_1(
      VAR_1, VAR_2, VAR_3
   );

   FUNC_0(
      &VAR_1->parent.state_machine,
      VAR_0
   );
}
