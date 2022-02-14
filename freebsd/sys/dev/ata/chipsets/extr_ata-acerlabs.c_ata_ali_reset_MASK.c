
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int chiprev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int **,int*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_9(device_t VAR_2)
{
    struct ata_pci_controller *VAR_3 = FUNC_4(FUNC_3(VAR_2));
    struct ata_channel *VAR_4 = FUNC_4(VAR_2);
    device_t *VAR_5;
    int VAR_6, VAR_7;

    FUNC_1(VAR_2);






    if (VAR_3->chip->chiprev == 0xc3 || VAR_3->chip->chiprev == 0xc2) {
 if (!FUNC_2(FUNC_0(VAR_2), &VAR_5, &VAR_6)) {
     for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_6(VAR_5[VAR_7]) == VAR_0) {
      FUNC_8(VAR_5[VAR_7], 0x58,
         FUNC_7(VAR_5[VAR_7], 0x58, 1) &
         ~(0x04 << VAR_4->unit), 1);
      FUNC_8(VAR_5[VAR_7], 0x58,
         FUNC_7(VAR_5[VAR_7], 0x58, 1) |
         (0x04 << VAR_4->unit), 1);
      break;
  }
     }
     FUNC_5(VAR_5, VAR_1);
 }
    }
}
