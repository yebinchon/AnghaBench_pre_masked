
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mlx5_srq {int dummy; } ;
struct mlx5_cqe64 {int op_own; } ;
struct TYPE_3__ {int cqe; int context; } ;
struct mlx5_cq {int flags; int cons_index; int cqe_sz; TYPE_1__ ibv_cq; } ;
struct TYPE_4__ {int cqe_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5_cqe64*,int,struct mlx5_srq*,int) ;
 void* FUNC_1 (struct mlx5_cq*,int) ;
 scalar_t__ FUNC_2 (struct mlx5_cq*,int) ;
 int FUNC_3 (void*,void*,int) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mlx5_cq*) ;

void FUNC_7(struct mlx5_cq *VAR_2, uint32_t VAR_3, struct mlx5_srq *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = 0;
 struct mlx5_cqe64 *VAR_7, *VAR_8;
 void *VAR_9, *VAR_10;
 uint8_t VAR_11;
 int VAR_12;

 if (!VAR_2 || VAR_2->flags & VAR_1)
  return;
 for (VAR_5 = VAR_2->cons_index; FUNC_2(VAR_2, VAR_5); ++VAR_5)
  if (VAR_5 == VAR_2->cons_index + VAR_2->ibv_cq.cqe)
   break;





 VAR_12 = (FUNC_4(VAR_2->ibv_cq.context))->cqe_version;
 while ((int) --VAR_5 - (int) VAR_2->cons_index >= 0) {
  VAR_9 = FUNC_1(VAR_2, VAR_5 & VAR_2->ibv_cq.cqe);
  VAR_7 = (VAR_2->cqe_sz == 64) ? VAR_9 : VAR_9 + 64;
  if (FUNC_0(VAR_7, VAR_3, VAR_4, VAR_12)) {
   ++VAR_6;
  } else if (VAR_6) {
   VAR_10 = FUNC_1(VAR_2, (VAR_5 + VAR_6) & VAR_2->ibv_cq.cqe);
   VAR_8 = (VAR_2->cqe_sz == 64) ? VAR_10 : VAR_10 + 64;
   VAR_11 = VAR_8->op_own & VAR_0;
   FUNC_3(VAR_10, VAR_9, VAR_2->cqe_sz);
   VAR_8->op_own = VAR_11 |
    (VAR_8->op_own & ~VAR_0);
  }
 }

 if (VAR_6) {
  VAR_2->cons_index += VAR_6;




  FUNC_5();
  FUNC_6(VAR_2);
 }
}
