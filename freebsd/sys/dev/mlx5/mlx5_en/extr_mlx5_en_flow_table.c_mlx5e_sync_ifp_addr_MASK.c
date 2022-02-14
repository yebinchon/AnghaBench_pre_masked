
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_dl {int dummy; } ;
struct TYPE_6__ {int if_mc; int if_uc; } ;
struct mlx5e_priv {TYPE_3__ eth_addr; int mdev; struct ifnet* ifp; } ;
struct TYPE_5__ {int addr; } ;
struct mlx5e_eth_addr_hash_node {unsigned int mpfs_index; TYPE_2__ ai; int action; } ;
struct mlx5e_eth_addr_hash_head {int dummy; } ;
struct mlx5e_copy_addr_ctx {int success; struct mlx5e_eth_addr_hash_head* fill; struct mlx5e_eth_addr_hash_head* free; } ;
struct ifnet {TYPE_1__* if_addr; } ;
struct TYPE_4__ {scalar_t__ ifa_addr; } ;


 int FUNC_0 (struct mlx5e_eth_addr_hash_head*) ;
 int FUNC_1 (struct mlx5e_eth_addr_hash_head*,struct mlx5e_eth_addr_hash_node*,int ) ;
 int FUNC_2 (struct sockaddr_dl*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mlx5e_eth_addr_hash_node*,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct ifnet*,int ,struct mlx5e_copy_addr_ctx*) ;
 int FUNC_8 (struct ifnet*,int ,struct mlx5e_copy_addr_ctx*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 struct mlx5e_eth_addr_hash_node* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int ,unsigned int*,int ) ;
 scalar_t__ FUNC_13 (int ,struct mlx5e_eth_addr_hash_node*) ;
 int VAR_5 ;
 struct mlx5e_eth_addr_hash_node* FUNC_14 (struct mlx5e_eth_addr_hash_head*,struct mlx5e_eth_addr_hash_head*) ;
 struct mlx5e_eth_addr_hash_node* FUNC_15 (struct mlx5e_eth_addr_hash_head*) ;

__attribute__((used)) static void
FUNC_16(struct mlx5e_priv *VAR_6)
{
 struct mlx5e_copy_addr_ctx VAR_7;
 struct mlx5e_eth_addr_hash_head VAR_8;
 struct mlx5e_eth_addr_hash_head VAR_9;
 struct mlx5e_eth_addr_hash_head VAR_10;
 struct mlx5e_eth_addr_hash_node *VAR_11;
 struct ifnet *VAR_12 = VAR_6->ifp;
 size_t VAR_13;
 size_t VAR_14;

 FUNC_4(VAR_6);

retry:
 FUNC_0(&VAR_8);
 FUNC_0(&VAR_9);
 FUNC_0(&VAR_10);
 VAR_14 = 1 + FUNC_9(VAR_12) + FUNC_10(VAR_12);


 for (VAR_13 = 0; VAR_13 != VAR_14; VAR_13++) {
  VAR_11 = FUNC_11(sizeof(*VAR_11), VAR_1, VAR_2 | VAR_3);
  VAR_11->action = VAR_0;
  VAR_11->mpfs_index = -1U;
  FUNC_1(&VAR_8, VAR_11, VAR_4);
 }

 VAR_11 = FUNC_14(&VAR_8, &VAR_9);
 FUNC_3(VAR_11 != ((void*)0));

 FUNC_5(VAR_11->ai.addr,
     FUNC_2((struct sockaddr_dl *)(VAR_12->if_addr->ifa_addr)));

 VAR_7.free = &VAR_8;
 VAR_7.fill = &VAR_9;
 VAR_7.success = 1;
 FUNC_7(VAR_12, VAR_5, &VAR_7);
 if (VAR_7.success == 0)
  goto cleanup;

 VAR_7.fill = &VAR_10;
 FUNC_8(VAR_12, VAR_5, &VAR_7);
 if (VAR_7.success == 0)
  goto cleanup;



 while ((VAR_11 = FUNC_15(&VAR_9)) != ((void*)0)) {
  if (FUNC_13(VAR_6->eth_addr.if_uc, VAR_11) == 0)
   continue;
  if (VAR_11->mpfs_index == -1U)
   FUNC_12(VAR_6->mdev, &VAR_11->mpfs_index, VAR_11->ai.addr);
 }



 while ((VAR_11 = FUNC_15(&VAR_10)) != ((void*)0)) {
  if (FUNC_13(VAR_6->eth_addr.if_mc, VAR_11) == 0)
   continue;
 }

cleanup:
 while ((VAR_11 = FUNC_15(&VAR_9)) != ((void*)0))
  FUNC_6(VAR_11, VAR_1);
 while ((VAR_11 = FUNC_15(&VAR_10)) != ((void*)0))
  FUNC_6(VAR_11, VAR_1);
 while ((VAR_11 = FUNC_15(&VAR_8)) != ((void*)0))
  FUNC_6(VAR_11, VAR_1);

 if (VAR_7.success == 0)
  goto retry;
}
