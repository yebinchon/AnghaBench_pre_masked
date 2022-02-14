
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int (* ch_detach ) (int ) ;} ;
struct ata_channel {scalar_t__ attached; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
    struct ata_pci_controller *VAR_1 = FUNC_2(FUNC_1(VAR_0));
    struct ata_channel *VAR_2 = FUNC_2(VAR_0);
    int VAR_3;

    if (!VAR_2->attached)
 return (0);
    VAR_2->attached = 0;

    if ((VAR_3 = FUNC_0(VAR_0)))
 return VAR_3;

    if (VAR_1->ch_detach)
 return (VAR_1->ch_detach(VAR_0));

    return (0);
}
