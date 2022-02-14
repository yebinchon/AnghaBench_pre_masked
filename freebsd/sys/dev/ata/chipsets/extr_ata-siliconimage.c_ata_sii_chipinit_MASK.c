
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int channels; int setmode; int ch_detach; int ch_attach; int getrev; int reset; TYPE_1__* chip; int r_res2; int r_rid2; int r_type2; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; int cfg2; int max_dma; int text; int chipid; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int ,int *,int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int,int) ;

int
FUNC_8(device_t VAR_17)
{
    struct ata_pci_controller *VAR_18 = FUNC_4(VAR_17);

    if (FUNC_2(VAR_17, VAR_9))
 return VAR_2;

    switch (VAR_18->chip->cfg1) {
    case 128:
 VAR_18->r_type2 = VAR_6;
 VAR_18->r_rid2 = FUNC_1(5);
 if (!(VAR_18->r_res2 = FUNC_3(VAR_17, VAR_18->r_type2,
          &VAR_18->r_rid2, VAR_3))){
     if (VAR_18->chip->chipid != VAR_1 ||
       (FUNC_6(VAR_17, 0x8a, 1) & 1))
  return VAR_2;
 }

 if (VAR_18->chip->cfg2 & VAR_5) {
     if ((FUNC_6(VAR_17, 0x8a, 1) & 0x30) != 0x10)
  FUNC_7(VAR_17, 0x8a,
     (FUNC_6(VAR_17, 0x8a, 1) & 0xcf)|0x10,1);
     if ((FUNC_6(VAR_17, 0x8a, 1) & 0x30) != 0x10)
  FUNC_5(VAR_17, "%s could not set ATA133 clock\n",
         VAR_18->chip->text);
 }


 if (VAR_18->chip->cfg2 & VAR_4) {
     FUNC_0(VAR_18->r_res2, 0x0200, 0x00000002);
     VAR_18->channels = 4;
 }


 FUNC_7(VAR_17, 0x48,
    (FUNC_6(VAR_17, 0x48, 4) & ~0x03c00000), 4);


 FUNC_7(VAR_17, 0x8a, (FUNC_6(VAR_17, 0x8a, 1) & 0x3f), 1);

 if (VAR_18->r_res2) {
     VAR_18->ch_attach = VAR_13;
     VAR_18->ch_detach = VAR_14;
 }

 if (VAR_18->chip->max_dma >= VAR_0) {
     VAR_18->reset = VAR_15;
     VAR_18->setmode = VAR_12;
     VAR_18->getrev = VAR_11;
 }
 else
     VAR_18->setmode = VAR_16;
 break;

    default:
 if ((FUNC_6(VAR_17, 0x51, 1) & 0x08) != 0x08) {
     FUNC_5(VAR_17, "HW has secondary channel disabled\n");
     VAR_18->channels = 1;
 }


 FUNC_7(VAR_17, 0x71, 0x01, 1);

 VAR_18->ch_attach = VAR_7;
 VAR_18->ch_detach = VAR_10;
 VAR_18->setmode = VAR_8;
 break;
    }
    return 0;
}
