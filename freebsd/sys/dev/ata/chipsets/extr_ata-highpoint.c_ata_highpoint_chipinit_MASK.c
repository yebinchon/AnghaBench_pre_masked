
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int setmode; int ch_detach; int ch_attach; TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg2; scalar_t__ cfg1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7)
{
    struct ata_pci_controller *VAR_8 = FUNC_1(VAR_7);

    if (FUNC_0(VAR_7, VAR_3))
 return VAR_0;

    if (VAR_8->chip->cfg2 == VAR_2) {

 FUNC_3(VAR_7, 0x51, (FUNC_2(VAR_7, 0x51, 1) & ~0x80), 1);
    }
    else {

 FUNC_3(VAR_7, 0x51, (FUNC_2(VAR_7, 0x51, 1) & ~0x03), 1);
 FUNC_3(VAR_7, 0x55, (FUNC_2(VAR_7, 0x55, 1) & ~0x03), 1);


 FUNC_3(VAR_7, 0x5a, (FUNC_2(VAR_7, 0x5a, 1) & ~0x10), 1);


 if (VAR_8->chip->cfg1 < VAR_1)
     FUNC_3(VAR_7, 0x5b, 0x22, 1);
 else
     FUNC_3(VAR_7, 0x5b,
        (FUNC_2(VAR_7, 0x5b, 1) & 0x01) | 0x20, 1);
    }
    VAR_8->ch_attach = VAR_4;
    VAR_8->ch_detach = VAR_6;
    VAR_8->setmode = VAR_5;
    return 0;
}
