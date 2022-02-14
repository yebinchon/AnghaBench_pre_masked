
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* mf_config; } ;
struct TYPE_5__ {TYPE_1__ mf_info; } ;
struct bxe_softc {int flags; TYPE_2__ devinfo; } ;
struct TYPE_6__ {int config; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int FUNC_6 (struct bxe_softc*) ;
 size_t FUNC_7 (struct bxe_softc*) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void
FUNC_8(struct bxe_softc *VAR_6)
{
    int VAR_7 = (FUNC_2(VAR_6) ? 2 : 1);
    int VAR_8;
    int VAR_9;

    if (FUNC_1(VAR_6)) {
        return;
    }
    for (VAR_9 = VAR_4; VAR_9 < FUNC_4(VAR_6); VAR_9++) {
        VAR_8 = (VAR_7 * (2 * VAR_9 + FUNC_6(VAR_6)) + FUNC_5(VAR_6));
        if (VAR_8 >= VAR_2) {
            break;
        }
        VAR_6->devinfo.mf_info.mf_config[VAR_9] =
            FUNC_3(VAR_6, VAR_5[VAR_8].config);
    }

    if (VAR_6->devinfo.mf_info.mf_config[FUNC_7(VAR_6)] &
        VAR_3) {
        FUNC_0(VAR_6, VAR_1, "mf_cfg function disabled\n");
        VAR_6->flags |= VAR_0;
    } else {
        FUNC_0(VAR_6, VAR_1, "mf_cfg function enabled\n");
        VAR_6->flags &= ~VAR_0;
    }
}
