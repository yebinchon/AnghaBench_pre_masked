
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rnc; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_REMOTE_DEVICE_T *VAR_1,
   SCI_BASE_REQUEST_T *VAR_2
)
{
   SCI_STATUS VAR_3;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_1;
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_2;


   VAR_3 = FUNC_0(
      FUNC_1(VAR_4), VAR_4, VAR_5);

   if (VAR_3 == VAR_0)
   {
      VAR_3 = FUNC_3(
                  VAR_4->rnc, VAR_5
               );

      if (VAR_3 == VAR_0)
      {
         VAR_3 = FUNC_4(VAR_5);
      }

      FUNC_2(VAR_4, VAR_5, VAR_3);
   }

   return VAR_3;
}
