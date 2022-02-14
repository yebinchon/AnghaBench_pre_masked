
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int active_vlans; } ;
struct mlx5e_priv {int state; TYPE_1__ vlan; struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlx5e_priv*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void
FUNC_5(void *VAR_2, struct ifnet *VAR_3, u16 VAR_4)
{
 struct mlx5e_priv *VAR_5 = VAR_2;

 if (VAR_3 != VAR_5->ifp)
  return;

 FUNC_0(VAR_5);
 FUNC_2(VAR_4, VAR_5->vlan.active_vlans);
 if (FUNC_4(VAR_0, &VAR_5->state))
  FUNC_3(VAR_5, VAR_1, VAR_4);
 FUNC_1(VAR_5);
}
