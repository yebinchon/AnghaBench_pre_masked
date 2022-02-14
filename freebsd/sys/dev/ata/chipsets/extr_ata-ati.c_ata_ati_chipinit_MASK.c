
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {int channels; int ichannels; int setmode; int ch_attach; void* chipset_data; TYPE_1__* chip; } ;
typedef int * device_t ;
struct TYPE_2__ {scalar_t__ cfg1; int chipid; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_8 ;
 struct ata_pci_controller* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,char*,char*) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9)
{
    struct ata_pci_controller *VAR_10 = FUNC_1(VAR_9);
    device_t VAR_11;
    uint8_t VAR_12;

    if (FUNC_0(VAR_9, VAR_6))
 return VAR_2;

    if (VAR_10->chip->cfg1 == VAR_1) {
 VAR_10->ch_attach = VAR_3;
 VAR_10->setmode = VAR_7;
 return (0);
    }
    switch (VAR_10->chip->chipid) {
    case 129:

 VAR_10->channels = 1;
 break;
    case 128:





 VAR_11 = FUNC_3(VAR_0, 0x4385);
 if (VAR_11 != ((void*)0)) {
     VAR_12 = FUNC_4(VAR_11, 0xad, 1);
     if (VAR_8)
  FUNC_2(VAR_9, "SATA controller %s (%s%s channel)\n",
      (VAR_12 & 0x01) == 0 ? "disabled" : "enabled",
      (VAR_12 & 0x08) == 0 ? "" : "combined mode, ",
      (VAR_12 & 0x10) == 0 ? "primary" : "secondary");
     VAR_10->chipset_data = (void *)(uintptr_t)VAR_12;




     if ((VAR_12 & 0x09) == 0x01)
  VAR_10->ichannels &= ~(1 << ((VAR_12 & 0x10) >> 4));
     else {
         VAR_10->ch_attach = VAR_4;
     }
 }
 break;
    }

    VAR_10->setmode = VAR_5;
    return 0;
}
