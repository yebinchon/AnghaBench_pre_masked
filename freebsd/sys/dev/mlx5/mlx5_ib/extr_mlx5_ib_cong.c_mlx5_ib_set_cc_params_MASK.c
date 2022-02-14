
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
typedef enum mlx5_ib_cong_node_type { ____Placeholder_mlx5_ib_cong_node_type } mlx5_ib_cong_node_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*,int,int ,int*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_8(struct mlx5_ib_dev *VAR_9, u32 VAR_10, u64 VAR_11)
{
 int VAR_12 = FUNC_2(VAR_7);
 enum mlx5_ib_cong_node_type VAR_13;
 u32 VAR_14 = 0;
 void *VAR_15;
 void *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_4(VAR_12, VAR_1);
 if (!VAR_16)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_16, VAR_8,
   VAR_2);

 VAR_13 = FUNC_6(VAR_10);
 FUNC_1(VAR_7, VAR_16, VAR_3, VAR_13);

 VAR_15 = FUNC_0(VAR_7, VAR_16, VAR_4);
 FUNC_7(VAR_15, VAR_10, VAR_11, &VAR_14);

 VAR_15 = FUNC_0(VAR_7, VAR_16, VAR_5);
 FUNC_1(VAR_6, VAR_15, VAR_6,
   VAR_14);

 VAR_17 = FUNC_5(VAR_9->mdev, VAR_16, VAR_12);
 FUNC_3(VAR_16);

 return VAR_17;
}
