
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* mf_config; } ;
struct TYPE_4__ {TYPE_1__ mf_info; } ;
struct bxe_softc {int flags; TYPE_2__ devinfo; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bxe_softc *VAR_7,
              uint32_t VAR_8)
{
    FUNC_0(VAR_7, VAR_1, "dcc_event 0x%08x\n", VAR_8);

    if (VAR_8 & VAR_5) {





        if (VAR_7->devinfo.mf_info.mf_config[FUNC_1(VAR_7)] & VAR_6) {
            FUNC_0(VAR_7, VAR_1, "mf_cfg function disabled\n");
            VAR_7->flags |= VAR_0;
            FUNC_3(VAR_7);
        } else {
            FUNC_0(VAR_7, VAR_1, "mf_cfg function enabled\n");
            VAR_7->flags &= ~VAR_0;
            FUNC_4(VAR_7);
        }
        VAR_8 &= ~VAR_5;
    }

    if (VAR_8 & VAR_4) {
        FUNC_2(VAR_7);
        VAR_8 &= ~VAR_4;
    }


    if (VAR_8)
        FUNC_5(VAR_7, VAR_2, 0);
    else
        FUNC_5(VAR_7, VAR_3, 0);
}
