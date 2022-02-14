
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp {int dummy; } ;
struct mlx4_cqe {int dummy; } ;
struct mlx4_cq {int dummy; } ;
struct ibv_wc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_cq*,struct mlx4_cqe**) ;
 int FUNC_1 (struct mlx4_cq*,struct mlx4_cqe*,struct mlx4_qp**,struct ibv_wc*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct mlx4_cq *VAR_1,
    struct mlx4_qp **VAR_2,
    struct ibv_wc *VAR_3)
{
 struct mlx4_cqe *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_5 == VAR_0)
  return VAR_5;

 return FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3, 0);
}
