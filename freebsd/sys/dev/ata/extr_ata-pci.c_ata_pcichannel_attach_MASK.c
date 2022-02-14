
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int (* ch_attach ) (int ) ;} ;
struct ata_channel {int attached; intptr_t unit; int pm_level; int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_0)
{
    struct ata_pci_controller *VAR_1 = FUNC_4(FUNC_3(VAR_0));
    struct ata_channel *VAR_2 = FUNC_4(VAR_0);
    int VAR_3;

    if (VAR_2->attached)
 return (0);
    VAR_2->attached = 1;

    VAR_2->dev = VAR_0;
    VAR_2->unit = (intptr_t)FUNC_1(VAR_0);

    FUNC_6(FUNC_2(VAR_0),
 FUNC_5(VAR_0), "pm_level", &VAR_2->pm_level);

    if ((VAR_3 = VAR_1->ch_attach(VAR_0)))
 return VAR_3;

    return FUNC_0(VAR_0);
}
