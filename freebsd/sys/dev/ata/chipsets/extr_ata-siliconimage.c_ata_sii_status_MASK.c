
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int r_res2; TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ max_dma; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
    struct ata_pci_controller *VAR_2 = FUNC_4(FUNC_3(VAR_1));
    struct ata_channel *VAR_3 = FUNC_4(VAR_1);
    int VAR_4 = ((VAR_3->unit & 1) << 3) + ((VAR_3->unit & 2) << 8);
    int VAR_5 = ((VAR_3->unit & 1) << 6) + ((VAR_3->unit & 2) << 8);


    if (VAR_2->chip->max_dma >= VAR_0 &&
 (FUNC_0(VAR_2->r_res2, 0x10 + VAR_4) & 0x00000010))
 FUNC_2(VAR_1, -1);

    if (FUNC_0(VAR_2->r_res2, 0xa0 + VAR_5) & 0x00000800)
 return FUNC_1(VAR_1);
    else
 return 0;
}
