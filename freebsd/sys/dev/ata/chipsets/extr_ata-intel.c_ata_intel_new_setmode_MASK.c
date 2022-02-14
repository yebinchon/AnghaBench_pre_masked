
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; int flags; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_8, int VAR_9, int VAR_10)
{
 device_t VAR_11 = FUNC_3(VAR_8);
 struct ata_pci_controller *VAR_12 = FUNC_4(VAR_11);
 struct ata_channel *VAR_13 = FUNC_4(VAR_8);
 int VAR_14 = (VAR_13->unit << 1) + VAR_9;
 int VAR_15;
 u_int32_t VAR_16 = FUNC_6(VAR_11, 0x40, 4);
 u_int8_t VAR_17 = FUNC_6(VAR_11, 0x44, 1);
 u_int8_t VAR_18 = FUNC_6(VAR_11, 0x48, 1);
 u_int16_t VAR_19 = FUNC_6(VAR_11, 0x4a, 2);
 u_int16_t VAR_20 = FUNC_6(VAR_11, 0x54, 2);
 u_int32_t VAR_21 = 0, VAR_22 = 0;
 u_int8_t VAR_23 = 0, VAR_24 = 0;
 static const uint8_t VAR_25[] =
     { 0x00, 0x00, 0x10, 0x21, 0x23, 0x00, 0x21, 0x23 };
 static const uint8_t VAR_26[] =
     { 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02 };


 if (VAR_13->flags & VAR_2)
  return (FUNC_2(VAR_8, VAR_9, VAR_10));

 VAR_10 = FUNC_5(VAR_10, VAR_12->chip->max_dma);
 if (VAR_7 && VAR_10 > VAR_4 &&
     !(VAR_20 & (0x10 << VAR_14))) {
  FUNC_1(VAR_8, "controller");
  VAR_10 = VAR_4;
 }

 if (VAR_10 >= VAR_3) {
     FUNC_7(VAR_11, 0x48, VAR_18 | (0x0001 << VAR_14), 2);
     FUNC_7(VAR_11, 0x4a,
  (VAR_19 & ~(0x3 << (VAR_14 << 2))) |
  (VAR_26[VAR_10 & VAR_0] << (VAR_14<<2)), 2);
     VAR_15 = VAR_1;
 } else {
     FUNC_7(VAR_11, 0x48, VAR_18 & ~(0x0001 << VAR_14), 2);
     FUNC_7(VAR_11, 0x4a, (VAR_19 & ~(0x3 << (VAR_14 << 2))),2);
     VAR_15 = VAR_10;
 }
 VAR_20 |= 0x0400;

 VAR_20 &= ~(0x1001 << VAR_14);
 if (VAR_10 >= VAR_6)
     VAR_20 |= (0x1000 << VAR_14);
 else if (VAR_10 >= VAR_5)
     VAR_20 |= (0x1 << VAR_14);
 FUNC_7(VAR_11, 0x54, VAR_20, 2);

 VAR_16 &= ~0x00ff00ff;
 VAR_16 |= 0x40774077;

 if (VAR_9 == 0) {
     VAR_21 = 0x3300;
     VAR_22 = VAR_25[FUNC_0(VAR_15)] << 8;
 } else {
     VAR_23 = 0x0f;
     VAR_24 = ((VAR_25[FUNC_0(VAR_15)] & 0x30) >> 2) |
      (VAR_25[FUNC_0(VAR_15)] & 0x03);
 }
 if (VAR_13->unit) {
     VAR_21 <<= 16;
     VAR_22 <<= 16;
     VAR_23 <<= 4;
     VAR_24 <<= 4;
 }
 FUNC_7(VAR_11, 0x40, (VAR_16 & ~VAR_21) | VAR_22, 4);
 FUNC_7(VAR_11, 0x44, (VAR_17 & ~VAR_23) | VAR_24, 1);
 return (VAR_10);
}
