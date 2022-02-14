
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int * pci_resource; int pci_bus_handle; int pci_bus_tag; void* pci_resource_id; int * pci_resource_msix; void* pci_resource_id_msix; } ;
typedef int device_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,void**,int ) ;
 int FUNC_2 (int ,int ,void*,int *) ;
 struct ccp_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct ccp_softc *VAR_4;

 VAR_4 = FUNC_3(VAR_3);

 VAR_4->pci_resource_id = FUNC_0(2);
 VAR_4->pci_resource = FUNC_1(VAR_3, VAR_2,
     &VAR_4->pci_resource_id, VAR_1);
 if (VAR_4->pci_resource == ((void*)0)) {
  FUNC_4(VAR_3, "unable to allocate pci resource\n");
  return (VAR_0);
 }

 VAR_4->pci_resource_id_msix = FUNC_0(5);
 VAR_4->pci_resource_msix = FUNC_1(VAR_3, VAR_2,
     &VAR_4->pci_resource_id_msix, VAR_1);
 if (VAR_4->pci_resource_msix == ((void*)0)) {
  FUNC_4(VAR_3, "unable to allocate pci resource msix\n");
  FUNC_2(VAR_3, VAR_2, VAR_4->pci_resource_id,
      VAR_4->pci_resource);
  return (VAR_0);
 }

 VAR_4->pci_bus_tag = FUNC_6(VAR_4->pci_resource);
 VAR_4->pci_bus_handle = FUNC_5(VAR_4->pci_resource);
 return (0);
}
