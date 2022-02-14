
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ata_channel {int attached; int flags; scalar_t__ unit; TYPE_1__* r_io; } ;
typedef int rman_res_t ;
typedef int device_t ;
struct TYPE_2__ {int offset; struct resource* res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct resource* FUNC_3 (int ,int ,int*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int,int *,int *) ;
 int FUNC_5 (int ,int ,int,struct resource*) ;
 int FUNC_6 (int ,int ,int,scalar_t__,int ) ;
 struct ata_channel* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_13)
{
    struct ata_channel *VAR_14 = FUNC_7(VAR_13);
    struct resource *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    rman_res_t VAR_17;
    int VAR_18, VAR_19;

    if (VAR_14->attached)
 return (0);
    VAR_14->attached = 1;


    VAR_19 = VAR_7;
    if (!(VAR_15 = FUNC_3(VAR_13, VAR_12, &VAR_19,
        VAR_8, VAR_11)))
 return VAR_10;


    if (FUNC_4(VAR_13, VAR_12, VAR_2, &VAR_17, &VAR_17)) {
 FUNC_6(VAR_13, VAR_12, VAR_2,
    FUNC_8(VAR_15) + VAR_4, VAR_3);
    }


    VAR_19 = VAR_2;
    if (!(VAR_16 = FUNC_3(VAR_13, VAR_12, &VAR_19,
           VAR_3, VAR_11))) {
 FUNC_5(VAR_13, VAR_12, VAR_7, VAR_15);
 return VAR_10;
    }


    for (VAR_18 = VAR_5; VAR_18 <= VAR_0; VAR_18++) {
 VAR_14->r_io[VAR_18].res = VAR_15;
 VAR_14->r_io[VAR_18].offset = VAR_18;
    }
    VAR_14->r_io[VAR_1].res = VAR_16;
    VAR_14->r_io[VAR_1].offset = 0;
    VAR_14->r_io[VAR_6].res = VAR_15;
    FUNC_1(VAR_13);


    VAR_14->unit = 0;
    VAR_14->flags |= VAR_9;
    FUNC_2(VAR_13);
    return FUNC_0(VAR_13);
}
