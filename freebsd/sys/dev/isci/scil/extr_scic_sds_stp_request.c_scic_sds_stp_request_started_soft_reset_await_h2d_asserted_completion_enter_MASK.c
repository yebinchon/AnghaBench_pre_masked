
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int target_device; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_2(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIC_SDS_REQUEST_T *VAR_3 = (SCIC_SDS_REQUEST_T *)VAR_2;

   FUNC_0(
      VAR_3,
      VAR_1,
      VAR_0
   );

   FUNC_1(
      VAR_3->target_device, VAR_3
   );
}
