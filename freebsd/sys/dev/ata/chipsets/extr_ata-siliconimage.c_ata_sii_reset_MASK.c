
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ata_pci_controller {int r_res2; } ;
struct ata_channel {int unit; scalar_t__ devices; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_0)
{
    struct ata_pci_controller *VAR_1 = FUNC_5(FUNC_4(VAR_0));
    struct ata_channel *VAR_2 = FUNC_5(VAR_0);
    int VAR_3 = ((VAR_2->unit & 1) << 7) + ((VAR_2->unit & 2) << 8);
    uint32_t VAR_4;


    VAR_4 = FUNC_0(VAR_1->r_res2, 0x14c + VAR_3);
    if ((VAR_4 & 0x3) == 0x1)
 FUNC_1(VAR_1->r_res2, 0x14c + VAR_3, VAR_4 & ~0x3);

    if (FUNC_3(VAR_0, -1, 1))
 FUNC_2(VAR_0);
    else
 VAR_2->devices = 0;
}
