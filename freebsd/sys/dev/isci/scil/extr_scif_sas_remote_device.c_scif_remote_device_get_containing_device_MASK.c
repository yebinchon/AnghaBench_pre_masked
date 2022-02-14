
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ containing_device; } ;
typedef int SCI_STATUS ;
typedef int * SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;

SCI_STATUS FUNC_0(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_2,
   SCI_REMOTE_DEVICE_HANDLE_T * VAR_3
)
{
   SCI_STATUS VAR_4 = VAR_0;
   SCIF_SAS_REMOTE_DEVICE_T * VAR_5 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                            VAR_2;

   if ( (VAR_5 != ((void*)0)) && (VAR_3 != ((void*)0)) )
   {
      *VAR_3 = (SCI_REMOTE_DEVICE_HANDLE_T)(VAR_5->containing_device);
      if (*VAR_3 != ((void*)0))
      {
         VAR_4 = VAR_1;
      }
   }

   return VAR_4;
}
