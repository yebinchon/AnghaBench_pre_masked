
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct mlx5_ib_gsi_wr {int completed; int send_flags; int wc; } ;
struct TYPE_3__ {size_t max_send_wr; } ;
struct TYPE_4__ {struct ib_cq* send_cq; } ;
struct mlx5_ib_gsi_qp {size_t outstanding_ci; size_t outstanding_pi; scalar_t__ sq_sig_type; TYPE_1__ cap; struct mlx5_ib_gsi_wr* outstanding_wrs; TYPE_2__ ibqp; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_cq*,int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5_ib_gsi_qp *VAR_2)
{
 struct ib_cq *VAR_3 = VAR_2->ibqp.send_cq;
 struct mlx5_ib_gsi_wr *VAR_4;
 u32 VAR_5;

 for (VAR_5 = VAR_2->outstanding_ci; VAR_5 != VAR_2->outstanding_pi;
      VAR_5++) {
  VAR_4 = &VAR_2->outstanding_wrs[VAR_5 % VAR_2->cap.max_send_wr];

  if (!VAR_4->completed)
   break;

  if (VAR_2->sq_sig_type == VAR_1 ||
      VAR_4->send_flags & VAR_0)
   FUNC_0(FUNC_1(VAR_3, &VAR_4->wc));

  VAR_4->completed = 0;
 }

 VAR_2->outstanding_ci = VAR_5;
}
