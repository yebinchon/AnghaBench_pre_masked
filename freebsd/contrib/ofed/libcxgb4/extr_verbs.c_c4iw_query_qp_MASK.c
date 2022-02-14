
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_query_qp {int dummy; } ;
struct ibv_qp_init_attr {int dummy; } ;
struct ibv_qp_attr {int dummy; } ;
struct ibv_qp {int dummy; } ;
struct c4iw_qp {int lock; int wq; } ;


 int FUNC_0 (struct c4iw_qp*) ;
 int FUNC_1 (struct ibv_qp*,struct ibv_qp_attr*,int,struct ibv_qp_init_attr*,struct ibv_query_qp*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct c4iw_qp* FUNC_5 (struct ibv_qp*) ;

int FUNC_6(struct ibv_qp *VAR_0, struct ibv_qp_attr *VAR_1,
    int VAR_2, struct ibv_qp_init_attr *VAR_3)
{
 struct ibv_query_qp VAR_4;
 struct c4iw_qp *VAR_5 = FUNC_5(VAR_0);
 int VAR_6;

 FUNC_2(&VAR_5->lock);
 if (FUNC_4(&VAR_5->wq))
  FUNC_0(VAR_5);
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4, sizeof VAR_4);
 FUNC_3(&VAR_5->lock);
 return VAR_6;
}
