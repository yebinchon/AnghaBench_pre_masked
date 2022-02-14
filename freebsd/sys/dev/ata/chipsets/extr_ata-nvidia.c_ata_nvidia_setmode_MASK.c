
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
 int VAR_10;
 static const uint8_t VAR_11[] =
     { 0xa8, 0x65, 0x42, 0x22, 0x20, 0xa8, 0x22, 0x20 };
 static const uint8_t VAR_12[] =
     { 0xc2, 0xc1, 0xc0, 0xc4, 0xc5, 0xc6, 0xc7 };
 int VAR_13 = 0x63 - VAR_9;

 VAR_5 = FUNC_3(VAR_5, VAR_7->chip->max_dma);

 if (VAR_5 >= VAR_2) {
     FUNC_4(VAR_6, VAR_13, VAR_12[VAR_5 & VAR_0], 1);
     VAR_10 = VAR_1;
 } else {
     FUNC_4(VAR_6, VAR_13, 0x8b, 1);
     VAR_10 = VAR_5;
 }
 FUNC_4(VAR_6, VAR_13 - 0x08, VAR_11[FUNC_0(VAR_10)], 1);
 return (VAR_5);
}
