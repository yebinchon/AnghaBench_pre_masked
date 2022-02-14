
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int ctx; } ;
struct TYPE_12__ {int ctx; } ;
struct TYPE_11__ {int ctx; } ;
struct TYPE_14__ {TYPE_5__ port_stats_debug; TYPE_4__ pport; TYPE_3__ vport; } ;
struct TYPE_9__ {int tx_active_connections; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct mlx5e_priv {int gone; int wq; int cq_uar; int mdev; int pdn; int tdn; int mr; int sysctl_ctx; TYPE_6__ stats; scalar_t__ sysctl_debug; int media; int * pfil; int * vlan_detach; int * vlan_attach; int tstmp_clbr; int watchdog; struct ifnet* ifp; TYPE_2__ rl; } ;
struct TYPE_15__ {int num_comp_vectors; } ;
struct TYPE_16__ {TYPE_7__ eq_table; } ;
struct mlx5_core_dev {TYPE_8__ priv; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5e_priv*,int ) ;
 int VAR_1 ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct ifnet*,char*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct ifnet*) ;
 int FUNC_16 (struct mlx5e_priv*) ;
 int FUNC_17 (struct mlx5e_priv*,int ) ;
 int FUNC_18 (struct mlx5e_priv*,int ) ;
 int FUNC_19 (struct mlx5e_priv*) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_23(struct mlx5_core_dev *VAR_4, void *VAR_5)
{
 struct mlx5e_priv *VAR_6 = VAR_5;
 struct ifnet *VAR_7 = VAR_6->ifp;


 VAR_6->gone = 1;


 FUNC_20("W", VAR_1);
 FUNC_18(VAR_6, VAR_4->priv.eq_table.num_comp_vectors);


 FUNC_4(&VAR_6->watchdog);

 FUNC_4(&VAR_6->tstmp_clbr);

 if (VAR_6->vlan_attach != ((void*)0))
  FUNC_0(VAR_2, VAR_6->vlan_attach);
 if (VAR_6->vlan_detach != ((void*)0))
  FUNC_0(VAR_3, VAR_6->vlan_detach);


 FUNC_1(VAR_6);
 FUNC_15(VAR_7);
 FUNC_2(VAR_6);


 if (VAR_6->pfil != ((void*)0)) {
  FUNC_21(VAR_6->pfil);
  VAR_6->pfil = ((void*)0);
 }


 FUNC_9(&VAR_6->media);
 FUNC_5(VAR_7);





 FUNC_22(&VAR_6->stats.vport.ctx);
 FUNC_22(&VAR_6->stats.pport.ctx);
 if (VAR_6->sysctl_debug)
  FUNC_22(&VAR_6->stats.port_stats_debug.ctx);
 FUNC_22(&VAR_6->sysctl_ctx);

 FUNC_11(VAR_6->mdev, &VAR_6->mr);
 FUNC_12(VAR_6->mdev, VAR_6->tdn);
 FUNC_10(VAR_6->mdev, VAR_6->pdn);
 FUNC_14(VAR_6->mdev, &VAR_6->cq_uar);
 FUNC_16(VAR_6);
 FUNC_6(VAR_6->wq);
 FUNC_17(VAR_6, VAR_4->priv.eq_table.num_comp_vectors);
 FUNC_8(VAR_7);
 FUNC_7(VAR_6, VAR_0);
}
