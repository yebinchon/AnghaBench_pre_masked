
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct twe_softc {struct twe_drive* twe_drive; } ;
struct twe_drive {int td_size; int td_heads; int td_sectors; int td_cylinders; int td_twe_unit; int td_stripe; int td_type; int td_state; } ;
struct TYPE_6__ {int stripe_size; int configuration; } ;
struct TYPE_5__ {int* data; } ;
typedef TYPE_1__ TWE_Param ;
typedef TYPE_2__ TWE_Array_Descriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (struct twe_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct twe_softc*,struct twe_drive*) ;
 TYPE_1__* FUNC_5 (struct twe_softc*,int,int ,int,int *) ;
 scalar_t__ FUNC_6 (struct twe_softc*,int,int ,int *) ;
 scalar_t__ FUNC_7 (struct twe_softc*,int,int ,int*) ;
 scalar_t__ FUNC_8 (struct twe_softc*,int,int ,int*) ;
 int FUNC_9 (struct twe_softc*,char*,...) ;

__attribute__((used)) static int
FUNC_10(struct twe_softc *VAR_13, int VAR_14)
{
    struct twe_drive *VAR_15;
    int VAR_16, VAR_17 = 0;
    u_int16_t VAR_18;
    TWE_Param *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
    TWE_Array_Descriptor *VAR_21;

    FUNC_0(VAR_13);
    if (VAR_14 < 0 || VAR_14 > VAR_4)
 return (VAR_0);




    FUNC_1(VAR_13);
    if ((VAR_19 = FUNC_5(VAR_13, VAR_11, VAR_12,
    VAR_4, ((void*)0))) == ((void*)0)) {
 FUNC_2(VAR_13);
 FUNC_9(VAR_13, "can't detect attached units\n");
 return (VAR_1);
    }

    VAR_15 = &VAR_13->twe_drive[VAR_14];

    if (!(VAR_19->data[VAR_14] & VAR_10)) {
 FUNC_2(VAR_13);
 VAR_17 = VAR_2;
 goto out;
    }

    VAR_16 = VAR_5 + VAR_14;

    if (FUNC_8(VAR_13, VAR_16, VAR_6, &VAR_15->td_size)) {
 FUNC_2(VAR_13);
 FUNC_9(VAR_13, "error fetching capacity for unit %d\n", VAR_14);
 VAR_17 = VAR_1;
 goto out;
    }
    if (FUNC_6(VAR_13, VAR_16, VAR_9, &VAR_15->td_state)) {
 FUNC_2(VAR_13);
 FUNC_9(VAR_13, "error fetching state for unit %d\n", VAR_14);
 VAR_17 = VAR_1;
 goto out;
    }
    if (FUNC_7(VAR_13, VAR_16, VAR_8, &VAR_18)) {
 FUNC_2(VAR_13);
 FUNC_9(VAR_13, "error fetching descriptor size for unit %d\n", VAR_14);
 VAR_17 = VAR_1;
 goto out;
    }
    if ((VAR_20 = FUNC_5(VAR_13, VAR_16, VAR_7, VAR_18 - 3, ((void*)0))) == ((void*)0)) {
 FUNC_2(VAR_13);
 FUNC_9(VAR_13, "error fetching descriptor for unit %d\n", VAR_14);
 VAR_17 = VAR_1;
 goto out;
    }
    VAR_21 = (TWE_Array_Descriptor *)VAR_20->data;
    VAR_15->td_type = VAR_21->configuration;
    VAR_15->td_stripe = VAR_21->stripe_size;


    if (VAR_15->td_size > 0x200000) {
 VAR_15->td_heads = 255;
 VAR_15->td_sectors = 63;
    } else {
 VAR_15->td_heads = 64;
 VAR_15->td_sectors = 32;
    }
    VAR_15->td_cylinders = VAR_15->td_size / (VAR_15->td_heads * VAR_15->td_sectors);
    VAR_15->td_twe_unit = VAR_14;
    FUNC_2(VAR_13);

    VAR_17 = FUNC_4(VAR_13, VAR_15);

out:
    if (VAR_20 != ((void*)0))
 FUNC_3(VAR_20, VAR_3);
    if (VAR_19 != ((void*)0))
 FUNC_3(VAR_19, VAR_3);
    return (VAR_17);
}
