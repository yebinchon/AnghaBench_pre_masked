
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ata_pci_controller {TYPE_2__* chip; int r_res2; } ;
struct TYPE_6__ {int pm_write; int pm_read; int softreset; int status; int command; } ;
struct ata_channel {int unit; TYPE_3__ hw; int flags; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_5__ {int cfg2; } ;
struct TYPE_4__ {int offset; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_22)
{
    struct ata_pci_controller *VAR_23 = FUNC_4(FUNC_3(VAR_22));
    struct ata_channel *VAR_24 = FUNC_4(VAR_22);
    int VAR_25 = (VAR_23->chip->cfg2 & VAR_15) ? 0x000c0000 : 0;
    int VAR_26;

    FUNC_2(VAR_22);

    for (VAR_26 = VAR_3; VAR_26 <= VAR_1; VAR_26++) {
 VAR_24->r_io[VAR_26].res = VAR_23->r_res2;
 VAR_24->r_io[VAR_26].offset = VAR_25 + 0x0200 + (VAR_26 << 2) + (VAR_24->unit << 7);
    }
    VAR_24->r_io[VAR_2].res = VAR_23->r_res2;
    VAR_24->r_io[VAR_2].offset = VAR_25 + 0x0238 + (VAR_24->unit << 7);
    VAR_24->r_io[VAR_4].res = VAR_23->r_res2;
    FUNC_0(VAR_22);
    if ((VAR_23->chip->cfg2 & (VAR_13 | VAR_14)) ||
 ((VAR_23->chip->cfg2 & (VAR_11 | VAR_12)) && VAR_24->unit < 2)) {
 VAR_24->r_io[VAR_9].res = VAR_23->r_res2;
 VAR_24->r_io[VAR_9].offset = 0x400 + (VAR_24->unit << 8);
 VAR_24->r_io[VAR_8].res = VAR_23->r_res2;
 VAR_24->r_io[VAR_8].offset = 0x404 + (VAR_24->unit << 8);
 VAR_24->r_io[VAR_7].res = VAR_23->r_res2;
 VAR_24->r_io[VAR_7].offset = 0x408 + (VAR_24->unit << 8);
 VAR_24->flags |= VAR_5;
 VAR_24->flags |= VAR_6;
    }
    VAR_24->flags |= VAR_10;
    VAR_24->flags |= VAR_0;

    FUNC_1(VAR_22);
    if (VAR_23->chip->cfg2 & VAR_15) {
 VAR_24->hw.command = VAR_21;
    }
    else {
 VAR_24->hw.command = VAR_16;
 VAR_24->hw.status = VAR_20;
 VAR_24->hw.softreset = VAR_19;
 VAR_24->hw.pm_read = VAR_17;
 VAR_24->hw.pm_write = VAR_18;
     }
    return 0;
}
