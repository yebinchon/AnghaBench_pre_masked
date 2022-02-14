
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int mdev; } ;
struct mlx5e_eth_addr_hash_node {int action; unsigned int mpfs_index; int ai; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct mlx5e_priv*,int *,int ) ;
 int FUNC_2 (struct mlx5e_priv*,int *) ;
 int FUNC_3 (struct mlx5e_eth_addr_hash_node*) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_priv *VAR_2,
    struct mlx5e_eth_addr_hash_node *VAR_3)
{
 switch (VAR_3->action) {
 case 129:
  FUNC_1(VAR_2, &VAR_3->ai, VAR_1);
  VAR_3->action = VAR_0;
  break;

 case 128:
  FUNC_2(VAR_2, &VAR_3->ai);
  if (VAR_3->mpfs_index != -1U)
   FUNC_0(VAR_2->mdev, VAR_3->mpfs_index);
  FUNC_3(VAR_3);
  break;

 default:
  break;
 }
}
