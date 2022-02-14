
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ started_request_count; int rnc; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;

SCI_STATUS FUNC_4(
   SCI_BASE_REMOTE_DEVICE_T *VAR_3
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;
   SCI_STATUS VAR_5 = VAR_1;


   FUNC_0(
      FUNC_1(VAR_4),
      VAR_0
   );

   if (VAR_4->started_request_count == 0)
   {
      FUNC_3(
         VAR_4->rnc,
         VAR_2,
         VAR_4
      );
   }
   else
      VAR_5 = FUNC_2(VAR_4);

   return VAR_5;
}
