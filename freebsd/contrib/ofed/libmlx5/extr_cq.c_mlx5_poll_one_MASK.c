
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_srq {int dummy; } ;
struct mlx5_resource {int dummy; } ;
struct mlx5_cqe64 {int dummy; } ;
struct mlx5_cq {int dummy; } ;
struct ibv_wc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_cq*,struct mlx5_cqe64**,void**) ;
 int FUNC_1 (struct mlx5_cq*,struct mlx5_cqe64*,void*,struct mlx5_resource**,struct mlx5_srq**,struct ibv_wc*,int,int ) ;

__attribute__((used)) static inline int FUNC_2(struct mlx5_cq *VAR_1,
    struct mlx5_resource **VAR_2,
    struct mlx5_srq **VAR_3,
    struct ibv_wc *VAR_4, int VAR_5)
{
 struct mlx5_cqe64 *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, &VAR_6, &VAR_7);
 if (VAR_8 == VAR_0)
  return VAR_8;

 return FUNC_1(VAR_1, VAR_6, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, 0);
}
