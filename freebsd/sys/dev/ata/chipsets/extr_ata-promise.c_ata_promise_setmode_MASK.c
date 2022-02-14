
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; } ;
typedef TYPE_2__ uint32_t ;
struct ata_pci_controller {TYPE_1__* chip; int r_res2; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_4__ {int cfg1; int cfg2; int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,TYPE_2__ const,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5, int VAR_6, int VAR_7)
{
    device_t VAR_8 = FUNC_5(VAR_5);
    struct ata_pci_controller *VAR_9 = FUNC_6(VAR_8);
    struct ata_channel *VAR_10 = FUNC_6(VAR_5);
    int VAR_11 = (VAR_10->unit << 1) + VAR_6;
    static const uint32_t VAR_12[][2] = {

 { 0x004ff329, 0x004fff2f },
 { 0x004fec25, 0x004ff82a },
 { 0x004fe823, 0x004ff026 },
 { 0x004fe622, 0x004fec24 },
 { 0x004fe421, 0x004fe822 },
 { 0x004567f3, 0x004acef6 },
 { 0x004467f3, 0x0048cef6 },
 { 0x004367f3, 0x0046cef6 },
 { 0x004367f3, 0x0046cef6 },
 { 0x004247f3, 0x00448ef6 },
 { 0x004127f3, 0x00436ef6 },
 { 0, 0x00424ef6 },
 { 0, 0x004127f3 },
 { 0, 0x004127f3 }
    };

    VAR_7 = FUNC_7(VAR_7, VAR_9->chip->max_dma);

    switch (VAR_9->chip->cfg1) {
    case 129:
    case 130:
 if (VAR_4 && VAR_7 > VAR_2 &&
     (FUNC_8(VAR_8, 0x50, 2) &
     (VAR_10->unit ? 1 << 11 : 1 << 10))) {
     FUNC_4(VAR_5, "controller");
     VAR_7 = VAR_2;
 }
 break;

    case 128:
 FUNC_1(VAR_10, VAR_0, 0x0b);
 if (VAR_4 && VAR_7 > VAR_2 &&
     FUNC_0(VAR_10, VAR_1) & 0x04) {
     FUNC_4(VAR_5, "controller");
     VAR_7 = VAR_2;
 }
 break;

    case 131:
 if (VAR_4 && VAR_7 > VAR_2 &&
     (FUNC_2(VAR_9->r_res2,
       (VAR_9->chip->cfg2 & VAR_3 ? 0x000c0260 : 0x0260) +
       (VAR_10->unit << 7)) & 0x01000000)) {
     FUNC_4(VAR_5, "controller");
     VAR_7 = VAR_2;
 }
 break;
    }

 if (VAR_9->chip->cfg1 < 128)
     FUNC_9(VAR_8, 0x60 + (VAR_11 << 2),
        VAR_12[FUNC_3(VAR_7)][VAR_9->chip->cfg1], 4);
 return (VAR_7);
}
