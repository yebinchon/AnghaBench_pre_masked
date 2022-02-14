
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int timeout_timer; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_CONTROLLER_T *VAR_2,
   U32 VAR_3
)
{
   SCIC_SDS_CONTROLLER_T *VAR_4;
   VAR_4 = (SCIC_SDS_CONTROLLER_T *)VAR_2;


   if (VAR_3 != 0)
      FUNC_1(VAR_2, VAR_4->timeout_timer, VAR_3);

   FUNC_0(
      FUNC_2(VAR_4),
      VAR_0
   );

   return VAR_1;
}
