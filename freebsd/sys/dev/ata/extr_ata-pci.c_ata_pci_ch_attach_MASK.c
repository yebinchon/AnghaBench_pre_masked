
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ata_pci_controller {struct resource* r_res1; scalar_t__ legacy; } ;
struct ata_channel {int unit; TYPE_1__* r_io; } ;
typedef int device_t ;
struct TYPE_2__ {int offset; struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct resource* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

int
FUNC_7(device_t VAR_12)
{
    struct ata_pci_controller *VAR_13 = FUNC_6(FUNC_5(VAR_12));
    struct ata_channel *VAR_14 = FUNC_6(VAR_12);
    struct resource *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    int VAR_17, VAR_18;

    VAR_18 = VAR_8;
    if (!(VAR_15 = FUNC_3(VAR_12, VAR_11, &VAR_18, VAR_10)))
 return VAR_9;

    VAR_18 = VAR_5;
    if (!(VAR_16 = FUNC_3(VAR_12, VAR_11, &VAR_18,VAR_10))){
 FUNC_4(VAR_12, VAR_11, VAR_8, VAR_15);
 return VAR_9;
    }

    FUNC_1(VAR_12);

    for (VAR_17 = VAR_6; VAR_17 <= VAR_3; VAR_17 ++) {
 VAR_14->r_io[VAR_17].res = VAR_15;
 VAR_14->r_io[VAR_17].offset = VAR_17;
    }
    VAR_14->r_io[VAR_4].res = VAR_16;
    VAR_14->r_io[VAR_4].offset = VAR_13->legacy ? 0 : 2;
    VAR_14->r_io[VAR_7].res = VAR_15;
    FUNC_0(VAR_12);
    if (VAR_13->r_res1) {
 for (VAR_17 = VAR_0; VAR_17 <= VAR_1; VAR_17++) {
     VAR_14->r_io[VAR_17].res = VAR_13->r_res1;
     VAR_14->r_io[VAR_17].offset = (VAR_17 - VAR_0) + (VAR_14->unit*VAR_2);
 }
    }

    FUNC_2(VAR_12);
    return 0;
}
