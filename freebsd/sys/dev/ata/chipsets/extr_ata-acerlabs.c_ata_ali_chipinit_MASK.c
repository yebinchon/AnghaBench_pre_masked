
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {void* setmode; int reset; void* ch_detach; int ch_attach; TYPE_1__* chip; struct ali_sata_resources* chipset_data; int getrev; int channels; } ;
struct ali_sata_resources {int ** bars; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; int chiprev; int cfg1; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,int,int *) ;
 struct ata_pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct ali_sata_resources*,int ) ;
 struct ali_sata_resources* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_13)
{
    struct ata_pci_controller *VAR_14 = FUNC_4(VAR_13);
    struct ali_sata_resources *VAR_15;
    int VAR_16, VAR_17;

    if (FUNC_1(VAR_13, VAR_9))
 return VAR_0;

    switch (VAR_14->chip->cfg2) {
    case 128:
 VAR_14->channels = VAR_14->chip->cfg1;
 VAR_14->ch_attach = VAR_7;
 VAR_14->ch_detach = VAR_10;
 VAR_14->setmode = VAR_12;
 VAR_14->getrev = VAR_11;


 VAR_15 = FUNC_7(sizeof(struct ali_sata_resources), VAR_1, VAR_2);
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
  VAR_17 = FUNC_0(VAR_16);
  VAR_15->bars[VAR_16] = FUNC_2(VAR_13, VAR_4, &VAR_17,
      VAR_3);
  if (VAR_15->bars[VAR_16] == ((void*)0)) {
   FUNC_5(VAR_13, "Failed to allocate BAR %d\n", VAR_16);
   for (VAR_16--; VAR_16 >=0; VAR_16--)
    FUNC_3(VAR_13, VAR_4,
        FUNC_0(VAR_16), VAR_15->bars[VAR_16]);
   FUNC_6(VAR_15, VAR_1);
   return VAR_0;
  }
 }
 VAR_14->chipset_data = VAR_15;
 break;

    case 130:

 FUNC_9(VAR_13, 0x4a, FUNC_8(VAR_13, 0x4a, 1) | 0x20, 1);


 if (VAR_14->chip->chiprev < 0xc7)
     FUNC_9(VAR_13, 0x4b, FUNC_8(VAR_13, 0x4b, 1) |
  0x09, 1);


 FUNC_9(VAR_13, 0x53, FUNC_8(VAR_13, 0x53, 1) |
     (VAR_14->chip->chiprev >= 0xc7 ? 0x03 : 0x01), 1);


 if (VAR_14->chip->chiprev <= 0xc4)
     FUNC_5(VAR_13,
     "using PIO transfers above 137GB as workaround for "
     "48bit DMA access bug, expect reduced performance\n");
 VAR_14->ch_attach = VAR_5;
 VAR_14->ch_detach = VAR_10;
 VAR_14->reset = VAR_6;
 VAR_14->setmode = VAR_8;
 break;

    case 129:

 FUNC_9(VAR_13, 0x53, FUNC_8(VAR_13, 0x53, 1) | 0x03, 1);
 VAR_14->setmode = VAR_8;
 break;
    }
    return 0;
}
