
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct mlx4_qp* wrid; scalar_t__ wqe_cnt; } ;
struct TYPE_6__ {struct mlx4_qp* wrid; scalar_t__ wqe_cnt; } ;
struct mlx4_qp {int buf; TYPE_2__ sq; TYPE_1__ rq; int db; } ;
struct ibv_qp {scalar_t__ recv_cq; scalar_t__ send_cq; int context; int qp_num; scalar_t__ srq; } ;
struct TYPE_8__ {int qp_table_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct mlx4_qp*) ;
 int FUNC_2 (struct ibv_qp*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (struct ibv_qp*) ;
 int FUNC_7 (struct ibv_qp*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_3__* FUNC_11 (int ) ;
 struct mlx4_qp* FUNC_12 (struct ibv_qp*) ;
 int * FUNC_13 (scalar_t__) ;

int FUNC_14(struct ibv_qp *VAR_1)
{
 struct mlx4_qp *VAR_2 = FUNC_12(VAR_1);
 int VAR_3;

 FUNC_8(&FUNC_11(VAR_1->context)->qp_table_mutex);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_9(&FUNC_11(VAR_1->context)->qp_table_mutex);
  return VAR_3;
 }

 FUNC_6(VAR_1);

 if (VAR_1->recv_cq)
  FUNC_0(FUNC_10(VAR_1->recv_cq), VAR_1->qp_num,
    VAR_1->srq ? FUNC_13(VAR_1->srq) : ((void*)0));
 if (VAR_1->send_cq && VAR_1->send_cq != VAR_1->recv_cq)
  FUNC_0(FUNC_10(VAR_1->send_cq), VAR_1->qp_num, ((void*)0));

 if (VAR_2->sq.wqe_cnt || VAR_2->rq.wqe_cnt)
  FUNC_3(FUNC_11(VAR_1->context), VAR_1->qp_num);

 FUNC_7(VAR_1);
 FUNC_9(&FUNC_11(VAR_1->context)->qp_table_mutex);

 if (VAR_2->rq.wqe_cnt) {
  FUNC_5(FUNC_11(VAR_1->context), VAR_0, VAR_2->db);
  FUNC_1(VAR_2->rq.wrid);
 }
 if (VAR_2->sq.wqe_cnt)
  FUNC_1(VAR_2->sq.wrid);
 FUNC_4(&VAR_2->buf);
 FUNC_1(VAR_2);

 return 0;
}
