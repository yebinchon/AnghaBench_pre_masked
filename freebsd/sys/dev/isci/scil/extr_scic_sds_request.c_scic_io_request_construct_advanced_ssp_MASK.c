
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef int SCIC_IO_SSP_PARAMETERS_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

SCI_STATUS FUNC_2(
   SCI_IO_REQUEST_HANDLE_T VAR_2,
   SCIC_IO_SSP_PARAMETERS_T * VAR_3
)
{
   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_io_request_construct_advanced_ssp(0x%x, 0x%x) enter\n",
      VAR_3, VAR_2
   ));


   return VAR_1;
}
