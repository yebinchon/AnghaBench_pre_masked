
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int FUNC_0 (int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, int VAR_1, int VAR_2)
{
 device_t VAR_3 = FUNC_0(VAR_0);
 struct ata_pci_controller *VAR_4 = FUNC_1(VAR_3);

 VAR_2 = FUNC_2(VAR_2, VAR_4->chip->max_dma);
 return (VAR_2);
}
