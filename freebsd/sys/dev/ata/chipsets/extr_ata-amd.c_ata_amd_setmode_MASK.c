
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6, int VAR_7, int VAR_8)
{
 device_t VAR_9 = FUNC_2(VAR_6);
 struct ata_pci_controller *VAR_10 = FUNC_3(VAR_9);
 struct ata_channel *VAR_11 = FUNC_3(VAR_6);
        int VAR_12 = (VAR_11->unit << 1) + VAR_7;
 int VAR_13;
 static const uint8_t VAR_14[] =
     { 0xa8, 0x65, 0x42, 0x22, 0x20, 0xa8, 0x22, 0x20 };
 static const uint8_t VAR_15[] =
     { 0xc2, 0xc1, 0xc0, 0xc4, 0xc5, 0xc6, 0xc7 };
 int VAR_16 = 0x53 - VAR_12;

 VAR_8 = FUNC_4(VAR_8, VAR_10->chip->max_dma);
 if (VAR_10->chip->cfg1 & VAR_0) {
  if (VAR_5 && VAR_8 > VAR_4 &&
      !(FUNC_5(VAR_9, 0x42, 1) & (1 << VAR_12))) {
   FUNC_1(VAR_6, "controller");
   VAR_8 = VAR_4;
  }
 }

 if (VAR_8 >= VAR_3) {
     FUNC_6(VAR_9, VAR_16, VAR_15[VAR_8 & VAR_1], 1);
     VAR_13 = VAR_2;
 } else {
     FUNC_6(VAR_9, VAR_16, 0x8b, 1);
     VAR_13 = VAR_8;
 }

 FUNC_6(VAR_9, VAR_16 - 0x08, VAR_14[FUNC_0(VAR_13)], 1);
 return (VAR_8);
}
