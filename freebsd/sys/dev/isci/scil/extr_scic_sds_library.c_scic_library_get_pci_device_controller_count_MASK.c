
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U8 ;
typedef int U16 ;
struct TYPE_2__ {int pci_device; scalar_t__ pci_revision; } ;
typedef scalar_t__ SCI_LIBRARY_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_LIBRARY_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

U8 FUNC_0(
   SCI_LIBRARY_HANDLE_T VAR_3
)
{
   SCIC_SDS_LIBRARY_T *VAR_4;
   U16 VAR_5;

   VAR_4 = (SCIC_SDS_LIBRARY_T *)VAR_3;
   VAR_5 = VAR_4->pci_device;


   if (




         ((VAR_5 & 0xFFF1) == 0x1D60)
      && (
            (VAR_4->pci_revision == VAR_0)
         || (VAR_4->pci_revision == VAR_1)
         || (VAR_4->pci_revision == VAR_2)
         )
      )
      return 2;
   else
      return 1;
}
