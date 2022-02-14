
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; int devices; int flags; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; int chiprev; int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_11, int VAR_12, int VAR_13)
{
 device_t VAR_14 = FUNC_2(VAR_11);
 struct ata_pci_controller *VAR_15 = FUNC_3(VAR_14);
 struct ata_channel *VAR_16 = FUNC_3(VAR_11);
 int VAR_17 = (VAR_16->unit << 1) + VAR_12;
 int VAR_18;
 static const uint32_t VAR_19[] =
  { 0x006d0003, 0x00580002, 0x00440001, 0x00330001,
    0x00310001, 0x006d0003, 0x00330001, 0x00310001 };
 static const uint8_t VAR_20[] = {0x0c, 0x0b, 0x0a, 0x09, 0x08, 0x0f,
     0x0d};
 uint32_t VAR_21;

        VAR_13 = FUNC_5(VAR_13, VAR_15->chip->max_dma);

 if (VAR_15->chip->cfg2 & VAR_0 && VAR_15->chip->chiprev < 0xc7) {
  if (VAR_10 && VAR_13 > VAR_9 &&
      FUNC_6(VAR_14, 0x4a, 1) & (1 << VAR_16->unit)) {
   FUNC_1(VAR_11, "controller");
   VAR_13 = VAR_9;
  }
 }
 if (VAR_15->chip->cfg2 & VAR_1) {

  VAR_16->flags |= VAR_2;
  if (VAR_16->devices & VAR_3 &&
      VAR_16->devices & VAR_4) {

          FUNC_4(VAR_11, "two atapi devices on this channel,"
       " no DMA\n");
          VAR_13 = FUNC_5(VAR_13, VAR_7);
  }
 }

 VAR_21 = FUNC_6(VAR_14, 0x54, 4);
 if (VAR_13 >= VAR_8) {
     VAR_21 &= ~(0x000f000f << (VAR_17 << 2));
     VAR_21 |= (((VAR_20[VAR_13&VAR_5]<<16)|0x05)<<(VAR_17<<2));
     VAR_18 = VAR_6;
 }
 else {
     VAR_21 &= ~(0x0008000f << (VAR_17 << 2));
     VAR_18 = VAR_13;
 }
 FUNC_7(VAR_14, 0x54, VAR_21, 4);

 FUNC_7(VAR_14, 0x58 + (VAR_16->unit << 2),
     VAR_19[FUNC_0(VAR_18)], 4);
 return (VAR_13);
}
