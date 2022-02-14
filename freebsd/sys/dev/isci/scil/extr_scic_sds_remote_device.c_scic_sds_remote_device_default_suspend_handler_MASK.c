
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int SCI_STATUS ;
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
   SCIC_SDS_REMOTE_DEVICE_T *VAR_4,
   U32 VAR_5
)
{
   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 |
      VAR_0 |
      VAR_2,
      "SCIC Remote Device 0x%x requested to suspend %d while in wrong state %d\n",
      VAR_4, VAR_5,
      FUNC_2(
         FUNC_3(VAR_4))
   ));

   return VAR_3;
}
