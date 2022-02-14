
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp {int dummy; } ;
struct mlx4_cq {int lock; } ;
struct ibv_wc {int dummy; } ;
struct ibv_cq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_cq*,struct mlx4_qp**,struct ibv_wc*) ;
 int FUNC_1 (struct mlx4_cq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx4_cq* FUNC_4 (struct ibv_cq*) ;

int FUNC_5(struct ibv_cq *VAR_2, int VAR_3, struct ibv_wc *VAR_4)
{
 struct mlx4_cq *VAR_5 = FUNC_4(VAR_2);
 struct mlx4_qp *VAR_6 = ((void*)0);
 int VAR_7;
 int VAR_8 = VAR_0;

 FUNC_2(&VAR_5->lock);

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  VAR_8 = FUNC_0(VAR_5, &VAR_6, VAR_4 + VAR_7);
  if (VAR_8 != VAR_0)
   break;
 }

 if (VAR_7 || VAR_8 == VAR_1)
  FUNC_1(VAR_5);

 FUNC_3(&VAR_5->lock);

 return VAR_8 == VAR_1 ? VAR_8 : VAR_7;
}
