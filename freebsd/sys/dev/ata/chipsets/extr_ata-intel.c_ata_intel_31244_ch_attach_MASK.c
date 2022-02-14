
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_pci_controller {int r_res2; } ;
struct TYPE_4__ {int tf_write; int status; } ;
struct ata_channel {int unit; TYPE_2__ hw; int flags; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_3__ {int offset; int res; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_23)
{
    struct ata_pci_controller *VAR_24 = FUNC_5(FUNC_4(VAR_23));
    struct ata_channel *VAR_25 = FUNC_5(VAR_23);
    int VAR_26;
    int VAR_27;

    FUNC_2(VAR_23);

    VAR_27 = 0x200 + VAR_25->unit * 0x200;

    for (VAR_26 = VAR_9; VAR_26 < VAR_13; VAR_26++)
 VAR_25->r_io[VAR_26].res = VAR_24->r_res2;


    VAR_25->r_io[VAR_9].offset = VAR_27 + 0x00;
    VAR_25->r_io[VAR_12].offset = VAR_27 + 0x06;
    VAR_25->r_io[VAR_6].offset = VAR_27 + 0x08;
    VAR_25->r_io[VAR_17].offset = VAR_27 + 0x0c;
    VAR_25->r_io[VAR_7].offset = VAR_27 + 0x10;
    VAR_25->r_io[VAR_8].offset = VAR_27 + 0x14;
    VAR_25->r_io[VAR_10].offset = VAR_27 + 0x18;
    VAR_25->r_io[VAR_4].offset = VAR_27 + 0x1d;
    VAR_25->r_io[VAR_11].offset = VAR_27 + 0x04;
    VAR_25->r_io[VAR_20].offset = VAR_27 + 0x1c;
    VAR_25->r_io[VAR_0].offset = VAR_27 + 0x28;
    VAR_25->r_io[VAR_5].offset = VAR_27 + 0x29;


    VAR_25->r_io[VAR_19].offset = VAR_27 + 0x100;
    VAR_25->r_io[VAR_18].offset = VAR_27 + 0x104;
    VAR_25->r_io[VAR_16].offset = VAR_27 + 0x108;


    VAR_25->r_io[VAR_1].offset = VAR_27 + 0x70;
    VAR_25->r_io[VAR_3].offset = VAR_27 + 0x72;
    VAR_25->r_io[VAR_2].offset = VAR_27 + 0x74;

    VAR_25->flags |= VAR_14;
    VAR_25->flags |= VAR_15;
    FUNC_3(VAR_23);
    VAR_25->hw.status = VAR_21;
    VAR_25->hw.tf_write = VAR_22;


    FUNC_1(VAR_24->r_res2, 0x4,
      FUNC_0(VAR_24->r_res2, 0x04) | (0x01 << (VAR_25->unit << 3)));
    return 0;
}
