
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ata_pci_controller {TYPE_4__* chip; int r_res2; } ;
struct TYPE_7__ {int status; } ;
struct TYPE_6__ {int boundary; int segsize; } ;
struct ata_channel {int unit; int flags; TYPE_3__ hw; TYPE_2__ dma; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ max_dma; int cfg2; } ;
struct TYPE_5__ {int offset; int res; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_18 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_19)
{
    struct ata_pci_controller *VAR_20 = FUNC_5(FUNC_4(VAR_19));
    struct ata_channel *VAR_21 = FUNC_5(VAR_19);
    int VAR_22 = (VAR_21->unit & 1), VAR_23 = (VAR_21->unit & 2);
    int VAR_24;

    for (VAR_24 = VAR_6; VAR_24 <= VAR_4; VAR_24++) {
 VAR_21->r_io[VAR_24].res = VAR_20->r_res2;
 VAR_21->r_io[VAR_24].offset = 0x80 + VAR_24 + (VAR_22 << 6) + (VAR_23 << 8);
    }
    VAR_21->r_io[VAR_5].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_5].offset = 0x8a + (VAR_22 << 6) + (VAR_23 << 8);
    VAR_21->r_io[VAR_7].res = VAR_20->r_res2;
    FUNC_1(VAR_19);

    VAR_21->r_io[VAR_0].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_0].offset = 0x00 + (VAR_22 << 3) + (VAR_23 << 8);
    VAR_21->r_io[VAR_2].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_2].offset = 0x02 + (VAR_22 << 3) + (VAR_23 << 8);
    VAR_21->r_io[VAR_1].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_1].offset = 0x04 + (VAR_22 << 3) + (VAR_23 << 8);

    if (VAR_20->chip->max_dma >= VAR_10) {
 VAR_21->r_io[VAR_14].res = VAR_20->r_res2;
 VAR_21->r_io[VAR_14].offset = 0x104 + (VAR_22 << 7) + (VAR_23 << 8);
 VAR_21->r_io[VAR_13].res = VAR_20->r_res2;
 VAR_21->r_io[VAR_13].offset = 0x108 + (VAR_22 << 7) + (VAR_23 << 8);
 VAR_21->r_io[VAR_12].res = VAR_20->r_res2;
 VAR_21->r_io[VAR_12].offset = 0x100 + (VAR_22 << 7) + (VAR_23 << 8);
 VAR_21->flags |= VAR_9;
 VAR_21->flags |= VAR_11;
 VAR_21->flags |= VAR_8;


 FUNC_0(VAR_20->r_res2, 0x148 + (VAR_22 << 7) + (VAR_23 << 8),(1 << 16));
    }

    if (VAR_20->chip->cfg2 & VAR_16) {

 VAR_21->dma.boundary = 8192;
 VAR_21->dma.segsize = 15 * VAR_15;
    }

    FUNC_3(VAR_19);
    VAR_21->hw.status = VAR_18;
    if (VAR_20->chip->cfg2 & VAR_17)
 VAR_21->flags |= VAR_3;

    FUNC_2(VAR_19);

    return 0;
}
