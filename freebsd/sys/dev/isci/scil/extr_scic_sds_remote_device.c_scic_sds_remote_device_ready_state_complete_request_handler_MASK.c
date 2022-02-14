
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_REMOTE_DEVICE_T *VAR_1,
   SCI_BASE_REQUEST_T *VAR_2
)
{
   SCI_STATUS VAR_3;
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_1;
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_2;

   VAR_3 = FUNC_3(VAR_5);

   if (VAR_3 == VAR_0)
   {

      VAR_3 = FUNC_0(
         FUNC_2(VAR_4), VAR_4, VAR_5);

      if (VAR_3 == VAR_0)
      {
         FUNC_1(VAR_4);
      }
   }

   return VAR_3;
}
