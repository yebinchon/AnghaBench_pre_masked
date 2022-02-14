
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pci_revision; int pci_device; } ;
struct TYPE_4__ {scalar_t__ revision; int device_id; } ;
typedef TYPE_1__ SCI_PCI_COMMON_HEADER_T ;
typedef scalar_t__ SCI_LIBRARY_HANDLE_T ;
typedef TYPE_2__ SCIC_SDS_LIBRARY_T ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0(
   SCI_LIBRARY_HANDLE_T VAR_3,
   SCI_PCI_COMMON_HEADER_T * VAR_4
)
{
   SCIC_SDS_LIBRARY_T *VAR_5;
   VAR_5 = (SCIC_SDS_LIBRARY_T *)VAR_3;

   VAR_5->pci_device = VAR_4->device_id;
}
