
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int device; struct amd_ntb_pci_bar_info* bar_info; } ;
struct amd_ntb_pci_bar_info {int * pci_resource; int pci_resource_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct amd_ntb_softc *VAR_2)
{
 struct amd_ntb_pci_bar_info *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->bar_info[VAR_4];
  if (VAR_3->pci_resource != ((void*)0))
   FUNC_0(VAR_2->device, VAR_1,
       VAR_3->pci_resource_id, VAR_3->pci_resource);
 }
}
