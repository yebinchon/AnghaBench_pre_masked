
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mlx5_wqe_atomic_seg {void* swap_add; void* compare; } ;
typedef enum ibv_wr_opcode { ____Placeholder_ibv_wr_opcode } ibv_wr_opcode ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_wqe_atomic_seg *VAR_1,
      enum ibv_wr_opcode VAR_2,
      uint64_t VAR_3,
      uint64_t VAR_4)
{
 if (VAR_2 == VAR_0) {
  VAR_1->swap_add = FUNC_0(VAR_3);
  VAR_1->compare = FUNC_0(VAR_4);
 } else {
  VAR_1->swap_add = FUNC_0(VAR_4);
 }
}
