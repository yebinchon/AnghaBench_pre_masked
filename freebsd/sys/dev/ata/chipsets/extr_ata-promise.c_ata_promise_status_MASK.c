
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int r_res1; } ;
struct ata_channel {scalar_t__ unit; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
    struct ata_pci_controller *VAR_1 = FUNC_3(FUNC_2(VAR_0));
    struct ata_channel *VAR_2 = FUNC_3(VAR_0);

    if (FUNC_0(VAR_1->r_res1, 0x1c) & (VAR_2->unit ? 0x00004000 : 0x00000400)) {
 return FUNC_1(VAR_0);
    }
    return 0;
}
