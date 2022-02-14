
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rnc; int * working_request; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int (*) (TYPE_1__*),TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T * VAR_2
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_3;

   VAR_3 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_2;

   FUNC_0(
      VAR_3,
      VAR_1,
      VAR_0
   );

   VAR_3->working_request = ((void*)0);

   if (FUNC_1(VAR_3->rnc))
   {


      FUNC_3(
         VAR_3
      );
   }
   else
   {
      FUNC_2(
         VAR_3->rnc,
         FUNC_3,
         VAR_3
      );
   }
}
