
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int chipinit; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ata_pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
    struct ata_pci_controller *VAR_5 = FUNC_0(VAR_4);

    if (FUNC_2(VAR_4) == VAR_0) {
 FUNC_1(VAR_4, "Cyrix 5530 ATA33 controller");
 VAR_5->chipinit = VAR_3;
 return (VAR_1);
    }
    return VAR_2;
}
