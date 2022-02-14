
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ not_ready_reason; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_3(
   SCI_BASE_OBJECT_T * VAR_3
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_4;

   VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   FUNC_0(
      VAR_4,
      VAR_2,
      VAR_1
   );

   if(VAR_4->not_ready_reason ==
         VAR_0)
   {
      FUNC_1(
         FUNC_2(VAR_4),
         VAR_4,
         VAR_4->not_ready_reason
      );
   }
}
