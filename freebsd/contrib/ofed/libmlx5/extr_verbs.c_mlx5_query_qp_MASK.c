
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_gs; int max_post; } ;
struct mlx5_qp {int max_inline_data; TYPE_1__ sq; scalar_t__ rss_qp; } ;
struct ibv_query_qp {int dummy; } ;
struct TYPE_4__ {int max_inline_data; int max_send_sge; int max_send_wr; } ;
struct ibv_qp_init_attr {TYPE_2__ cap; } ;
struct ibv_qp_attr {TYPE_2__ cap; } ;
struct ibv_qp {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_qp_init_attr*,struct ibv_query_qp*,int) ;
 struct mlx5_qp* FUNC_1 (struct ibv_qp*) ;

int FUNC_2(struct ibv_qp *VAR_1, struct ibv_qp_attr *VAR_2,
    int VAR_3, struct ibv_qp_init_attr *VAR_4)
{
 struct ibv_query_qp VAR_5;
 struct mlx5_qp *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 if (VAR_6->rss_qp)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  return VAR_7;

 VAR_4->cap.max_send_wr = VAR_6->sq.max_post;
 VAR_4->cap.max_send_sge = VAR_6->sq.max_gs;
 VAR_4->cap.max_inline_data = VAR_6->max_inline_data;

 VAR_2->cap = VAR_4->cap;

 return 0;
}
