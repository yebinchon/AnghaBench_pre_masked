
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; int max_dma; } ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, int VAR_3, int VAR_4)
{
 device_t VAR_5 = FUNC_2(VAR_2);
 struct ata_pci_controller *VAR_6 = FUNC_3(VAR_5);
 struct ata_channel *VAR_7 = FUNC_3(VAR_2);
 int VAR_8 = (VAR_7->unit << 1) + VAR_3;

 VAR_4 = FUNC_4(VAR_4, VAR_6->chip->max_dma);

 if (VAR_6->chip->cfg1 == 131) {
  if (VAR_1 && VAR_4 > VAR_0 &&
          FUNC_5(VAR_5, VAR_7->unit ? 0x52 : 0x50,2) & 0x8000) {
          FUNC_1(VAR_2, "controller");
          VAR_4 = VAR_0;
  }
 } else {
  if (VAR_1 && VAR_4 > VAR_0 &&
      FUNC_5(VAR_5, 0x48, 1)&(VAR_7->unit ? 0x20 : 0x10)) {
      FUNC_1(VAR_2, "controller");
      VAR_4 = VAR_0;
  }
        }

 switch (VAR_6->chip->cfg1) {
 case 131: {
     static const uint32_t VAR_9[] =
  { 0x28269008, 0x0c266008, 0x04263008, 0x0c0a3008, 0x05093008,
    0x22196008, 0x0c0a3008, 0x05093008, 0x050939fc, 0x050936ac,
    0x0509347c, 0x0509325c, 0x0509323c, 0x0509322c, 0x0509321c};
     u_int32_t VAR_10;

     VAR_10 = (FUNC_5(VAR_5, 0x57, 1)&0x40?0x70:0x40)+(VAR_8<<2);
     FUNC_6(VAR_5, VAR_10, VAR_9[FUNC_0(VAR_4)], 4);
     break;
     }
 case 130: {
     static const uint16_t VAR_11[] =
      { 0x00cb, 0x0067, 0x0044, 0x0033, 0x0031, 0x0044, 0x0033, 0x0031,
        0x8f31, 0x8a31, 0x8731, 0x8531, 0x8331, 0x8231, 0x8131 };

     u_int16_t VAR_12 = 0x40 + (VAR_8 << 1);

     FUNC_6(VAR_5, VAR_12, VAR_11[FUNC_0(VAR_4)], 2);
     break;
     }
 case 133: {
     static const uint16_t VAR_13[] =
  { 0x00cb, 0x0067, 0x0044, 0x0033, 0x0031, 0x0044, 0x0033,
    0x0031, 0x8b31, 0x8731, 0x8531, 0x8431, 0x8231, 0x8131 };
     u_int16_t VAR_14 = 0x40 + (VAR_8 << 1);

     FUNC_6(VAR_5, VAR_14, VAR_13[FUNC_0(VAR_4)], 2);
     break;
     }
 case 132:
 case 128:
 case 129: {
     static const uint16_t VAR_15[] =
  { 0x0c0b, 0x0607, 0x0404, 0x0303, 0x0301, 0x0404, 0x0303,
    0x0301, 0xf301, 0xd301, 0xb301, 0xa301, 0x9301, 0x8301 };
     u_int16_t VAR_16 = 0x40 + (VAR_8 << 1);

     FUNC_6(VAR_5, VAR_16, VAR_15[FUNC_0(VAR_4)], 2);
     break;
     }
 }
 return (VAR_4);
}
