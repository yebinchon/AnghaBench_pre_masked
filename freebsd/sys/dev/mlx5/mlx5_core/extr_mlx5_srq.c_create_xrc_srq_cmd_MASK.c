
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_srq_attr {int pas; int user_index; } ;
struct mlx5_core_srq {int srqn; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mlx5_srq_attr*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (struct mlx5_core_dev*,void*,int,int *) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (void*,struct mlx5_srq_attr*) ;
 int VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_4,
         struct mlx5_core_srq *VAR_5,
         struct mlx5_srq_attr *VAR_6)
{
 void *VAR_7;
 void *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_6);
 VAR_11 = FUNC_2(VAR_1) + VAR_10;
 VAR_7 = FUNC_7(VAR_11);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_1, VAR_7, VAR_3);
 VAR_9 = FUNC_0(VAR_1, VAR_7, VAR_9);

 FUNC_8(VAR_8, VAR_6);
 FUNC_1(VAR_8, VAR_8, VAR_2, VAR_6->user_index);
 FUNC_5(VAR_9, VAR_6->pas, VAR_10);

 VAR_12 = FUNC_6(VAR_4, VAR_7, VAR_11, &VAR_5->srqn);
 if (VAR_12)
  goto out;

out:
 FUNC_4(VAR_7);
 return VAR_12;
}
