
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int r_res2; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;


 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
    struct ata_channel *VAR_2 = FUNC_4(VAR_1);
    struct ata_pci_controller *VAR_3 = FUNC_4(FUNC_3(VAR_1));




    if (!(FUNC_1(VAR_3->r_res2, 0x1f80) & (1 << VAR_2->unit)))
 return (0);






    FUNC_0(VAR_2,VAR_0);

    return FUNC_2(VAR_1);
}
