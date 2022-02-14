
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCI_STATUS ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIF_SAS_REQUEST_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_IO_REQUEST_T ;
typedef int SCIF_SAS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *,int *,int ,void*,int *,int ) ;

SCI_STATUS FUNC_6(
   SCIF_SAS_CONTROLLER_T * VAR_3,
   SCIF_SAS_REMOTE_DEVICE_T * VAR_4,
   SCIF_SAS_REQUEST_T * VAR_5
)
{
   SCI_IO_REQUEST_HANDLE_T VAR_6;

   FUNC_0(*(
      FUNC_1(VAR_5),
      VAR_1,
      "scif_sas_io_request_continue(0x%x, 0x%x, 0x%x) enter\n",
      VAR_3,
      VAR_4,
      VAR_5
   ));


   FUNC_3(VAR_3, VAR_4, VAR_5);




   FUNC_5(
      VAR_4,
      (SCIF_SAS_IO_REQUEST_T*)VAR_5,
      VAR_2,
      (void *)FUNC_2(VAR_5),
      &VAR_6,
      VAR_0
   );


   return (SCI_STATUS)FUNC_4(
             (SCI_CONTROLLER_HANDLE_T) VAR_3,
             (SCI_REMOTE_DEVICE_HANDLE_T) VAR_4,
             (SCI_IO_REQUEST_HANDLE_T) VAR_5,
             VAR_2
          );
}
