
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_pauseframe_control; scalar_t__ rx_pauseframe_control; } ;
struct mlx5e_priv {int media_active_last; TYPE_1__ params; int media_status_last; } ;
struct ifnet {struct mlx5e_priv* if_softc; } ;
struct ifmediareq {int ifm_active; int ifm_status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_2, struct ifmediareq *VAR_3)
{
 struct mlx5e_priv *VAR_4 = VAR_2->if_softc;

 VAR_3->ifm_status = VAR_4->media_status_last;
 VAR_3->ifm_active = VAR_4->media_active_last |
     (VAR_4->params.rx_pauseframe_control ? VAR_0 : 0) |
     (VAR_4->params.tx_pauseframe_control ? VAR_1 : 0);

}
