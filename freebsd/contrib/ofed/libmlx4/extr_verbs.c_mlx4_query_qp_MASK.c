
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_gs; int max_post; } ;
struct mlx4_qp {int max_inline_data; TYPE_1__ sq; } ;
struct ibv_query_qp {int dummy; } ;
struct TYPE_4__ {int max_inline_data; int max_send_sge; int max_send_wr; } ;
struct ibv_qp_init_attr {TYPE_2__ cap; } ;
struct ibv_qp_attr {TYPE_2__ cap; } ;
struct ibv_qp {int dummy; } ;


 int FUNC_0 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_qp_init_attr*,struct ibv_query_qp*,int) ;
 struct mlx4_qp* FUNC_1 (struct ibv_qp*) ;

int FUNC_2(struct ibv_qp *VAR_0, struct ibv_qp_attr *VAR_1,
     int VAR_2,
     struct ibv_qp_init_attr *VAR_3)
{
 struct ibv_query_qp VAR_4;
 struct mlx4_qp *VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4, sizeof VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_3->cap.max_send_wr = VAR_5->sq.max_post;
 VAR_3->cap.max_send_sge = VAR_5->sq.max_gs;
 VAR_3->cap.max_inline_data = VAR_5->max_inline_data;

 VAR_1->cap = VAR_3->cap;

 return 0;
}
