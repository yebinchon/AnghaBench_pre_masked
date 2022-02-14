
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct ata_pci_controller {int r_res2; scalar_t__ chipset_data; TYPE_1__* chip; } ;
struct ata_channel {int unit; int conntask; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;





 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
    struct ata_pci_controller *VAR_3 = FUNC_3(FUNC_2(VAR_2));
    struct ata_channel *VAR_4 = FUNC_3(VAR_2);
    u_int32_t VAR_5, VAR_6, VAR_7;

    switch (VAR_3->chip->cfg2) {
    case 130:
    case 132:
    case 129:
 VAR_5 = 0x6c;
 break;
    case 131:
    case 128:
    default:
 VAR_5 = 0x60;
 break;
    }


    VAR_6 = (uint32_t)(uintptr_t)VAR_3->chipset_data;


    VAR_7 = FUNC_0(VAR_3->r_res2, VAR_5);
    FUNC_1(VAR_3->r_res2, VAR_5, VAR_7 & (0x00000011 << VAR_4->unit));


    if (VAR_7 & (0x00000001 << VAR_4->unit)) {
 if (VAR_0)
     FUNC_4(VAR_2, "DISCONNECT requested\n");
 FUNC_5(VAR_1, &VAR_4->conntask);
    }


    if (VAR_7 & (0x00000010 << VAR_4->unit)) {
 if (VAR_0)
     FUNC_4(VAR_2, "CONNECT requested\n");
 FUNC_5(VAR_1, &VAR_4->conntask);
    }


    return (VAR_6 & (1 << (VAR_4->unit + 1)));
}
