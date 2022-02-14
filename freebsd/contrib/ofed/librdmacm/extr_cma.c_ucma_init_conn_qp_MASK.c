
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_qp_attr {int qp_state; } ;
struct ibv_qp {int dummy; } ;
struct cma_id_private {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibv_qp*,struct ibv_qp_attr*,int) ;
 int FUNC_1 (int *,struct ibv_qp_attr*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cma_id_private*,struct ibv_qp*) ;

__attribute__((used)) static int FUNC_4(struct cma_id_private *VAR_2, struct ibv_qp *VAR_3)
{
 struct ibv_qp_attr VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1 == 3)
  return FUNC_3(VAR_2, VAR_3);

 VAR_4.qp_state = VAR_0;
 VAR_6 = FUNC_1(&VAR_2->id, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_2(FUNC_0(VAR_3, &VAR_4, VAR_5));
}
