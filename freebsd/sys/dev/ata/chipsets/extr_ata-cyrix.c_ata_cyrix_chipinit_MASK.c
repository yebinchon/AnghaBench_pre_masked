
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int setmode; int ch_attach; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
    struct ata_pci_controller *VAR_5 = FUNC_1(VAR_4);

    if (FUNC_0(VAR_4, VAR_3))
 return VAR_0;
    VAR_5->ch_attach = VAR_1;
    VAR_5->setmode = VAR_2;
    return 0;
}
