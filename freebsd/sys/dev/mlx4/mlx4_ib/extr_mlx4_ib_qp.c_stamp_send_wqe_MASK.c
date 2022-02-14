
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_ctrl_seg {int fence_size; } ;
struct TYPE_2__ {unsigned int wqe_shift; int wqe_cnt; } ;
struct mlx4_ib_qp {int sq_max_wqes_per_wr; TYPE_1__ sq; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct mlx4_ib_qp*,int) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_qp *VAR_0, int VAR_1, int VAR_2)
{
 __be32 *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 void *VAR_7;
 __be32 VAR_8;
 struct mlx4_wqe_ctrl_seg *VAR_9;

 if (VAR_0->sq_max_wqes_per_wr > 1) {
  VAR_5 = FUNC_2(VAR_2, 1U << VAR_0->sq.wqe_shift);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += 64) {
   VAR_6 = (VAR_4 >> VAR_0->sq.wqe_shift) + VAR_1;
   VAR_8 = VAR_6 & VAR_0->sq.wqe_cnt ? FUNC_0(0x7fffffff) :
             FUNC_0(0xffffffff);
   VAR_7 = FUNC_1(VAR_0, VAR_6 & (VAR_0->sq.wqe_cnt - 1));
   VAR_3 = VAR_7 + (VAR_4 & ((1 << VAR_0->sq.wqe_shift) - 1));
   *VAR_3 = VAR_8;
  }
 } else {
  VAR_9 = VAR_7 = FUNC_1(VAR_0, VAR_1 & (VAR_0->sq.wqe_cnt - 1));
  VAR_5 = (VAR_9->fence_size & 0x3f) << 4;
  for (VAR_4 = 64; VAR_4 < VAR_5; VAR_4 += 64) {
   VAR_3 = VAR_7 + VAR_4;
   *VAR_3 = FUNC_0(0xffffffff);
  }
 }
}
