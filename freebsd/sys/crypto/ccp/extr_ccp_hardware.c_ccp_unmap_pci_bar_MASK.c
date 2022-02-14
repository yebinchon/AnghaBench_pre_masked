
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int pci_resource; int pci_resource_id; int pci_resource_msix; int pci_resource_id_msix; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct ccp_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_1)
{
 struct ccp_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0, VAR_2->pci_resource_id_msix,
     VAR_2->pci_resource_msix);
 FUNC_0(VAR_1, VAR_0, VAR_2->pci_resource_id,
     VAR_2->pci_resource);
}
