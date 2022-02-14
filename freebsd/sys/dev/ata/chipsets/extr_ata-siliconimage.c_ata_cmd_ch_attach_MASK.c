
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct TYPE_4__ {int status; } ;
struct ata_channel {int flags; TYPE_2__ hw; } ;
typedef int device_t ;
struct TYPE_3__ {int cfg2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
    struct ata_pci_controller *VAR_5 = FUNC_2(FUNC_1(VAR_4));
    struct ata_channel *VAR_6 = FUNC_2(VAR_4);


    if (FUNC_0(VAR_4))
 return VAR_1;

    if (VAR_5->chip->cfg2 & VAR_2)
 VAR_6->hw.status = VAR_3;

    VAR_6->flags |= VAR_0;

    return 0;
}
