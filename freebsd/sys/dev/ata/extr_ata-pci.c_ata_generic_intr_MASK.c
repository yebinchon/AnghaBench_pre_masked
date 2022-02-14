
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* interrupt; } ;
struct ata_channel {int dummy; } ;
struct TYPE_2__ {int (* function ) (struct ata_channel*) ;struct ata_channel* argument; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_channel*) ;

void
FUNC_1(void *VAR_1)
{
    struct ata_pci_controller *VAR_2 = VAR_1;
    struct ata_channel *VAR_3;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
 if ((VAR_3 = VAR_2->interrupt[VAR_4].argument))
     VAR_2->interrupt[VAR_4].function(VAR_3);
    }
}
