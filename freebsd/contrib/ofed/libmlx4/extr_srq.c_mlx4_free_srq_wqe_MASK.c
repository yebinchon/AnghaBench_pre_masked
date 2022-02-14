
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_srq {int tail; int lock; } ;


 struct mlx4_wqe_srq_next_seg* FUNC_0 (struct mlx4_srq*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_srq *VAR_0, int VAR_1)
{
 struct mlx4_wqe_srq_next_seg *VAR_2;

 FUNC_2(&VAR_0->lock);

 VAR_2 = FUNC_0(VAR_0, VAR_0->tail);
 VAR_2->next_wqe_index = FUNC_1(VAR_1);
 VAR_0->tail = VAR_1;

 FUNC_3(&VAR_0->lock);
}
