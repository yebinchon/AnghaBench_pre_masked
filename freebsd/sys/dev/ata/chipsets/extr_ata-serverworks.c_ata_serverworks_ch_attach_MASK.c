
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ata_pci_controller {int r_res2; TYPE_2__* chip; } ;
struct TYPE_8__ {int max_iosize; } ;
struct TYPE_7__ {int status; int tf_write; int tf_read; } ;
struct ata_channel {int unit; int flags; TYPE_4__ dma; TYPE_3__ hw; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_6__ {scalar_t__ chipid; } ;
struct TYPE_5__ {int offset; int res; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_26)
{
    struct ata_pci_controller *VAR_27 = FUNC_6(FUNC_5(VAR_26));
    struct ata_channel *VAR_28 = FUNC_6(VAR_26);
    int VAR_29;
    int VAR_30;

    VAR_29 = VAR_28->unit * 0x100;

    for (VAR_30 = VAR_8; VAR_30 < VAR_14; VAR_30++)
 VAR_28->r_io[VAR_30].res = VAR_27->r_res2;


    VAR_28->r_io[VAR_8].offset = VAR_29 + 0x00;
    VAR_28->r_io[VAR_11].offset = VAR_29 + 0x04;
    VAR_28->r_io[VAR_5].offset = VAR_29 + 0x08;
    VAR_28->r_io[VAR_18].offset = VAR_29 + 0x0c;
    VAR_28->r_io[VAR_6].offset = VAR_29 + 0x10;
    VAR_28->r_io[VAR_7].offset = VAR_29 + 0x14;
    VAR_28->r_io[VAR_10].offset = VAR_29 + 0x18;
    VAR_28->r_io[VAR_3].offset = VAR_29 + 0x1c;
    VAR_28->r_io[VAR_4].offset = VAR_29 + 0x20;
    FUNC_2(VAR_26);


    VAR_28->r_io[VAR_0].offset = VAR_29 + 0x30;
    VAR_28->r_io[VAR_2].offset = VAR_29 + 0x32;
    VAR_28->r_io[VAR_1].offset = VAR_29 + 0x34;


    VAR_28->r_io[VAR_20].offset = VAR_29 + 0x40;
    VAR_28->r_io[VAR_19].offset = VAR_29 + 0x44;
    VAR_28->r_io[VAR_17].offset = VAR_29 + 0x48;

    VAR_28->flags |= VAR_15 | VAR_16 | VAR_13;
    FUNC_4(VAR_26);
    VAR_28->hw.tf_read = VAR_24;
    VAR_28->hw.tf_write = VAR_25;

    if (VAR_27->chip->chipid == VAR_12) {





 FUNC_1(VAR_27->r_res2, VAR_29 + 0x80,
     FUNC_0(VAR_27->r_res2, VAR_29 + 0x80) & ~0x00040000);
 FUNC_1(VAR_27->r_res2, VAR_29 + 0x88, 0);
 VAR_28->flags |= VAR_9;






 VAR_28->hw.status = VAR_23;
 VAR_28->flags |= VAR_21;
    }


    VAR_28->dma.max_iosize = 64 * VAR_22;

    FUNC_3(VAR_26);

    return 0;
}
