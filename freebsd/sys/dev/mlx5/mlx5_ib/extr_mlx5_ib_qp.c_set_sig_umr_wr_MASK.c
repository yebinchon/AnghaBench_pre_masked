
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct TYPE_10__ {void* qend; } ;
struct mlx5_ib_qp {TYPE_4__ sq; int signature_en; } ;
struct mlx5_ib_mr {TYPE_5__* sig; } ;
struct TYPE_8__ {int num_sge; TYPE_1__* sg_list; } ;
struct ib_sig_handover_wr {int access_flags; TYPE_3__* prot; TYPE_2__ wr; int sig_mr; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_12__ {int pdn; } ;
struct TYPE_11__ {int sig_status_checked; } ;
struct TYPE_9__ {scalar_t__ lkey; scalar_t__ addr; int length; } ;
struct TYPE_7__ {int length; scalar_t__ lkey; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct mlx5_ib_qp*) ;
 void* FUNC_1 (struct mlx5_ib_qp*,int ) ;
 int FUNC_2 (struct ib_sig_handover_wr*,struct mlx5_ib_qp*,void**,int*) ;
 int FUNC_3 (void*,struct ib_sig_handover_wr*,int,int,int) ;
 int FUNC_4 (void*,int) ;
 struct ib_sig_handover_wr* FUNC_5 (struct ib_send_wr*) ;
 struct mlx5_ib_mr* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ib_send_wr *VAR_2, struct mlx5_ib_qp *VAR_3,
     void **VAR_4, int *VAR_5)
{
 struct ib_sig_handover_wr *VAR_6 = FUNC_5(VAR_2);
 struct mlx5_ib_mr *VAR_7 = FUNC_6(VAR_6->sig_mr);
 u32 VAR_8 = FUNC_0(VAR_3)->pdn;
 u32 VAR_9;
 int VAR_10, VAR_11;

 if (FUNC_7(VAR_6->wr.num_sge != 1) ||
     FUNC_7(VAR_6->access_flags & VAR_1) ||
     FUNC_7(!VAR_7->sig) || FUNC_7(!VAR_3->signature_en) ||
     FUNC_7(!VAR_7->sig->sig_status_checked))
  return -VAR_0;


 VAR_10 = VAR_6->wr.sg_list->length;
 if (VAR_6->prot &&
     (VAR_6->prot->lkey != VAR_6->wr.sg_list->lkey ||
      VAR_6->prot->addr != VAR_6->wr.sg_list->addr ||
      VAR_6->prot->length != VAR_6->wr.sg_list->length))
  VAR_10 += VAR_6->prot->length;






 VAR_9 = VAR_6->prot ? 3 : 1;

 FUNC_4(*VAR_4, VAR_9);
 *VAR_4 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_5 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
 if (FUNC_7((*VAR_4 == VAR_3->sq.qend)))
  *VAR_4 = FUNC_1(VAR_3, 0);

 FUNC_3(*VAR_4, VAR_6, VAR_9, VAR_10, VAR_8);
 *VAR_4 += sizeof(struct mlx5_mkey_seg);
 *VAR_5 += sizeof(struct mlx5_mkey_seg) / 16;
 if (FUNC_7((*VAR_4 == VAR_3->sq.qend)))
  *VAR_4 = FUNC_1(VAR_3, 0);

 VAR_11 = FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_7->sig->sig_status_checked = 0;
 return 0;
}
