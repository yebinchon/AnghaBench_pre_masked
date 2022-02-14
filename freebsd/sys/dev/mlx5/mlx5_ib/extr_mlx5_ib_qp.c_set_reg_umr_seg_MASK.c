
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_wqe_umr_ctrl_seg {int mkey_mask; int klm_octowords; int flags; } ;
struct mlx5_ib_mr {int ndescs; scalar_t__ access_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx5_wqe_umr_ctrl_seg*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mlx5_wqe_umr_ctrl_seg *VAR_2,
    struct mlx5_ib_mr *VAR_3)
{
 int VAR_4 = VAR_3->ndescs;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 if (VAR_3->access_mode == VAR_0)

  VAR_4 *= 2;

 VAR_2->flags = VAR_1;
 VAR_2->klm_octowords = FUNC_1(VAR_4);
 VAR_2->mkey_mask = FUNC_0();
}
