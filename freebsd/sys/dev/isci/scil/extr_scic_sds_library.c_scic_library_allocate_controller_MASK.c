
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pci_device; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_LIBRARY_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_LIBRARY_T ;


 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int VAR_0 ;

SCI_STATUS FUNC_1(
   SCI_LIBRARY_HANDLE_T VAR_1,
   SCI_CONTROLLER_HANDLE_T *VAR_2
)
{
   SCI_STATUS VAR_3;
   SCIC_SDS_LIBRARY_T *VAR_4;

   VAR_4 = (SCIC_SDS_LIBRARY_T *)VAR_1;

   if (
         ( (VAR_4->pci_device >= 0x1D60)
         && (VAR_4->pci_device <= 0x1D62)
         )
      || ( (VAR_4->pci_device >= 0x1D64)
         && (VAR_4->pci_device <= 0x1D65)
         )
      || ( (VAR_4->pci_device >= 0x1D68)
         && (VAR_4->pci_device <= 0x1D6F)
         )
      )
   {
      FUNC_0(
         VAR_4, VAR_2, &VAR_3);
   }
   else
      VAR_3 = VAR_0;

   return VAR_3;
}
