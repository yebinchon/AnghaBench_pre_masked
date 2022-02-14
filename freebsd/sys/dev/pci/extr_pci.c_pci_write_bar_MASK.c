
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_map {int pm_value; int pm_reg; } ;
struct pci_devinfo {int cfg; } ;
typedef int pci_addr_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, struct pci_map *VAR_1, pci_addr_t VAR_2)
{
 struct pci_devinfo *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_1(VAR_0);
 if (FUNC_0(&VAR_3->cfg, VAR_1->pm_reg))
  VAR_4 = 32;
 else
  VAR_4 = FUNC_2(VAR_1->pm_value);
 FUNC_4(VAR_0, VAR_1->pm_reg, VAR_2, 4);
 if (VAR_4 == 64)
  FUNC_4(VAR_0, VAR_1->pm_reg + 4, VAR_2 >> 32, 4);
 VAR_1->pm_value = FUNC_3(VAR_0, VAR_1->pm_reg, 4);
 if (VAR_4 == 64)
  VAR_1->pm_value |= (pci_addr_t)FUNC_3(VAR_0,
      VAR_1->pm_reg + 4, 4) << 32;
}
