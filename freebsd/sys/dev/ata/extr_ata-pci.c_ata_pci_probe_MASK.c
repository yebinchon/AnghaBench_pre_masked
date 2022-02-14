
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int chipinit; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,char*) ;

int
FUNC_6(device_t VAR_5)
{
    struct ata_pci_controller *VAR_6 = FUNC_1(VAR_5);
    char VAR_7[64];


    if (FUNC_3(VAR_5) != VAR_2)
 return (VAR_1);


    if (FUNC_4(VAR_5) != VAR_3)
 return (VAR_1);

    FUNC_5(VAR_7, "%s ATA controller", FUNC_0(VAR_5));
    FUNC_2(VAR_5, VAR_7);
    VAR_6->chipinit = VAR_4;


    return (VAR_0);
}
