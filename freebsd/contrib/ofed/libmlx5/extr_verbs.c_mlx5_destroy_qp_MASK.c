
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rsn; } ;
struct TYPE_5__ {scalar_t__ wqe_cnt; } ;
struct TYPE_4__ {scalar_t__ wqe_cnt; } ;
struct mlx5_qp {int db; TYPE_3__ rsc; TYPE_2__ rq; TYPE_1__ sq; scalar_t__ rss_qp; } ;
struct mlx5_context {int qp_table_mutex; int cqe_version; } ;
struct ibv_qp {scalar_t__ recv_cq; scalar_t__ send_cq; int qp_type; int qp_num; scalar_t__ srq; int context; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct mlx5_qp*) ;
 int FUNC_2 (struct ibv_qp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_context*,int ) ;
 int FUNC_5 (struct mlx5_context*,int ) ;
 int FUNC_6 (struct mlx5_context*,int ) ;
 int FUNC_7 (struct mlx5_qp*) ;
 int FUNC_8 (struct ibv_qp*) ;
 int FUNC_9 (struct ibv_qp*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 struct mlx5_context* FUNC_13 (int ) ;
 struct mlx5_qp* FUNC_14 (struct ibv_qp*) ;
 int * FUNC_15 (scalar_t__) ;

int FUNC_16(struct ibv_qp *VAR_0)
{
 struct mlx5_qp *VAR_1 = FUNC_14(VAR_0);
 struct mlx5_context *VAR_2 = FUNC_13(VAR_0->context);
 int VAR_3;

 if (VAR_1->rss_qp) {
  VAR_3 = FUNC_2(VAR_0);
  if (VAR_3)
   return VAR_3;
  goto free;
 }

 if (!VAR_2->cqe_version)
  FUNC_10(&VAR_2->qp_table_mutex);

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3) {
  if (!VAR_2->cqe_version)
   FUNC_11(&VAR_2->qp_table_mutex);
  return VAR_3;
 }

 FUNC_8(VAR_0);

 FUNC_0(FUNC_12(VAR_0->recv_cq), VAR_1->rsc.rsn,
   VAR_0->srq ? FUNC_15(VAR_0->srq) : ((void*)0));
 if (VAR_0->send_cq != VAR_0->recv_cq)
  FUNC_0(FUNC_12(VAR_0->send_cq), VAR_1->rsc.rsn, ((void*)0));

 if (!VAR_2->cqe_version) {
  if (VAR_1->sq.wqe_cnt || VAR_1->rq.wqe_cnt)
   FUNC_4(VAR_2, VAR_0->qp_num);
 }

 FUNC_9(VAR_0);
 if (!VAR_2->cqe_version)
  FUNC_11(&VAR_2->qp_table_mutex);
 else if (!FUNC_3(VAR_0->qp_type))
  FUNC_5(VAR_2, VAR_1->rsc.rsn);

 FUNC_6(VAR_2, VAR_1->db);
 FUNC_7(VAR_1);
free:
 FUNC_1(VAR_1);

 return 0;
}
