
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_pci_controller {int r_res2; } ;
struct TYPE_4__ {int status; } ;
struct ata_channel {int unit; int flags; TYPE_2__ hw; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_3__ {int offset; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_7)
{
    struct ata_pci_controller *VAR_8 = FUNC_2(FUNC_1(VAR_7));
    struct ata_channel *VAR_9 = FUNC_2(VAR_7);


    if (FUNC_0(VAR_7))
 return VAR_5;

    VAR_9->r_io[VAR_4].res = VAR_8->r_res2;
    VAR_9->r_io[VAR_4].offset = (VAR_9->unit << 6);
    VAR_9->r_io[VAR_3].res = VAR_8->r_res2;
    VAR_9->r_io[VAR_3].offset = 0x04 + (VAR_9->unit << 6);
    VAR_9->r_io[VAR_2].res = VAR_8->r_res2;
    VAR_9->r_io[VAR_2].offset = 0x08 + (VAR_9->unit << 6);

    VAR_9->hw.status = VAR_6;
    VAR_9->flags |= VAR_0;
    VAR_9->flags |= VAR_1;
    return 0;
}
