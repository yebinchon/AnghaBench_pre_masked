
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ata_pci_controller {TYPE_2__* chip; struct resource* r_res2; struct resource* r_res1; } ;
struct TYPE_6__ {int status; } ;
struct ata_channel {int unit; int flags; TYPE_3__ hw; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_5__ {int cfg2; int cfg1; } ;
struct TYPE_4__ {int offset; struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ata_channel*,int,size_t,int) ;
 int VAR_18 ;
 struct resource* FUNC_6 (int ,int ,int*,int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_19)
{
    struct ata_pci_controller *VAR_20 = FUNC_8(FUNC_7(VAR_19));
    struct ata_channel *VAR_21 = FUNC_8(VAR_19);


    if (VAR_20->chip->cfg2 & VAR_17) {
 struct resource *VAR_22;
 int VAR_23, VAR_24;

 FUNC_3(VAR_19);

 VAR_24 = FUNC_0(VAR_21->unit);
 if (!(VAR_22 = FUNC_6(FUNC_7(VAR_19),
         VAR_16,
         &VAR_24, VAR_15)))
     return VAR_14;

 for (VAR_23 = VAR_5; VAR_23 <= VAR_3; VAR_23 ++) {
     VAR_21->r_io[VAR_23].res = VAR_22;
     VAR_21->r_io[VAR_23].offset = VAR_23;
 }
 VAR_21->r_io[VAR_4].res = VAR_22;
 VAR_21->r_io[VAR_4].offset = 2 + VAR_7;
 VAR_21->r_io[VAR_6].res = VAR_22;
 FUNC_1(VAR_19);
 for (VAR_23 = VAR_0; VAR_23 <= VAR_1; VAR_23++) {
     VAR_21->r_io[VAR_23].res = VAR_20->r_res1;
     VAR_21->r_io[VAR_23].offset = (VAR_23 - VAR_0)+(VAR_21->unit * VAR_2);
 }
 FUNC_4(VAR_19);
 if (VAR_21->unit >= 2)
     return 0;
    }
    else {

 if (FUNC_2(VAR_19))
     return VAR_14;
    }

    VAR_21->r_io[VAR_13].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_13].offset = (VAR_21->unit << VAR_20->chip->cfg1);
    VAR_21->r_io[VAR_12].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_12].offset = 0x04 + (VAR_21->unit << VAR_20->chip->cfg1);
    VAR_21->r_io[VAR_11].res = VAR_20->r_res2;
    VAR_21->r_io[VAR_11].offset = 0x08 + (VAR_21->unit << VAR_20->chip->cfg1);
    VAR_21->hw.status = VAR_18;
    VAR_21->flags |= VAR_8;
    VAR_21->flags |= VAR_10;
    VAR_21->flags |= VAR_9;

    FUNC_5(VAR_21, -1, VAR_12, 0xffffffff);

    return 0;
}
