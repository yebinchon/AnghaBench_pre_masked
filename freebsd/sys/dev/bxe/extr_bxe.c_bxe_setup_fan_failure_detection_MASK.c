
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int shmem2_base; int shmem_base; } ;
struct bxe_softc {TYPE_2__ devinfo; } ;
struct TYPE_4__ {int config2; } ;
struct TYPE_6__ {TYPE_1__ shared_hw_config; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bxe_softc*,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,int,int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_5 (struct bxe_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_12)
{
    int VAR_13;
    uint32_t VAR_14;
    int VAR_15;

    VAR_13 = 0;
    VAR_14 = (FUNC_3(VAR_12, VAR_11.shared_hw_config.config2) &
           VAR_9);

    if (VAR_14 == VAR_8) {
        VAR_13 = 1;
    }





    else if (VAR_14 == VAR_10) {
        for (VAR_15 = VAR_6; VAR_15 < VAR_7; VAR_15++) {
            VAR_13 |= FUNC_5(VAR_12,
                                                     VAR_12->devinfo.shmem_base,
                                                     VAR_12->devinfo.shmem2_base,
                                                     VAR_15);
        }
    }

    FUNC_0(VAR_12, VAR_0, "fan detection setting: %d\n", VAR_13);

    if (VAR_13 == 0) {
        return;
    }


    FUNC_4(VAR_12, VAR_5, VAR_3);


    VAR_14 = FUNC_1(VAR_12, VAR_2);
    VAR_14 |= (VAR_5 << VAR_4);
    FUNC_2(VAR_12, VAR_2, VAR_14);


    VAR_14 = FUNC_1(VAR_12, VAR_1);
    VAR_14 |= VAR_5;
    FUNC_2(VAR_12, VAR_1, VAR_14);
}
