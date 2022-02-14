
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_softc {int device; } ;
struct amd_ntb_pci_bar_info {int * pci_resource; int pci_resource_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct amd_ntb_softc*,struct amd_ntb_pci_bar_info*,char*) ;
 int FUNC_2 (struct amd_ntb_pci_bar_info*) ;

__attribute__((used)) static int
FUNC_3(struct amd_ntb_softc *VAR_3, struct amd_ntb_pci_bar_info *VAR_4)
{
 VAR_4->pci_resource = FUNC_0(VAR_3->device, VAR_2,
     &VAR_4->pci_resource_id, VAR_1);
 if (VAR_4->pci_resource == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_4);
 FUNC_1(VAR_3, VAR_4, "mmr");

 return (0);
}
