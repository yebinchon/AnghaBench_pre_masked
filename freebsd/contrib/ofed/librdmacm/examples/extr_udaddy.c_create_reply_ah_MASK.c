
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_wc {int imm_data; } ;
struct ibv_qp_init_attr {int dummy; } ;
struct ibv_qp_attr {int qkey; } ;
struct cmatest_node {int remote_qkey; TYPE_1__* cma_id; int remote_qpn; int mem; int pd; int ah; } ;
struct TYPE_2__ {int qp; int port_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ibv_wc*,int ,int ) ;
 int FUNC_2 (int ,struct ibv_qp_attr*,int ,struct ibv_qp_init_attr*) ;

__attribute__((used)) static void FUNC_3(struct cmatest_node *VAR_1, struct ibv_wc *VAR_2)
{
 struct ibv_qp_attr VAR_3;
 struct ibv_qp_init_attr VAR_4;

 VAR_1->ah = FUNC_1(VAR_1->pd, VAR_2, VAR_1->mem,
      VAR_1->cma_id->port_num);
 VAR_1->remote_qpn = FUNC_0(VAR_2->imm_data);

 FUNC_2(VAR_1->cma_id->qp, &VAR_3, VAR_0, &VAR_4);
 VAR_1->remote_qkey = VAR_3.qkey;
}
