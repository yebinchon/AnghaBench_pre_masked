
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_qp_attr {scalar_t__ sq_psn; int qp_state; } ;
struct ibv_qp {int dummy; } ;
struct cma_id_private {int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ibv_qp*,struct ibv_qp_attr*,int) ;
 int FUNC_2 (int *,struct ibv_qp_attr*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cma_id_private*,struct ibv_qp*) ;

__attribute__((used)) static int FUNC_5(struct cma_id_private *VAR_6, struct ibv_qp *VAR_7)
{
 struct ibv_qp_attr VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 == 3)
  return FUNC_4(VAR_6, VAR_7);

 VAR_8.qp_state = VAR_0;
 VAR_10 = FUNC_2(&VAR_6->id, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_7, &VAR_8, VAR_9);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_8.qp_state = VAR_1;
 VAR_10 = FUNC_1(VAR_7, &VAR_8, VAR_4);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_8.qp_state = VAR_2;
 VAR_8.sq_psn = 0;
 VAR_10 = FUNC_1(VAR_7, &VAR_8, VAR_4 | VAR_3);
 return FUNC_3(VAR_10);
}
