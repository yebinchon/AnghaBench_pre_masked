
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int cmng_enables; } ;
struct cmng_init_input {int* vnic_min_rate; TYPE_3__ flags; } ;
struct TYPE_4__ {int* mf_config; } ;
struct TYPE_5__ {TYPE_1__ mf_info; } ;
struct bxe_softc {TYPE_2__ devinfo; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_7,
                struct cmng_init_input *VAR_8)
{
    uint32_t VAR_9;
    uint32_t VAR_10;
    int VAR_11 = 1;
    int VAR_12;

    for (VAR_12 = VAR_6; VAR_12 < FUNC_2(VAR_7); VAR_12++) {
        VAR_9 = VAR_7->devinfo.mf_info.mf_config[VAR_12];
        VAR_10 = (((VAR_9 & VAR_4) >>
                        VAR_5) * 100);

        if (VAR_9 & VAR_3) {

            VAR_10 = 0;
        } else if (!VAR_10) {

            VAR_10 = VAR_2;
        } else {
            VAR_11 = 0;
        }

        VAR_8->vnic_min_rate[VAR_12] = VAR_10;
    }


    if (FUNC_1(VAR_7)) {
        VAR_8->flags.cmng_enables &= ~VAR_0;
        FUNC_0(VAR_7, VAR_1, "Fairness disabled (ETS)\n");
    } else if (VAR_11) {
        VAR_8->flags.cmng_enables &= ~VAR_0;
        FUNC_0(VAR_7, VAR_1,
              "Fariness disabled (all MIN values are zeroes)\n");
    } else {
        VAR_8->flags.cmng_enables |= VAR_0;
    }
}
