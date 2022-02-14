
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cqe {int dummy; } ;
struct mlx4_cq {int dummy; } ;
struct ibv_cq_ex {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_cq_ex*) ;
 int FUNC_1 (struct mlx4_cq*,struct mlx4_cqe**) ;
 int FUNC_2 (struct mlx4_cq*,struct mlx4_cqe*) ;
 struct mlx4_cq* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ibv_cq_ex *VAR_2)
{
 struct mlx4_cq *VAR_3 = FUNC_3(FUNC_0(VAR_2));
 struct mlx4_cqe *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5 == VAR_0)
  return VAR_1;

 return FUNC_2(VAR_3, VAR_4);
}
