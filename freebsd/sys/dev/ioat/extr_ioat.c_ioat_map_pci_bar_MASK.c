
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_softc {int * pci_resource; int pci_bus_handle; int pci_bus_tag; int pci_resource_id; int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct ioat_softc *VAR_3)
{

 VAR_3->pci_resource_id = FUNC_0(0);
 VAR_3->pci_resource = FUNC_1(VAR_3->device,
     VAR_2, &VAR_3->pci_resource_id, VAR_1);

 if (VAR_3->pci_resource == ((void*)0)) {
  FUNC_2(0, "unable to allocate pci resource\n");
  return (VAR_0);
 }

 VAR_3->pci_bus_tag = FUNC_4(VAR_3->pci_resource);
 VAR_3->pci_bus_handle = FUNC_3(VAR_3->pci_resource);
 return (0);
}
