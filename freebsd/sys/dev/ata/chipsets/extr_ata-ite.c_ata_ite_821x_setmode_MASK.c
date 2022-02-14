
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {TYPE_1__* chip; int chipset_data; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, int VAR_6, int VAR_7)
{
 device_t VAR_8 = FUNC_2(VAR_5);
 struct ata_pci_controller *VAR_9 = FUNC_3(VAR_8);
 struct ata_channel *VAR_10 = FUNC_3(VAR_5);
 int VAR_11 = (VAR_10->unit << 1) + VAR_6;
 int VAR_12;
 uint8_t *VAR_13 = (uint8_t*)(&VAR_9->chipset_data);
 static const uint8_t VAR_14[] =
  { 0x44, 0x42, 0x31, 0x21, 0x11, 0xa2, 0x91 };
 static const uint8_t VAR_15[] =
  { 0xaa, 0xa3, 0xa1, 0x33, 0x31, 0x88, 0x32, 0x31 };

 VAR_7 = FUNC_5(VAR_7, VAR_9->chip->max_dma);

 if (VAR_4 && VAR_7 > VAR_3 &&
     (FUNC_6(VAR_8, 0x40, 2) &
        (VAR_10->unit ? (1<<3) : (1<<2)))) {
  FUNC_1(VAR_5, "controller");
  VAR_7 = VAR_3;
 }
 if (VAR_7 >= VAR_2) {

  FUNC_7(VAR_8, 0x50,
        FUNC_6(VAR_8, 0x50, 1) &
        ~(1 << (VAR_11 + 3)), 1);

  FUNC_7(VAR_8,
        0x56 + (VAR_10->unit << 2) + VAR_6,
        VAR_14[VAR_7 & VAR_0], 1);
  VAR_12 = VAR_1;
 } else {

  FUNC_7(VAR_8, 0x50,
        FUNC_6(VAR_8, 0x50, 1) |
        (1 << (VAR_11 + 3)), 1);
  VAR_12 = VAR_7;
 }
 VAR_13[VAR_11] = VAR_15[FUNC_0(VAR_12)];

 FUNC_7(VAR_8, 0x54 + (VAR_10->unit << 2),
     FUNC_4(VAR_13[VAR_10->unit << 1], VAR_13[(VAR_10->unit << 1) + 1]), 1);
 return (VAR_7);
}
