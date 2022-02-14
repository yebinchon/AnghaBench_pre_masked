
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_CONTROLLER_T *VAR_2,
   SCI_BASE_REMOTE_DEVICE_T *VAR_3,
   SCI_BASE_REQUEST_T *VAR_4,
   U16 VAR_5
)
{
   SCIC_SDS_CONTROLLER_T *VAR_6;
   VAR_6 = (SCIC_SDS_CONTROLLER_T *)VAR_2;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_0,
      "SCIC Controller requested to start an io/task from failed state %d\n",
      FUNC_2(
         FUNC_3(VAR_6))
   ));

   return VAR_1;
}
