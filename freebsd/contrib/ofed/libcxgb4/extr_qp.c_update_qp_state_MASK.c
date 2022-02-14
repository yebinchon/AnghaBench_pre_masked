
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_query_qp {int dummy; } ;
struct ibv_qp_init_attr {int dummy; } ;
struct ibv_qp_attr {int qp_state; } ;
struct TYPE_2__ {int state; } ;
struct c4iw_qp {TYPE_1__ ibv_qp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct ibv_qp_attr*,int ,struct ibv_qp_init_attr*,struct ibv_query_qp*,int) ;

__attribute__((used)) static void FUNC_2(struct c4iw_qp *VAR_1)
{
 struct ibv_query_qp VAR_2;
 struct ibv_qp_attr VAR_3;
 struct ibv_qp_init_attr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_1->ibv_qp, &VAR_3, VAR_0, &VAR_4,
          &VAR_2, sizeof VAR_2);
 FUNC_0(!VAR_5);
 if (!VAR_5)
  VAR_1->ibv_qp.state = VAR_3.qp_state;
}
