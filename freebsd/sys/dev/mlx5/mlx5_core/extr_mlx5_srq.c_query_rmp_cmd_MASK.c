
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u32 ;
struct mlx5_srq_attr {int flags; } ;
struct mlx5_core_srq {int srqn; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,struct mlx5_srq_attr*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,void*) ;
 void* FUNC_6 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_7, struct mlx5_core_srq *VAR_8,
    struct mlx5_srq_attr *VAR_9)
{
 u32 *VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(FUNC_2(VAR_3));
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_5(VAR_7, VAR_8->srqn, VAR_10);
 if (VAR_12)
  goto out;

 VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_4);
 FUNC_3(FUNC_0(VAR_11, VAR_11, VAR_6), VAR_9);
 if (FUNC_1(VAR_11, VAR_11, VAR_5) != VAR_1)
  VAR_9->flags |= VAR_2;

out:
 FUNC_4(VAR_10);
 return 0;
}
