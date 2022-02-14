
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int channels; int setmode; TYPE_1__* chip; int ch_detach; int ch_attach; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct ata_pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
    struct ata_pci_controller *VAR_8 = FUNC_1(VAR_7);

    if (FUNC_0(VAR_7, VAR_5))
 return VAR_1;

    VAR_8->ch_attach = VAR_4;
    VAR_8->ch_detach = VAR_6;
    if (VAR_8->chip->cfg1 == VAR_0) {
 VAR_8->setmode = VAR_2;

 VAR_8->channels = 1;
 FUNC_2(VAR_7, "second channel ignored\n");
    }
    else
 VAR_8->setmode = VAR_3;
    return 0;
}
