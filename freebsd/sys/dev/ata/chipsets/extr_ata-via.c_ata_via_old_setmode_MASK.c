
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {size_t cfg1; int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, int VAR_4, int VAR_5)
{
 device_t VAR_6 = FUNC_1(VAR_3);
 struct ata_pci_controller *VAR_7 = FUNC_2(VAR_6);
 struct ata_channel *VAR_8 = FUNC_2(VAR_3);
 int VAR_9 = (VAR_8->unit << 1) + VAR_4;
 int VAR_10 = 0x53 - VAR_9;
 int VAR_11;
 static const uint8_t VAR_12[] =
     { 0xa8, 0x65, 0x42, 0x22, 0x20, 0xa8, 0x22, 0x20 };
 static const uint8_t VAR_13[][7] = {
     { 0xc2, 0xc1, 0xc0, 0x00, 0x00, 0x00, 0x00 },
     { 0xee, 0xec, 0xea, 0xe9, 0xe8, 0x00, 0x00 },
     { 0xf7, 0xf6, 0xf4, 0xf2, 0xf1, 0xf0, 0x00 },
     { 0xf7, 0xf7, 0xf6, 0xf4, 0xf2, 0xf1, 0xf0 } };

 VAR_5 = FUNC_3(VAR_5, VAR_7->chip->max_dma);

 if (VAR_5 >= VAR_2) {
     FUNC_4(VAR_6, VAR_10,
        VAR_13[VAR_7->chip->cfg1][VAR_5 & VAR_0], 1);
     VAR_11 = VAR_1;
 } else {
     FUNC_4(VAR_6, VAR_10, 0x8b, 1);
     VAR_11 = VAR_5;
 }

 FUNC_4(VAR_6, VAR_10 - 0x08,VAR_12[FUNC_0(VAR_11)], 1);
 return (VAR_5);
}
