
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_wqe_umr_ctrl_seg {int flags; int mkey_mask; int bsf_octowords; int klm_octowords; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5_wqe_umr_ctrl_seg*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mlx5_wqe_umr_ctrl_seg *VAR_3,
    u32 VAR_4)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->flags = VAR_1 | VAR_0;
 VAR_3->klm_octowords = FUNC_1(VAR_4);
 VAR_3->bsf_octowords = FUNC_0(VAR_2);
 VAR_3->mkey_mask = FUNC_3();
}
