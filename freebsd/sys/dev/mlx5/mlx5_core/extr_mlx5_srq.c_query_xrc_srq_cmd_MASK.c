
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_srq_attr {int flags; } ;
struct mlx5_core_srq {int srqn; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (void*,struct mlx5_srq_attr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,int *) ;
 int * FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_6,
        struct mlx5_core_srq *VAR_7,
        struct mlx5_srq_attr *VAR_8)
{
 u32 *VAR_9;
 void *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(FUNC_2(VAR_3));
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_6, VAR_7->srqn, VAR_9);
 if (VAR_11)
  goto out;

 VAR_10 = FUNC_0(VAR_3, VAR_9,
    VAR_5);
 FUNC_3(VAR_10, VAR_8);
 if (FUNC_1(VAR_10, VAR_10, VAR_4) != VAR_2)
  VAR_8->flags |= VAR_1;

out:
 FUNC_4(VAR_9);
 return VAR_11;
}
