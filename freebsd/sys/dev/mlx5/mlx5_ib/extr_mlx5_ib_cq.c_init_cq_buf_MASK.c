
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_cq_buf {int nent; int cqe_size; } ;
struct mlx5_ib_cq {int dummy; } ;
struct mlx5_cqe64 {int op_own; } ;


 int VAR_0 ;
 void* FUNC_0 (struct mlx5_ib_cq_buf*,int,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_cq *VAR_1, struct mlx5_ib_cq_buf *VAR_2)
{
 int VAR_3;
 void *VAR_4;
 struct mlx5_cqe64 *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->nent; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_2->cqe_size);
  VAR_5 = VAR_2->cqe_size == 64 ? VAR_4 : VAR_4 + 64;
  VAR_5->op_own = VAR_0 << 4;
 }
}
