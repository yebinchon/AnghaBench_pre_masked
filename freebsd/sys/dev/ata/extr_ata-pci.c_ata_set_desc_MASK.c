
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {char* text; int max_dma; } ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 struct ata_pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;

void
FUNC_5(device_t VAR_0)
{
    struct ata_pci_controller *VAR_1 = FUNC_2(VAR_0);
    char VAR_2[128];

    FUNC_4(VAR_2, "%s %s %s controller",
            FUNC_1(VAR_0), VAR_1->chip->text,
            FUNC_0(VAR_1->chip->max_dma));
    FUNC_3(VAR_0, VAR_2);
}
