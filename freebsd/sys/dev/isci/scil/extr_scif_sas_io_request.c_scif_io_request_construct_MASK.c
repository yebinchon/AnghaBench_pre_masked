
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_IO_REQUEST_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_IO_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,void*,int *,int ) ;

SCI_STATUS FUNC_1(
   SCI_CONTROLLER_HANDLE_T VAR_1,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_2,
   U16 VAR_3,
   void * VAR_4,
   void * VAR_5,
   SCI_IO_REQUEST_HANDLE_T * VAR_6
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_7 = (SCIF_SAS_IO_REQUEST_T*)
                                          VAR_5;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_8 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_2;

   return FUNC_0(
             VAR_8,
             VAR_7,
             VAR_3,
             VAR_4,
             VAR_6,
             VAR_0
          );
}
