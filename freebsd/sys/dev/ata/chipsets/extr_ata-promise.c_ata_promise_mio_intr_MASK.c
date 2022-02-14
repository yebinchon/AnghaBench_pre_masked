
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct ata_pci_controller {int channels; void* chipset_data; TYPE_1__* interrupt; int r_res2; } ;
struct ata_channel {int dummy; } ;
struct TYPE_2__ {int (* function ) (struct ata_channel*) ;struct ata_channel* argument; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (struct ata_channel*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
    struct ata_pci_controller *VAR_1 = VAR_0;
    struct ata_channel *VAR_2;
    u_int32_t VAR_3;
    int VAR_4;






    VAR_3 = FUNC_0(VAR_1->r_res2, 0x040);
    FUNC_1(VAR_1->r_res2, 0x040, VAR_3);
    VAR_1->chipset_data = (void *)(uintptr_t)VAR_3;

    for (VAR_4 = 0; VAR_4 < VAR_1->channels; VAR_4++) {
 if ((VAR_2 = VAR_1->interrupt[VAR_4].argument))
     VAR_1->interrupt[VAR_4].function(VAR_2);
    }

    VAR_1->chipset_data = (void *)(uintptr_t)0xffffffff;
}
