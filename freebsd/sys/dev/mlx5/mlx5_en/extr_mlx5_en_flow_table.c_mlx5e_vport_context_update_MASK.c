
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_eth_addr_db {int promisc_enabled; int allmulti_enabled; } ;
struct mlx5e_priv {int mdev; struct mlx5e_eth_addr_db eth_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_2)
{
 struct mlx5e_eth_addr_db *VAR_3 = &VAR_2->eth_addr;

 FUNC_1(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->mdev, 0,
          VAR_3->allmulti_enabled,
          VAR_3->promisc_enabled);
}
