
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_sge {uintptr_t addr; int lkey; scalar_t__ length; } ;
struct ibv_recv_wr {int num_sge; uintptr_t wr_id; struct ibv_sge* sg_list; int * next; } ;
struct ibv_grh {int dummy; } ;
struct cmatest_node {TYPE_2__* cma_id; scalar_t__ mem; TYPE_1__* mr; } ;
struct TYPE_4__ {int qp; } ;
struct TYPE_3__ {int lkey; } ;


 int FUNC_0 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct cmatest_node *VAR_2)
{
 struct ibv_recv_wr VAR_3, *VAR_4;
 struct ibv_sge VAR_5;
 int VAR_6, VAR_7 = 0;

 if (!VAR_0)
  return 0;

 VAR_3.next = ((void*)0);
 VAR_3.sg_list = &VAR_5;
 VAR_3.num_sge = 1;
 VAR_3.wr_id = (uintptr_t) VAR_2;

 VAR_5.length = VAR_1 + sizeof(struct ibv_grh);
 VAR_5.lkey = VAR_2->mr->lkey;
 VAR_5.addr = (uintptr_t) VAR_2->mem;

 for (VAR_6 = 0; VAR_6 < VAR_0 && !VAR_7; VAR_6++ ) {
  VAR_7 = FUNC_0(VAR_2->cma_id->qp, &VAR_3, &VAR_4);
  if (VAR_7) {
   FUNC_1("failed to post receives: %d\n", VAR_7);
   break;
  }
 }
 return VAR_7;
}
