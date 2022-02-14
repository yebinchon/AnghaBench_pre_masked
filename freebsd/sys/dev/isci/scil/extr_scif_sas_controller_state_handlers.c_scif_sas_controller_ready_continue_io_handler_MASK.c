
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCI_BASE_CONTROLLER_T * VAR_3,
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   FUNC_0(*(
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_continue_io_handler(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3, VAR_4, VAR_5
   ));


   return VAR_2;
}
