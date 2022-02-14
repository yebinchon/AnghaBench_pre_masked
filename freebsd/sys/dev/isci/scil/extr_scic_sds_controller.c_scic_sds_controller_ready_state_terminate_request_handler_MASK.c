
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_CONTROLLER_T *VAR_2,
   SCI_BASE_REMOTE_DEVICE_T *VAR_3,
   SCI_BASE_REQUEST_T *VAR_4
)
{
   SCIC_SDS_CONTROLLER_T *VAR_5 = (SCIC_SDS_CONTROLLER_T *)
                                               VAR_2;
   SCIC_SDS_REQUEST_T *VAR_6 = (SCIC_SDS_REQUEST_T *)
                                               VAR_4;
   SCI_STATUS VAR_7;

   VAR_7 = FUNC_1(VAR_6);
   if (VAR_7 == VAR_0)
   {


      FUNC_0(
         VAR_5,
         FUNC_2(VAR_6)
         | VAR_1
      );
   }

   return VAR_7;
}
