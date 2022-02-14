
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int device; } ;
struct ntb_pci_bar_info {int map_mode; int * pci_resource; int pci_resource_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct ntb_softc*,struct ntb_pci_bar_info*,char*) ;
 int FUNC_2 (struct ntb_pci_bar_info*) ;

__attribute__((used)) static int
FUNC_3(struct ntb_softc *VAR_4, struct ntb_pci_bar_info *VAR_5)
{

 VAR_5->pci_resource = FUNC_0(VAR_4->device, VAR_2,
     &VAR_5->pci_resource_id, VAR_1);
 if (VAR_5->pci_resource == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_5);
 VAR_5->map_mode = VAR_3;
 FUNC_1(VAR_4, VAR_5, "mmr");
 return (0);
}
