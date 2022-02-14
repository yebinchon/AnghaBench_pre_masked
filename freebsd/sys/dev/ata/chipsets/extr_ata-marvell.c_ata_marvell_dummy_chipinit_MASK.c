
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {scalar_t__ channels; } ;
typedef int device_t ;


 struct ata_pci_controller* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0)
{
 struct ata_pci_controller *VAR_1 = FUNC_0(VAR_0);

        VAR_1->channels = 0;
        return (0);
}
