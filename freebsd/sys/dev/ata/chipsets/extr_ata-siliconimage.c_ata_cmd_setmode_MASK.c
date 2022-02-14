
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, int VAR_4, int VAR_5)
{
 device_t VAR_6 = FUNC_1(VAR_3);
 struct ata_pci_controller *VAR_7 = FUNC_2(VAR_6);
 struct ata_channel *VAR_8 = FUNC_2(VAR_3);
 int VAR_9 = (VAR_8->unit << 1) + VAR_4;
 int VAR_10 = 0x54 + ((VAR_9 < 3) ? (VAR_9 << 1) : 7);
 int VAR_11 = VAR_8->unit ? 0x7b : 0x73;
 int VAR_12;
 static const uint8_t VAR_13[] =
     { 0xa9, 0x57, 0x44, 0x32, 0x3f, 0x87, 0x32, 0x3f };
 static const uint8_t VAR_14[][2] =
     { { 0x31, 0xc2 }, { 0x21, 0x82 }, { 0x11, 0x42 },
       { 0x25, 0x8a }, { 0x15, 0x4a }, { 0x05, 0x0a } };

 VAR_5 = FUNC_3(VAR_5, VAR_7->chip->max_dma);
 if (VAR_5 >= VAR_2) {
  u_int8_t VAR_15 = FUNC_4(VAR_6, VAR_11, 1);

         VAR_15 &= ~(VAR_4 == 0 ? 0x35 : 0xca);
  VAR_15 |= VAR_14[VAR_5 & VAR_0][VAR_4];
  FUNC_5(VAR_6, VAR_11, VAR_15, 1);
  VAR_12 = VAR_1;
 } else {
  FUNC_5(VAR_6, VAR_11,
        FUNC_4(VAR_6, VAR_11, 1) &
        ~(VAR_4 == 0 ? 0x35 : 0xca), 1);
  VAR_12 = VAR_5;
 }
 FUNC_5(VAR_6, VAR_10, VAR_13[FUNC_0(VAR_12)], 1);
 return (VAR_5);
}
