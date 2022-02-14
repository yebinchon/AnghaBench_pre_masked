
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_eth_addr_hash_node {int dummy; } ;
struct mlx5e_eth_addr_hash_head {int dummy; } ;


 struct mlx5e_eth_addr_hash_node* FUNC_0 (struct mlx5e_eth_addr_hash_head*) ;
 int FUNC_1 (struct mlx5e_eth_addr_hash_node*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct mlx5e_eth_addr_hash_node *
FUNC_2(struct mlx5e_eth_addr_hash_head *VAR_1)
{
 struct mlx5e_eth_addr_hash_node *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, VAR_0);
 return (VAR_2);
}
