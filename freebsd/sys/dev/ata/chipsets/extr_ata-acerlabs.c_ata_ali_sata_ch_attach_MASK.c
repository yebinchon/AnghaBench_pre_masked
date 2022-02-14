
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ata_pci_controller {struct resource* r_res1; struct ali_sata_resources* chipset_data; } ;
struct ata_channel {int unit; int flags; TYPE_1__* r_io; } ;
struct ali_sata_resources {struct resource** bars; } ;
typedef int device_t ;
struct TYPE_2__ {int offset; struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9)
{
    device_t VAR_10 = FUNC_3(VAR_9);
    struct ata_pci_controller *VAR_11 = FUNC_4(VAR_10);
    struct ata_channel *VAR_12 = FUNC_4(VAR_9);
    struct ali_sata_resources *VAR_13;
    struct resource *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    int VAR_16 = (VAR_12->unit & 1), VAR_17 = (VAR_12->unit & 2);
    int VAR_18;

    VAR_13 = VAR_11->chipset_data;
    if (VAR_16) {
     VAR_14 = VAR_13->bars[2];
     VAR_15 = VAR_13->bars[3];
    } else {
     VAR_14 = VAR_13->bars[0];
     VAR_15 = VAR_13->bars[1];
    }
    FUNC_1(VAR_9);
    for (VAR_18 = VAR_5; VAR_18 <= VAR_3; VAR_18 ++) {
 VAR_12->r_io[VAR_18].res = VAR_14;
 VAR_12->r_io[VAR_18].offset = VAR_18 + (VAR_17 ? 8 : 0);
    }
    VAR_12->r_io[VAR_4].res = VAR_15;
    VAR_12->r_io[VAR_4].offset = 2 + (VAR_17 ? 4 : 0);
    VAR_12->r_io[VAR_6].res = VAR_14;
    FUNC_0(VAR_9);
    if (VAR_11->r_res1) {
 for (VAR_18 = VAR_0; VAR_18 <= VAR_1; VAR_18++) {
     VAR_12->r_io[VAR_18].res = VAR_11->r_res1;
     VAR_12->r_io[VAR_18].offset = (VAR_18 - VAR_0)+(VAR_12->unit * VAR_2);
 }
    }
    VAR_12->flags |= VAR_7;
    VAR_12->flags |= VAR_8;


    FUNC_2(VAR_9);
    return 0;
}
