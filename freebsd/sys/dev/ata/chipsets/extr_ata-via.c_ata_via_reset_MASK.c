
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int unit; scalar_t__ devices; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg2; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_1)
{
    struct ata_pci_controller *VAR_2 = FUNC_3(FUNC_2(VAR_1));
    struct ata_channel *VAR_3 = FUNC_3(VAR_1);

    if ((VAR_2->chip->cfg2 & VAR_0) && (VAR_3->unit > 1))
        FUNC_0(VAR_1);
    else {
 if (FUNC_1(VAR_1, -1, 1))
     FUNC_0(VAR_1);
 else
     VAR_3->devices = 0;
    }
}
