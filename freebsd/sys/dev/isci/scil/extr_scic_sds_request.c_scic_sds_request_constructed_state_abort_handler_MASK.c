
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCI_BASE_REQUEST_T *VAR_4
)
{
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_4;



   FUNC_1(
      VAR_5,
      VAR_3,
      VAR_1
   );

   FUNC_0(
      &VAR_5->parent.state_machine,
      VAR_0
   );

   return VAR_2;
}
