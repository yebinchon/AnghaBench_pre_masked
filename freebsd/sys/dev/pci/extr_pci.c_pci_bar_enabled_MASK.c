
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_map {int pm_value; int pm_reg; } ;
struct pci_devinfo {int cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

int
FUNC_4(device_t VAR_4, struct pci_map *VAR_5)
{
 struct pci_devinfo *VAR_6;
 uint16_t VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 if (FUNC_0(&VAR_6->cfg, VAR_5->pm_reg) &&
     !(VAR_5->pm_value & VAR_0))
  return (0);
 VAR_7 = FUNC_3(VAR_4, VAR_3, 2);
 if (FUNC_0(&VAR_6->cfg, VAR_5->pm_reg) || FUNC_1(VAR_5->pm_value))
  return ((VAR_7 & VAR_1) != 0);
 else
  return ((VAR_7 & VAR_2) != 0);
}
