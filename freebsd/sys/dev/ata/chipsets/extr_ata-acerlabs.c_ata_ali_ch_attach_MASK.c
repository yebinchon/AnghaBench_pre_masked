
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_pci_controller {TYPE_2__* chip; } ;
struct TYPE_3__ {int max_iosize; } ;
struct ata_channel {int flags; TYPE_1__ dma; } ;
typedef int device_t ;
struct TYPE_4__ {int cfg2; int chiprev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5)
{
    struct ata_pci_controller *VAR_6 = FUNC_2(FUNC_1(VAR_5));
    struct ata_channel *VAR_7 = FUNC_2(VAR_5);


    if (FUNC_0(VAR_5))
 return VAR_4;

    if (VAR_6->chip->cfg2 & VAR_0 && VAR_6->chip->chiprev < 0xc7)
 VAR_7->flags |= VAR_1;

    if (VAR_6->chip->chiprev <= 0xc4) {
 VAR_7->flags |= VAR_2;
 if (VAR_7->dma.max_iosize > 256 * 512)
  VAR_7->dma.max_iosize = 256 * 512;
    }
 if (VAR_6->chip->cfg2 & VAR_0)
  VAR_7->flags |= VAR_3;

    return 0;
}
