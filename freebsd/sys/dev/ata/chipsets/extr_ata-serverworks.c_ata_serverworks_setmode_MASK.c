
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg1; int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8, int VAR_9, int VAR_10)
{
 device_t VAR_11 = FUNC_1(VAR_8);
        struct ata_pci_controller *VAR_12 = FUNC_2(VAR_11);
 struct ata_channel *VAR_13 = FUNC_2(VAR_8);
        int VAR_14 = (VAR_13->unit << 1) + VAR_9;
        int VAR_15 = (VAR_14 ^ 0x01) << 3;
 int VAR_16;
 static const uint8_t VAR_17[] = { 0x5d, 0x47, 0x34, 0x22, 0x20 };
 static const uint8_t VAR_18[] = { 0x77, 0x21, 0x20 };

 VAR_10 = FUNC_3(VAR_10, VAR_12->chip->max_dma);
 if (VAR_10 >= VAR_4) {

     FUNC_5(VAR_11, 0x56,
        (FUNC_4(VAR_11, 0x56, 2) &
         ~(0xf << (VAR_14 << 2))) |
        ((VAR_10 & VAR_0) << (VAR_14 << 2)), 2);
     FUNC_5(VAR_11, 0x54,
        FUNC_4(VAR_11, 0x54, 1) |
        (0x01 << VAR_14), 1);
     FUNC_5(VAR_11, 0x44,
        (FUNC_4(VAR_11, 0x44, 4) &
         ~(0xff << VAR_15)) |
        (VAR_18[2] << VAR_15), 4);
     VAR_16 = VAR_3;
 } else if (VAR_10 >= VAR_5) {

     FUNC_5(VAR_11, 0x54,
        FUNC_4(VAR_11, 0x54, 1) &
         ~(0x01 << VAR_14), 1);
     FUNC_5(VAR_11, 0x44,
        (FUNC_4(VAR_11, 0x44, 4) &
         ~(0xff << VAR_15)) |
        (VAR_18[VAR_10 & VAR_0] << VAR_15), 4);
     VAR_16 = (VAR_10 == VAR_5) ? VAR_1 :
  (VAR_10 == VAR_6) ? VAR_2 : VAR_3;
 } else {

     FUNC_5(VAR_11, 0x54,
        FUNC_4(VAR_11, 0x54, 1) &
        ~(0x01 << VAR_14), 1);
     VAR_16 = VAR_10;
 }

 if (VAR_12->chip->cfg1 != VAR_7) {
  FUNC_5(VAR_11, 0x4a,
    (FUNC_4(VAR_11, 0x4a, 2) &
     ~(0xf << (VAR_14 << 2))) |
    ((VAR_16 - VAR_1) << (VAR_14<<2)),2);
 }
 FUNC_5(VAR_11, 0x40,
    (FUNC_4(VAR_11, 0x40, 4) &
     ~(0xff << VAR_15)) |
    (VAR_17[FUNC_0(VAR_16)] << VAR_15), 4);
 return (VAR_10);
}
