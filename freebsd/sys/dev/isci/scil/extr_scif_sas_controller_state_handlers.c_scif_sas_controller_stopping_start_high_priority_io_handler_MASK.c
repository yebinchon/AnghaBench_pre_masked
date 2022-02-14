
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_CONTROLLER_T * VAR_2,
   SCI_BASE_REMOTE_DEVICE_T * VAR_3,
   SCI_BASE_REQUEST_T * VAR_4,
   U16 VAR_5
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0 | VAR_1,
      "scif_sas_controller_stopping_start_high_priority_io_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_2, VAR_3, VAR_4, VAR_5
   ));

   return FUNC_2(
             VAR_2, VAR_3, VAR_4, VAR_5);
}
