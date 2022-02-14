
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cqe {int owner_sr_opcode; } ;
struct TYPE_2__ {int cqe; } ;
struct mlx4_cq {int cqe_size; int cons_index; TYPE_1__ ibv_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_cqe* FUNC_0 (struct mlx4_cq*,int) ;
 int FUNC_1 (void*,struct mlx4_cqe*,int) ;

void FUNC_2(struct mlx4_cq *VAR_3, void *VAR_4, int VAR_5)
{
 struct mlx4_cqe *VAR_6;
 int VAR_7;
 int VAR_8 = VAR_3->cqe_size == 64 ? 1 : 0;

 VAR_7 = VAR_3->cons_index;
 VAR_6 = FUNC_0(VAR_3, (VAR_7 & VAR_5));
 VAR_6 += VAR_8;

 while ((VAR_6->owner_sr_opcode & VAR_0) != VAR_1) {
  VAR_6->owner_sr_opcode = (VAR_6->owner_sr_opcode & ~VAR_2) |
   (((VAR_7 + 1) & (VAR_3->ibv_cq.cqe + 1)) ? VAR_2 : 0);
  FUNC_1(VAR_4 + ((VAR_7 + 1) & VAR_3->ibv_cq.cqe) * VAR_3->cqe_size,
         VAR_6 - VAR_8, VAR_3->cqe_size);
  ++VAR_7;
  VAR_6 = FUNC_0(VAR_3, (VAR_7 & VAR_5));
  VAR_6 += VAR_8;
 }

 ++VAR_3->cons_index;
}
