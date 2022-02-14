
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_sge {uintptr_t addr; int lkey; int length; } ;
struct ibv_send_wr {int num_sge; unsigned long wr_id; scalar_t__ send_flags; int opcode; struct ibv_sge* sg_list; int * next; } ;
struct cmatest_node {TYPE_2__* cma_id; scalar_t__ mem; TYPE_1__* mr; int connected; } ;
struct TYPE_4__ {int qp; } ;
struct TYPE_3__ {int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ibv_send_wr*,struct ibv_send_wr**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct cmatest_node *VAR_3)
{
 struct ibv_send_wr VAR_4, *VAR_5;
 struct ibv_sge VAR_6;
 int VAR_7, VAR_8 = 0;

 if (!VAR_3->connected || !VAR_1)
  return 0;

 VAR_4.next = ((void*)0);
 VAR_4.sg_list = &VAR_6;
 VAR_4.num_sge = 1;
 VAR_4.opcode = VAR_0;
 VAR_4.send_flags = 0;
 VAR_4.wr_id = (unsigned long)VAR_3;

 VAR_6.length = VAR_2;
 VAR_6.lkey = VAR_3->mr->lkey;
 VAR_6.addr = (uintptr_t) VAR_3->mem;

 for (VAR_7 = 0; VAR_7 < VAR_1 && !VAR_8; VAR_7++) {
  VAR_8 = FUNC_0(VAR_3->cma_id->qp, &VAR_4, &VAR_5);
  if (VAR_8)
   FUNC_1("failed to post sends: %d\n", VAR_8);
 }
 return VAR_8;
}
