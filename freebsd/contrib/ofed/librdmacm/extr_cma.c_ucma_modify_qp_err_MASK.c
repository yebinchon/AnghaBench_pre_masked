
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int qp; } ;
struct ibv_qp_attr {int qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ibv_qp_attr*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct rdma_cm_id *VAR_2)
{
 struct ibv_qp_attr VAR_3;

 if (!VAR_2->qp)
  return 0;

 VAR_3.qp_state = VAR_0;
 return FUNC_1(FUNC_0(VAR_2->qp, &VAR_3, VAR_1));
}
