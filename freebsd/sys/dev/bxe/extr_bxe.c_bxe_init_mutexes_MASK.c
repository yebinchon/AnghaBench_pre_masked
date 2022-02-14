
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_mtx_name; int phy_mtx; } ;
struct bxe_softc {int unit; int mcast_mtx_name; int mcast_mtx; int stats_mtx_name; int stats_mtx; int print_mtx_name; int print_mtx; int fwmb_mtx_name; int fwmb_mtx; TYPE_1__ port; int dmae_mtx_name; int dmae_mtx; int sp_mtx_name; int sp_mtx; int core_mtx_name; int core_mtx; int core_sx_name; int core_sx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_1)
{





    FUNC_1(VAR_1->core_mtx_name, sizeof(VAR_1->core_mtx_name),
             "bxe%d_core_lock", VAR_1->unit);
    FUNC_0(&VAR_1->core_mtx, VAR_1->core_mtx_name, ((void*)0), VAR_0);


    FUNC_1(VAR_1->sp_mtx_name, sizeof(VAR_1->sp_mtx_name),
             "bxe%d_sp_lock", VAR_1->unit);
    FUNC_0(&VAR_1->sp_mtx, VAR_1->sp_mtx_name, ((void*)0), VAR_0);

    FUNC_1(VAR_1->dmae_mtx_name, sizeof(VAR_1->dmae_mtx_name),
             "bxe%d_dmae_lock", VAR_1->unit);
    FUNC_0(&VAR_1->dmae_mtx, VAR_1->dmae_mtx_name, ((void*)0), VAR_0);

    FUNC_1(VAR_1->port.phy_mtx_name, sizeof(VAR_1->port.phy_mtx_name),
             "bxe%d_phy_lock", VAR_1->unit);
    FUNC_0(&VAR_1->port.phy_mtx, VAR_1->port.phy_mtx_name, ((void*)0), VAR_0);

    FUNC_1(VAR_1->fwmb_mtx_name, sizeof(VAR_1->fwmb_mtx_name),
             "bxe%d_fwmb_lock", VAR_1->unit);
    FUNC_0(&VAR_1->fwmb_mtx, VAR_1->fwmb_mtx_name, ((void*)0), VAR_0);

    FUNC_1(VAR_1->print_mtx_name, sizeof(VAR_1->print_mtx_name),
             "bxe%d_print_lock", VAR_1->unit);
    FUNC_0(&(VAR_1->print_mtx), VAR_1->print_mtx_name, ((void*)0), VAR_0);

    FUNC_1(VAR_1->stats_mtx_name, sizeof(VAR_1->stats_mtx_name),
             "bxe%d_stats_lock", VAR_1->unit);
    FUNC_0(&(VAR_1->stats_mtx), VAR_1->stats_mtx_name, ((void*)0), VAR_0);

    FUNC_1(VAR_1->mcast_mtx_name, sizeof(VAR_1->mcast_mtx_name),
             "bxe%d_mcast_lock", VAR_1->unit);
    FUNC_0(&(VAR_1->mcast_mtx), VAR_1->mcast_mtx_name, ((void*)0), VAR_0);
}
