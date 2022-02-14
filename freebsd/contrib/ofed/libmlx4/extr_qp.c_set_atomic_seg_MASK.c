
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_wqe_atomic_seg {void* compare; void* swap_add; } ;
struct TYPE_3__ {int compare_add; int swap; } ;
struct TYPE_4__ {TYPE_1__ atomic; } ;
struct ibv_send_wr {scalar_t__ opcode; TYPE_2__ wr; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_wqe_atomic_seg *VAR_1, struct ibv_send_wr *VAR_2)
{
 if (VAR_2->opcode == VAR_0) {
  VAR_1->swap_add = FUNC_0(VAR_2->wr.atomic.swap);
  VAR_1->compare = FUNC_0(VAR_2->wr.atomic.compare_add);
 } else {
  VAR_1->swap_add = FUNC_0(VAR_2->wr.atomic.compare_add);
  VAR_1->compare = 0;
 }

}
