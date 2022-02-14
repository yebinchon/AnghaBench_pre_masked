
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_mtx; } ;
struct bxe_softc {int mcast_mtx; int stats_mtx; int print_mtx; int fwmb_mtx; TYPE_1__ port; int dmae_mtx; int sp_mtx; int core_mtx; int core_sx; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_0)
{



    if (FUNC_1(&VAR_0->core_mtx)) {
        FUNC_0(&VAR_0->core_mtx);
    }


    if (FUNC_1(&VAR_0->sp_mtx)) {
        FUNC_0(&VAR_0->sp_mtx);
    }

    if (FUNC_1(&VAR_0->dmae_mtx)) {
        FUNC_0(&VAR_0->dmae_mtx);
    }

    if (FUNC_1(&VAR_0->port.phy_mtx)) {
        FUNC_0(&VAR_0->port.phy_mtx);
    }

    if (FUNC_1(&VAR_0->fwmb_mtx)) {
        FUNC_0(&VAR_0->fwmb_mtx);
    }

    if (FUNC_1(&VAR_0->print_mtx)) {
        FUNC_0(&VAR_0->print_mtx);
    }

    if (FUNC_1(&VAR_0->stats_mtx)) {
        FUNC_0(&VAR_0->stats_mtx);
    }

    if (FUNC_1(&VAR_0->mcast_mtx)) {
        FUNC_0(&VAR_0->mcast_mtx);
    }
}
