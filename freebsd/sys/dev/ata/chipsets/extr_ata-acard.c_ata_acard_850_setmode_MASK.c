
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, int VAR_4, int VAR_5)
{
    device_t VAR_6 = FUNC_0(VAR_3);
    struct ata_pci_controller *VAR_7 = FUNC_1(VAR_6);
    struct ata_channel *VAR_8 = FUNC_1(VAR_3);
    int VAR_9 = (VAR_8->unit << 1) + VAR_4;

    VAR_5 = FUNC_2(VAR_5, VAR_7->chip->max_dma);

    if (VAR_5 >= VAR_2) {
     u_int8_t VAR_10 = FUNC_3(VAR_6, 0x54, 1);

     VAR_10 &= ~(0x03 << (VAR_9 << 1));
     if (VAR_5 >= VAR_1)
  VAR_10 |= (((VAR_5 & VAR_0) + 1) << (VAR_9 << 1));
     FUNC_4(VAR_6, 0x54, VAR_10, 1);
     FUNC_4(VAR_6, 0x4a, 0xa6, 1);
     FUNC_4(VAR_6, 0x40 + (VAR_9 << 1), 0x0301, 2);
    }

    return (VAR_5);
}
