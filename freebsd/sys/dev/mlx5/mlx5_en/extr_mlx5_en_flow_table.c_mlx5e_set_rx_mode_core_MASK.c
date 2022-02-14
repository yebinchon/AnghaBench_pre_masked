
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filter_disabled; } ;
struct TYPE_5__ {int addr; } ;
struct mlx5e_eth_addr_db {int promisc_enabled; int allmulti_enabled; int broadcast_enabled; TYPE_2__ promisc; TYPE_2__ allmulti; TYPE_2__ broadcast; } ;
struct mlx5e_priv {TYPE_1__ vlan; struct ifnet* ifp; struct mlx5e_eth_addr_db eth_addr; int state; } ;
struct ifnet {int if_flags; int if_broadcastaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*,TYPE_2__*,int ) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*,TYPE_2__*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (int ,int *) ;

void
FUNC_8(struct mlx5e_priv *VAR_6)
{
 struct mlx5e_eth_addr_db *VAR_7 = &VAR_6->eth_addr;
 struct ifnet *VAR_8 = VAR_6->ifp;

 bool VAR_9 = FUNC_7(VAR_5, &VAR_6->state);
 bool VAR_10 = VAR_9 && (VAR_8->if_flags & VAR_1);
 bool VAR_11 = VAR_9 && (VAR_8->if_flags & VAR_0);
 bool VAR_12 = VAR_9;

 bool VAR_13 = !VAR_7->promisc_enabled && VAR_10;
 bool VAR_14 = VAR_7->promisc_enabled && !VAR_10;
 bool VAR_15 = !VAR_7->allmulti_enabled && VAR_11;
 bool VAR_16 = VAR_7->allmulti_enabled && !VAR_11;
 bool VAR_17 = !VAR_7->broadcast_enabled && VAR_12;
 bool VAR_18 = VAR_7->broadcast_enabled && !VAR_12;


 FUNC_0(VAR_6->eth_addr.broadcast.addr,
     VAR_6->ifp->if_broadcastaddr);

 if (VAR_13) {
  FUNC_2(VAR_6, &VAR_7->promisc, VAR_4);
  if (!VAR_6->vlan.filter_disabled)
   FUNC_1(VAR_6);
 }
 if (VAR_15)
  FUNC_2(VAR_6, &VAR_7->allmulti, VAR_2);
 if (VAR_17)
  FUNC_2(VAR_6, &VAR_7->broadcast, VAR_3);

 FUNC_5(VAR_6);

 if (VAR_18)
  FUNC_4(VAR_6, &VAR_7->broadcast);
 if (VAR_16)
  FUNC_4(VAR_6, &VAR_7->allmulti);
 if (VAR_14) {
  if (!VAR_6->vlan.filter_disabled)
   FUNC_3(VAR_6);
  FUNC_4(VAR_6, &VAR_7->promisc);
 }

 VAR_7->promisc_enabled = VAR_10;
 VAR_7->allmulti_enabled = VAR_11;
 VAR_7->broadcast_enabled = VAR_12;

 FUNC_6(VAR_6);
}
