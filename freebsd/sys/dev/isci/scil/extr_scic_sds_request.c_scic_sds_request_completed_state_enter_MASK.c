
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ is_task_management_request; int sci_status; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCIC_SDS_REQUEST_T *VAR_4 = (SCIC_SDS_REQUEST_T *)VAR_3;

   FUNC_0(
      VAR_4,
      VAR_2,
      VAR_1
   );


   if (VAR_4->is_task_management_request == VAR_0)
   {
      FUNC_1(
         FUNC_3(VAR_4),
         FUNC_4(VAR_4),
         VAR_4,
         VAR_4->sci_status
      );
   }
   else
   {
      FUNC_2(
         FUNC_3(VAR_4),
         FUNC_4(VAR_4),
         VAR_4,
         VAR_4->sci_status
      );
   }
}
