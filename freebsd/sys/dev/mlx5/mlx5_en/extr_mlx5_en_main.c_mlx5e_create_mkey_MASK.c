
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; struct ifnet* ifp; } ;
struct mlx5_core_mr {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_core_mr*,int*,int) ;
 int FUNC_5 (struct ifnet*,char*,...) ;
 int* FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(struct mlx5e_priv *VAR_10, u32 VAR_11,
    struct mlx5_core_mr *VAR_12)
{
 struct ifnet *VAR_13 = VAR_10->ifp;
 struct mlx5_core_dev *VAR_14 = VAR_10->mdev;
 int VAR_15 = FUNC_2(VAR_3);
 void *VAR_16;
 u32 *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_6(VAR_15);
 if (VAR_17 == ((void*)0)) {
  FUNC_5(VAR_13, "failed to allocate inbox\n");
  return (-VAR_0);
 }

 VAR_16 = FUNC_0(VAR_3, VAR_17, VAR_7);
 FUNC_1(VAR_16, VAR_16, VAR_2, VAR_1);
 FUNC_1(VAR_16, VAR_16, VAR_6, 1);
 FUNC_1(VAR_16, VAR_16, VAR_5, 1);

 FUNC_1(VAR_16, VAR_16, VAR_8, VAR_11);
 FUNC_1(VAR_16, VAR_16, VAR_4, 1);
 FUNC_1(VAR_16, VAR_16, VAR_9, 0xffffff);

 VAR_18 = FUNC_4(VAR_14, VAR_12, VAR_17, VAR_15);
 if (VAR_18)
  FUNC_5(VAR_13, "mlx5_core_create_mkey failed, %d\n",
      VAR_18);

 FUNC_3(VAR_17);
 return (VAR_18);
}
