
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cqe {int dummy; } ;
struct mlx4_cq {int lock; int * cur_qp; } ;
struct ibv_poll_cq_attr {int comp_mask; } ;
struct ibv_cq_ex {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ibv_cq_ex*) ;
 int FUNC_1 (struct mlx4_cq*,struct mlx4_cqe**) ;
 int FUNC_2 (struct mlx4_cq*,struct mlx4_cqe*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_cq* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(struct ibv_cq_ex *VAR_3,
       struct ibv_poll_cq_attr *VAR_4,
       int VAR_5)
{
 struct mlx4_cq *VAR_6 = FUNC_5(FUNC_0(VAR_3));
 struct mlx4_cqe *VAR_7;
 int VAR_8;

 if (FUNC_6(VAR_4->comp_mask))
  return VAR_1;

 if (VAR_5)
  FUNC_3(&VAR_6->lock);

 VAR_6->cur_qp = ((void*)0);

 VAR_8 = FUNC_1(VAR_6, &VAR_7);
 if (VAR_8 == VAR_0) {
  if (VAR_5)
   FUNC_4(&VAR_6->lock);
  return VAR_2;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_5 && VAR_8)
  FUNC_4(&VAR_6->lock);

 return VAR_8;
}
