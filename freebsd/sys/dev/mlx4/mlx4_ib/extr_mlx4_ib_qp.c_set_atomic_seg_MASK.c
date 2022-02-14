
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqe_atomic_seg {void* compare; void* swap_add; } ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct ib_atomic_wr {int compare_add; int compare_add_mask; TYPE_1__ wr; int swap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_wqe_atomic_seg *VAR_2,
  struct ib_atomic_wr *VAR_3)
{
 if (VAR_3->wr.opcode == VAR_0) {
  VAR_2->swap_add = FUNC_0(VAR_3->swap);
  VAR_2->compare = FUNC_0(VAR_3->compare_add);
 } else if (VAR_3->wr.opcode == VAR_1) {
  VAR_2->swap_add = FUNC_0(VAR_3->compare_add);
  VAR_2->compare = FUNC_0(VAR_3->compare_add_mask);
 } else {
  VAR_2->swap_add = FUNC_0(VAR_3->compare_add);
  VAR_2->compare = 0;
 }

}
