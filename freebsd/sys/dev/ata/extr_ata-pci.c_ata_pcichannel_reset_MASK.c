
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int (* reset ) (int ) ;} ;
struct TYPE_2__ {int (* reset ) (int ) ;} ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0)
{
    struct ata_pci_controller *VAR_1 = FUNC_2(FUNC_1(VAR_0));
    struct ata_channel *VAR_2 = FUNC_2(VAR_0);


    if (VAR_2->dma.reset)
 VAR_2->dma.reset(VAR_0);


    if (VAR_1->reset)
 VAR_1->reset(VAR_0);
    else
 FUNC_0(VAR_0);
}
