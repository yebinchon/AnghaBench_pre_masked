
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_cqe64 {int op_own; } ;
struct TYPE_2__ {int cqe; } ;
struct mlx5_cq {int cqe_sz; TYPE_1__ ibv_cq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct mlx5_cq*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlx5_cqe64*) ;

__attribute__((used)) static void *FUNC_3(struct mlx5_cq *VAR_2, int VAR_3)
{
 void *VAR_4 = FUNC_0(VAR_2, VAR_3 & VAR_2->ibv_cq.cqe);
 struct mlx5_cqe64 *VAR_5;

 VAR_5 = (VAR_2->cqe_sz == 64) ? VAR_4 : VAR_4 + 64;

 if (FUNC_1(FUNC_2(VAR_5) != VAR_0) &&
     !((VAR_5->op_own & VAR_1) ^ !!(VAR_3 & (VAR_2->ibv_cq.cqe + 1)))) {
  return VAR_4;
 } else {
  return ((void*)0);
 }
}
