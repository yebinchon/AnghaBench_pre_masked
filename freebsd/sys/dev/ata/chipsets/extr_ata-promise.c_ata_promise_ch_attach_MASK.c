
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_pci_controller {TYPE_2__* chip; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_6__ {int reset; int stop; int start; } ;
struct ata_channel {int flags; TYPE_1__ hw; TYPE_3__ dma; } ;
typedef int device_t ;
struct TYPE_5__ {scalar_t__ cfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_8)
{
    struct ata_pci_controller *VAR_9 = FUNC_2(FUNC_1(VAR_8));
    struct ata_channel *VAR_10 = FUNC_2(VAR_8);

    if (FUNC_0(VAR_8))
 return VAR_2;

    if (VAR_9->chip->cfg1 == VAR_3) {
        VAR_10->dma.start = VAR_5;
        VAR_10->dma.stop = VAR_6;
        VAR_10->dma.reset = VAR_4;
    }

    VAR_10->hw.status = VAR_7;
    VAR_10->flags |= VAR_1;
    VAR_10->flags |= VAR_0;
    return 0;
}
