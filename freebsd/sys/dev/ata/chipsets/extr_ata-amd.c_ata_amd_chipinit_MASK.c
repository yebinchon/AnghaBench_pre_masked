
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int setmode; int ch_attach; TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5)
{
    struct ata_pci_controller *VAR_6 = FUNC_1(VAR_5);

    if (FUNC_0(VAR_5, VAR_4))
 return VAR_1;


    if (VAR_6->chip->cfg1 & VAR_0)
 FUNC_3(VAR_5, 0x41, FUNC_2(VAR_5, 0x41, 1) & 0x0f, 1);
    else
 FUNC_3(VAR_5, 0x41, FUNC_2(VAR_5, 0x41, 1) | 0xf0, 1);

    VAR_6->ch_attach = VAR_2;
    VAR_6->setmode = VAR_3;
    return 0;
}
