
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int channels; int ch_attach; int * chipset_data; int setmode; TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ chipid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{
    struct ata_pci_controller *VAR_7 = FUNC_1(VAR_6);

    if (FUNC_0(VAR_6, VAR_2))
 return VAR_1;

    if (VAR_7->chip->chipid == VAR_0) {

 VAR_7->channels = 1;

 VAR_7->setmode = VAR_3;
    }
    else {

 FUNC_3(VAR_6, 0x50, FUNC_2(VAR_6, 0x50, 1) & ~0x83, 1);


 FUNC_3(VAR_6, 0x54, 0x31, 1);
 FUNC_3(VAR_6, 0x56, 0x31, 1);

 VAR_7->setmode = VAR_4;

 VAR_7->chipset_data = ((void*)0);
    }
    VAR_7->ch_attach = VAR_5;
    return (0);
}
