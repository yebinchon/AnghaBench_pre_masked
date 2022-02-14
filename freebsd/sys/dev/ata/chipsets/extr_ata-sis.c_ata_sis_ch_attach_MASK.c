
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_pci_controller {int r_res2; TYPE_1__* chip; } ;
struct ata_channel {int unit; int flags; TYPE_2__* r_io; } ;
typedef int device_t ;
struct TYPE_4__ {int offset; int res; } ;
struct TYPE_3__ {scalar_t__ chipid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
    struct ata_pci_controller *VAR_8 = FUNC_2(FUNC_1(VAR_7));
    struct ata_channel *VAR_9 = FUNC_2(VAR_7);
    int VAR_10 = VAR_9->unit << ((VAR_8->chip->chipid == VAR_4) ? 5 : 6);


    if (FUNC_0(VAR_7))
 return VAR_6;

    VAR_9->r_io[VAR_5].res = VAR_8->r_res2;
    VAR_9->r_io[VAR_5].offset = 0x00 + VAR_10;
    VAR_9->r_io[VAR_3].res = VAR_8->r_res2;
    VAR_9->r_io[VAR_3].offset = 0x04 + VAR_10;
    VAR_9->r_io[VAR_2].res = VAR_8->r_res2;
    VAR_9->r_io[VAR_2].offset = 0x08 + VAR_10;
    VAR_9->flags |= VAR_0;
    VAR_9->flags |= VAR_1;



    return 0;
}
