
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_controller {int * r_msix_table; int * r_mem; int * r_msix_pba; int r_msix_pba_rid; int r_msix_tab_rid; int r_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct ahci_controller* FUNC_1 (int ) ;

void
FUNC_2(device_t VAR_1)
{
 struct ahci_controller *VAR_2 = FUNC_1(VAR_1);


 if (VAR_2->r_mem)
  FUNC_0(VAR_1, VAR_0, VAR_2->r_rid, VAR_2->r_mem);
 if (VAR_2->r_msix_table)
  FUNC_0(VAR_1, VAR_0,
      VAR_2->r_msix_tab_rid, VAR_2->r_msix_table);
 if (VAR_2->r_msix_pba)
  FUNC_0(VAR_1, VAR_0,
      VAR_2->r_msix_pba_rid, VAR_2->r_msix_pba);

 VAR_2->r_msix_pba = VAR_2->r_mem = VAR_2->r_msix_table = ((void*)0);
}
