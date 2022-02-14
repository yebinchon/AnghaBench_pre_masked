
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_umr_ctrl_seg {int flags; int mkey_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_wqe_umr_ctrl_seg*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mlx5_wqe_umr_ctrl_seg *VAR_1)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->mkey_mask = FUNC_0(VAR_0);
 VAR_1->flags = 1 << 7;
}
