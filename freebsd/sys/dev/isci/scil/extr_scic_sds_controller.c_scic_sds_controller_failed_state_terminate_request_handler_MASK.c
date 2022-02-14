
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef int SCIC_SDS_REQUEST_T ;


 int FUNC_0 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
   SCI_BASE_CONTROLLER_T *VAR_0,
   SCI_BASE_REMOTE_DEVICE_T *VAR_1,
   SCI_BASE_REQUEST_T *VAR_2
)
{
   SCIC_SDS_REQUEST_T *VAR_3 = (SCIC_SDS_REQUEST_T *)
                                               VAR_2;

   return FUNC_0(VAR_3);
}
