
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_umr_ctrl_seg {int flags; int mkey_mask; void* bsf_octowords; void* klm_octowords; } ;
struct TYPE_2__ {int offset; } ;
struct mlx5_umr_wr {TYPE_1__ target; int npages; } ;
struct ib_send_wr {int send_flags; int num_sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct mlx5_wqe_umr_ctrl_seg*,int ,int) ;
 struct mlx5_umr_wr* FUNC_8 (struct ib_send_wr*) ;

__attribute__((used)) static void FUNC_9(struct mlx5_wqe_umr_ctrl_seg *VAR_10,
    struct ib_send_wr *VAR_11)
{
 struct mlx5_umr_wr *VAR_12 = FUNC_8(VAR_11);

 FUNC_7(VAR_10, 0, sizeof(*VAR_10));

 if (VAR_11->send_flags & VAR_0)
  VAR_10->flags = VAR_6;
 else
  VAR_10->flags = VAR_7;

 if (!(VAR_11->send_flags & VAR_1)) {
  VAR_10->klm_octowords = FUNC_0(VAR_12->npages);
  if (VAR_11->send_flags & VAR_3) {
   VAR_10->mkey_mask = FUNC_4();
   VAR_10->bsf_octowords = FUNC_0(VAR_12->target.offset);
   VAR_10->flags |= VAR_9;
  }
  if (VAR_11->send_flags & VAR_5)
   VAR_10->mkey_mask |= FUNC_6();
  if (VAR_11->send_flags & VAR_2)
   VAR_10->mkey_mask |= FUNC_3();
  if (VAR_11->send_flags & VAR_4)
   VAR_10->mkey_mask |= FUNC_5();
  if (!VAR_10->mkey_mask)
   VAR_10->mkey_mask = FUNC_1();
 } else {
  VAR_10->mkey_mask = FUNC_2();
 }

 if (!VAR_11->num_sge)
  VAR_10->flags |= VAR_8;
}
