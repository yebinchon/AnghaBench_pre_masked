
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_10, int VAR_11, int VAR_12)
{
 device_t VAR_13 = FUNC_2(VAR_10);
 struct ata_pci_controller *VAR_14 = FUNC_3(VAR_13);
 struct ata_channel *VAR_15 = FUNC_3(VAR_10);
 int VAR_16 = (VAR_15->unit << 4) + (VAR_11 << 1);
 int VAR_17 = VAR_15->unit ? 0x84 : 0x80;
 int VAR_18 = 0x03 << (VAR_11 << 2);
 int VAR_19 = FUNC_5(VAR_13, VAR_17, 1) & ~VAR_18;
 int VAR_20;
 u_int8_t VAR_21 = 0xa4 + VAR_16;
 u_int8_t VAR_22 = 0xa8 + VAR_16;
 u_int8_t VAR_23 = 0xac + VAR_16;
 static const uint16_t VAR_24[] =
     { 0x328a, 0x2283, 0x1104, 0x10c3, 0x10c1 };
 static const uint16_t VAR_25[] = { 0x2208, 0x10c2, 0x10c1 };
 static const uint8_t VAR_26[] =
     { 0xf, 0xb, 0x7, 0x5, 0x3, 0x2, 0x1 };

 VAR_12 = FUNC_4(VAR_12, VAR_14->chip->max_dma);

 if (VAR_14->chip->cfg2 & VAR_8) {
     if (VAR_9 && VAR_12 > VAR_5 &&
  (FUNC_5(VAR_13, 0x79, 1) &
     (VAR_15->unit ? 0x02 : 0x01))) {
  FUNC_1(VAR_10, "controller");
  VAR_12 = VAR_5;
     }
 }
 if (VAR_12 >= VAR_4) {
  FUNC_6(VAR_13, VAR_17,
    VAR_19 | (0x03 << (VAR_11 << 2)), 1);
  FUNC_6(VAR_13, VAR_23,
    (FUNC_5(VAR_13, VAR_23, 1) & ~0x3f) |
    VAR_26[VAR_12 & VAR_0], 1);
  VAR_20 = VAR_3;
 } else if (VAR_12 >= VAR_6) {
  FUNC_6(VAR_13, VAR_17,
    VAR_19 | (0x02 << (VAR_11 << 2)), 1);
  FUNC_6(VAR_13, VAR_22, VAR_25[VAR_12 & VAR_0], 2);
  VAR_20 = (VAR_12 == VAR_6) ? VAR_1 :
      (VAR_12 == VAR_7) ? VAR_2 : VAR_3;
 } else {
  FUNC_6(VAR_13, VAR_17,
    VAR_19 | (0x01 << (VAR_11 << 2)), 1);
  VAR_20 = VAR_12;
 }
 FUNC_6(VAR_13, VAR_21, VAR_24[FUNC_0(VAR_20)], 2);
 return (VAR_12);
}
