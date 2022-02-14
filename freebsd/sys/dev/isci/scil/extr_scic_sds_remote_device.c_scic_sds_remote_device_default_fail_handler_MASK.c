
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

SCI_STATUS FUNC_4(
   SCI_BASE_REMOTE_DEVICE_T *VAR_4
)
{
   FUNC_0((
      FUNC_1((SCIC_SDS_REMOTE_DEVICE_T *)VAR_4),
      VAR_1 |
      VAR_0 |
      VAR_2,
      "SCIC Remote Device requested to fail while in wrong state %d\n",
      FUNC_2(
         FUNC_3((SCIC_SDS_REMOTE_DEVICE_T *)VAR_4))
   ));

   return VAR_3;
}
