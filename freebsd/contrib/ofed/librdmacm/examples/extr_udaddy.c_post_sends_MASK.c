
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ibv_sge {uintptr_t addr; int lkey; int length; } ;
struct TYPE_6__ {int remote_qkey; int remote_qpn; int ah; } ;
struct TYPE_7__ {TYPE_1__ ud; } ;
struct ibv_send_wr {int num_sge; int send_flags; unsigned long wr_id; TYPE_2__ wr; int imm_data; int opcode; struct ibv_sge* sg_list; int * next; } ;
struct cmatest_node {TYPE_4__* cma_id; scalar_t__ mem; TYPE_3__* mr; int remote_qkey; int remote_qpn; int ah; int connected; } ;
struct TYPE_10__ {int qp_num; } ;
struct TYPE_9__ {TYPE_5__* qp; } ;
struct TYPE_8__ {int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,struct ibv_send_wr*,struct ibv_send_wr**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct cmatest_node *VAR_3, int VAR_4)
{
 struct ibv_send_wr VAR_5, *VAR_6;
 struct ibv_sge VAR_7;
 int VAR_8, VAR_9 = 0;

 if (!VAR_3->connected || !VAR_1)
  return 0;

 VAR_5.next = ((void*)0);
 VAR_5.sg_list = &VAR_7;
 VAR_5.num_sge = 1;
 VAR_5.opcode = VAR_0;
 VAR_5.send_flags = VAR_4;
 VAR_5.wr_id = (unsigned long)VAR_3;
 VAR_5.imm_data = FUNC_0(VAR_3->cma_id->qp->qp_num);

 VAR_5.wr.ud.ah = VAR_3->ah;
 VAR_5.wr.ud.remote_qpn = VAR_3->remote_qpn;
 VAR_5.wr.ud.remote_qkey = VAR_3->remote_qkey;

 VAR_7.length = VAR_2;
 VAR_7.lkey = VAR_3->mr->lkey;
 VAR_7.addr = (uintptr_t) VAR_3->mem;

 for (VAR_8 = 0; VAR_8 < VAR_1 && !VAR_9; VAR_8++) {
  VAR_9 = FUNC_1(VAR_3->cma_id->qp, &VAR_5, &VAR_6);
  if (VAR_9)
   FUNC_2("failed to post sends: %d\n", VAR_9);
 }
 return VAR_9;
}
