
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {TYPE_2__* r_io; int unit; } ;
typedef int device_t ;
struct TYPE_4__ {int res; } ;
struct TYPE_3__ {int cfg2; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
    struct ata_pci_controller *VAR_5 = FUNC_5(FUNC_4(VAR_4));
    struct ata_channel *VAR_6 = FUNC_5(VAR_4);


    if (VAR_5->chip->cfg2 & VAR_3) {
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->unit);
 FUNC_3(FUNC_4(VAR_4),
     VAR_2, VAR_7, VAR_6->r_io[VAR_0].res);

 FUNC_2(VAR_4);
    }
    else {

 if (FUNC_1(VAR_4))
     return VAR_1;
    }

    return 0;
}
