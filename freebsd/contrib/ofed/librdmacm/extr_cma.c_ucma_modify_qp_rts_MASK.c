
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct rdma_cm_id {int qp; } ;
struct ibv_qp_attr {scalar_t__ max_rd_atomic; int qp_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct ibv_qp_attr*,int) ;
 int FUNC_1 (struct rdma_cm_id*,struct ibv_qp_attr*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rdma_cm_id *VAR_2, uint8_t VAR_3)
{
 struct ibv_qp_attr VAR_4;
 int VAR_5, VAR_6;

 VAR_4.qp_state = VAR_0;
 VAR_6 = FUNC_1(VAR_2, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_3 != VAR_1)
  VAR_4.max_rd_atomic = VAR_3;
 return FUNC_2(FUNC_0(VAR_2->qp, &VAR_4, VAR_5));
}
