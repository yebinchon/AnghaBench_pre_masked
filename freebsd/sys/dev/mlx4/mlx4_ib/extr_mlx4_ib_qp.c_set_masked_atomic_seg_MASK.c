
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_wqe_masked_atomic_seg {void* compare_mask; void* compare; void* swap_add_mask; void* swap_add; } ;
struct ib_atomic_wr {int compare_add_mask; int compare_add; int swap_mask; int swap; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_wqe_masked_atomic_seg *VAR_0,
      struct ib_atomic_wr *VAR_1)
{
 VAR_0->swap_add = FUNC_0(VAR_1->swap);
 VAR_0->swap_add_mask = FUNC_0(VAR_1->swap_mask);
 VAR_0->compare = FUNC_0(VAR_1->compare_add);
 VAR_0->compare_mask = FUNC_0(VAR_1->compare_add_mask);
}
