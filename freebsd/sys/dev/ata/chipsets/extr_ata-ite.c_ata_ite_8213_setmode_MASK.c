
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int8_t ;
typedef int u_int16_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_6 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct ata_pci_controller* FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7, int VAR_8, int VAR_9)
{
 device_t VAR_10 = FUNC_3(VAR_7);
 struct ata_pci_controller *VAR_11 = FUNC_4(VAR_10);
 int VAR_12;
 u_int16_t VAR_13 = FUNC_6(VAR_10, 0x40, 2);
 u_int8_t VAR_14 = FUNC_6(VAR_10, 0x44, 1);
 u_int8_t VAR_15 = FUNC_6(VAR_10, 0x48, 1);
 u_int16_t VAR_16 = FUNC_6(VAR_10, 0x4a, 2);
 u_int16_t VAR_17 = FUNC_6(VAR_10, 0x54, 2);
 u_int16_t VAR_18 = 0, VAR_19 = 0;
 u_int8_t VAR_20 = 0, VAR_21 = 0;
 static const uint8_t VAR_22[] =
     { 0x00, 0x00, 0x10, 0x21, 0x23, 0x00, 0x21, 0x23 };
 static const uint8_t VAR_23[] =
     { 0x00, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02 };

 VAR_9 = FUNC_5(VAR_9, VAR_11->chip->max_dma);

 if (VAR_6 && VAR_9 > VAR_3 &&
     !(VAR_17 & (0x10 << VAR_8))) {
  FUNC_2(VAR_7, "controller");
  VAR_9 = VAR_3;
 }

 if (VAR_9 >= VAR_2) {
     FUNC_7(VAR_10, 0x48, VAR_15 | (0x0001 << VAR_8), 2);
     FUNC_7(VAR_10, 0x4a,
        (VAR_16 & ~(0x3 << (VAR_8 << 2))) |
        (VAR_23[VAR_9 & VAR_0] << (VAR_8<<2)), 2);
     VAR_12 = VAR_1;
 } else {
     FUNC_7(VAR_10, 0x48, VAR_15 & ~(0x0001 << VAR_8), 2);
     FUNC_7(VAR_10, 0x4a, (VAR_16 & ~(0x3 << (VAR_8 << 2))),2);
     VAR_12 = VAR_9;
 }

 VAR_17 &= ~(0x1001 << VAR_8);
 if (VAR_9 >= VAR_5)
     VAR_17 |= (0x1000 << VAR_8);
 else if (VAR_9 >= VAR_4)
     VAR_17 |= (0x1 << VAR_8);
 FUNC_7(VAR_10, 0x54, VAR_17, 2);

 VAR_13 &= 0xff00;
 VAR_13 |= 0x4033;

 if (VAR_8 == 0) {
     VAR_13 |= (FUNC_0(VAR_7, VAR_8) ? 0x04 : 0x00);
     VAR_18 = 0x3300;
     VAR_19 = VAR_22[FUNC_1(VAR_12)] << 8;
 }
 else {
     VAR_13 |= (FUNC_0(VAR_7, VAR_8) ? 0x40 : 0x00);
     VAR_20 = 0x0f;
     VAR_21 = ((VAR_22[FUNC_1(VAR_12)] & 0x30) >> 2) |
      (VAR_22[FUNC_1(VAR_12)] & 0x03);
 }
 FUNC_7(VAR_10, 0x40, (VAR_13 & ~VAR_18) | VAR_19, 4);
 FUNC_7(VAR_10, 0x44, (VAR_14 & ~VAR_20) | VAR_21, 1);
 return (VAR_9);
}
