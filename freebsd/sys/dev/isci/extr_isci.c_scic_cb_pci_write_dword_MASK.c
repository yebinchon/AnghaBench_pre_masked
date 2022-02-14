
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct isci_softc {TYPE_1__* pci_bar; } ;
struct ISCI_CONTROLLER {struct isci_softc* isci; } ;
typedef int bus_size_t ;
struct TYPE_2__ {int bus_handle; int bus_tag; } ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int POINTER_UINT ;


 int FUNC_0 (int ,int ,int ,size_t) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(SCI_CONTROLLER_HANDLE_T VAR_0,
    void *VAR_1, uint32_t VAR_2)
{
 SCI_CONTROLLER_HANDLE_T VAR_3 =
     (SCI_CONTROLLER_HANDLE_T) FUNC_1(VAR_0);
 struct ISCI_CONTROLLER *VAR_4 =
     (struct ISCI_CONTROLLER *) FUNC_1(VAR_3);
 struct isci_softc *VAR_5 = VAR_4->isci;
 uint32_t VAR_6 = (uint32_t)(((POINTER_UINT)VAR_1 & 0xF0000000) >> 28);
 bus_size_t VAR_7 = (bus_size_t)((POINTER_UINT)VAR_1 & 0x0FFFFFFF);

 FUNC_0(VAR_5->pci_bar[VAR_6].bus_tag,
     VAR_5->pci_bar[VAR_6].bus_handle, VAR_7, VAR_2);
}
