
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int chipinit; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ata_pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5)
{
    struct ata_pci_controller *VAR_6 = FUNC_0(VAR_5);

    if (FUNC_2(VAR_5) == VAR_0 ||
 FUNC_2(VAR_5) == VAR_1) {
 FUNC_1(VAR_5,
     "RZ 100? ATA controller !WARNING! data loss/corruption risk");
 VAR_6->chipinit = VAR_4;
 return (VAR_2);
    }
    return (VAR_3);
}
