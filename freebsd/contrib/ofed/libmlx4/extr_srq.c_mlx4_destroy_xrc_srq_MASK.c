
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srq_num; int cq; } ;
struct mlx4_srq {struct mlx4_srq* wrid; int buf; int db; TYPE_1__ verbs_srq; } ;
struct mlx4_cq {int lock; } ;
struct mlx4_context {int xsrq_table; } ;
struct ibv_srq {int context; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_srq*) ;
 int FUNC_1 (struct ibv_srq*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mlx4_cq*,int ,struct mlx4_srq*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx4_context*,int ,int ) ;
 int FUNC_6 (int *,int ,struct mlx4_srq*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mlx4_cq* FUNC_9 (int ) ;
 struct mlx4_context* FUNC_10 (int ) ;
 struct mlx4_srq* FUNC_11 (struct ibv_srq*) ;

int FUNC_12(struct ibv_srq *VAR_1)
{
 struct mlx4_context *VAR_2 = FUNC_10(VAR_1->context);
 struct mlx4_srq *VAR_3 = FUNC_11(VAR_1);
 struct mlx4_cq *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_9(VAR_3->verbs_srq.cq);
 FUNC_3(VAR_4, 0, VAR_3);
 FUNC_7(&VAR_4->lock);
 FUNC_2(&VAR_2->xsrq_table, VAR_3->verbs_srq.srq_num);
 FUNC_8(&VAR_4->lock);

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5) {
  FUNC_7(&VAR_4->lock);
  FUNC_6(&VAR_2->xsrq_table, VAR_3->verbs_srq.srq_num, VAR_3);
  FUNC_8(&VAR_4->lock);
  return VAR_5;
 }

 FUNC_5(VAR_2, VAR_0, VAR_3->db);
 FUNC_4(&VAR_3->buf);
 FUNC_0(VAR_3->wrid);
 FUNC_0(VAR_3);

 return 0;
}
