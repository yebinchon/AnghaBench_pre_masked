
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7, int VAR_8, int VAR_9)
{
 device_t VAR_10 = FUNC_1(VAR_7);
 struct ata_pci_controller *VAR_11 = FUNC_2(VAR_10);
 struct ata_channel *VAR_12 = FUNC_2(VAR_7);
 int VAR_13 = (VAR_12->unit << 1) + VAR_8;
 int VAR_14 = (VAR_13 ^ 0x01) << 3;
 int VAR_15;
 static const uint8_t VAR_16[] = { 0x5d, 0x47, 0x34, 0x22, 0x20 };
 static const uint8_t VAR_17[] = { 0x77, 0x21, 0x20 };

 VAR_9 = FUNC_3(VAR_9, VAR_11->chip->max_dma);
 if (VAR_9 >= VAR_4) {

     FUNC_5(VAR_10, 0x56,
        (FUNC_4(VAR_10, 0x56, 2) &
         ~(0xf << (VAR_13 << 2))) |
        ((VAR_9 & VAR_0) << (VAR_13 << 2)), 2);
     FUNC_5(VAR_10, 0x54,
        FUNC_4(VAR_10, 0x54, 1) |
        (0x01 << VAR_13), 1);
     FUNC_5(VAR_10, 0x44,
        (FUNC_4(VAR_10, 0x44, 4) &
         ~(0xff << VAR_14)) |
        (VAR_17[2] << VAR_14), 4);
     VAR_15 = VAR_3;
 } else if (VAR_9 >= VAR_5) {

     FUNC_5(VAR_10, 0x54,
        FUNC_4(VAR_10, 0x54, 1) &
         ~(0x01 << VAR_13), 1);
     FUNC_5(VAR_10, 0x44,
        (FUNC_4(VAR_10, 0x44, 4) &
         ~(0xff << VAR_14)) |
        (VAR_17[VAR_9 & VAR_0] << VAR_14), 4);
     VAR_15 = (VAR_9 == VAR_5) ? VAR_1 :
  (VAR_9 == VAR_6) ? VAR_2 : VAR_3;
 } else {

     FUNC_5(VAR_10, 0x54,
        FUNC_4(VAR_10, 0x54, 1) &
        ~(0x01 << VAR_13), 1);
     VAR_15 = VAR_9;
 }

 FUNC_5(VAR_10, 0x4a,
    (FUNC_4(VAR_10, 0x4a, 2) &
     ~(0xf << (VAR_13 << 2))) |
    ((VAR_15 - VAR_1) << (VAR_13<<2)),2);
 FUNC_5(VAR_10, 0x40,
    (FUNC_4(VAR_10, 0x40, 4) &
     ~(0xff << VAR_14)) |
    (VAR_16[FUNC_0(VAR_15)] << VAR_14), 4);
 return (VAR_9);
}
