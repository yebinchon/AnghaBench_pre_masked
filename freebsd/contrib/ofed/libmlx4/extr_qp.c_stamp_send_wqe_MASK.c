
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mlx4_wqe_ctrl_seg {int fence_size; } ;
struct mlx4_qp {int dummy; } ;


 int* FUNC_0 (struct mlx4_qp*,int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_qp *VAR_0, int VAR_1)
{
 uint32_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
 int VAR_3;
 int VAR_4 = (((struct mlx4_wqe_ctrl_seg *)VAR_2)->fence_size & 0x3f) << 2;

 for (VAR_3 = 16; VAR_3 < VAR_4; VAR_3 += 16)
  VAR_2[VAR_3] = 0xffffffff;
}
