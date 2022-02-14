
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int setmode; int getrev; int reset; int ch_detach; int ch_attach; int r_rid2; int r_type2; int r_res2; TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 struct ata_pci_controller* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_10)
{
    struct ata_pci_controller *VAR_11 = FUNC_3(VAR_10);

    if (FUNC_1(VAR_10, VAR_3))
 return VAR_0;

    switch (VAR_11->chip->cfg1) {
    case 130:
 break;
    case 129:
    case 133:
 FUNC_5(VAR_10, 0x52, FUNC_4(VAR_10, 0x52, 1) & ~0x04, 1);
 break;
    case 134:
    case 131:
 FUNC_5(VAR_10, 0x49, FUNC_4(VAR_10, 0x49, 1) & ~0x01, 1);
 break;
    case 132:
 FUNC_5(VAR_10, 0x50, FUNC_4(VAR_10, 0x50, 2) | 0x0008, 2);
 FUNC_5(VAR_10, 0x52, FUNC_4(VAR_10, 0x52, 2) | 0x0008, 2);
 break;
    case 128:
 VAR_11->r_type2 = VAR_2;
 VAR_11->r_rid2 = FUNC_0(5);
 if ((VAR_11->r_res2 = FUNC_2(VAR_10, VAR_11->r_type2,
         &VAR_11->r_rid2, VAR_1))) {
     VAR_11->ch_attach = VAR_7;
     VAR_11->ch_detach = VAR_4;
     VAR_11->reset = VAR_8;
 }
 VAR_11->setmode = VAR_6;
 VAR_11->getrev = VAR_5;
 return 0;
    default:
 return VAR_0;
    }
    VAR_11->setmode = VAR_9;
    return 0;
}
