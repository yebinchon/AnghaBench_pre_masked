
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct mlx5e_eth_addr_hash_node {TYPE_1__ ai; } ;
struct mlx5e_copy_addr_ctx {int success; int fill; int free; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ) ;
 struct mlx5e_eth_addr_hash_node* FUNC_2 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct mlx5e_copy_addr_ctx *VAR_3 = VAR_0;
 struct mlx5e_eth_addr_hash_node *VAR_4;

 VAR_4 = FUNC_2(VAR_3->free, VAR_3->fill);
 if (VAR_4 == ((void*)0)) {
  VAR_3->success = 0;
  return (0);
 }
 FUNC_1(VAR_4->ai.addr, FUNC_0(VAR_1));

 return (1);
}
