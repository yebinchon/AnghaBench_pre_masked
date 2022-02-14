
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ibv_sge {uintptr_t addr; int lkey; int length; } ;
struct ibv_recv_wr {uintptr_t wr_id; int num_sge; struct ibv_sge* sg_list; int * next; } ;
struct TYPE_4__ {int srq; TYPE_1__* mr; int size; scalar_t__ buf; } ;
struct TYPE_3__ {int lkey; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 struct ibv_sge VAR_3;
 struct ibv_recv_wr VAR_4, *VAR_5;

 VAR_3.addr = (uintptr_t) VAR_0.buf;
 VAR_3.length = VAR_0.size;
 VAR_3.lkey = VAR_0.mr->lkey;

 VAR_4.next = ((void*)0);
 VAR_4.wr_id = (uintptr_t) &VAR_0;
 VAR_4.sg_list = &VAR_3;
 VAR_4.num_sge = 1;

 while (VAR_2--) {
  if (FUNC_1(VAR_0.srq, &VAR_4, &VAR_5)) {
   FUNC_0(VAR_1, "Failed to post receive to SRQ\n");
   return 1;
  }
 }
 return 0;
}
