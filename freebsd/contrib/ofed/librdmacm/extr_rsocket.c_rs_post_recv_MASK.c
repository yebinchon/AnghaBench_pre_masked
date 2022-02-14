
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsocket {int opts; int rbuf_msg_index; int rq_size; TYPE_2__* cm_id; TYPE_1__* rmr; scalar_t__ rbuf_size; scalar_t__ rbuf; } ;
struct ibv_sge {int length; int lkey; scalar_t__ addr; } ;
struct ibv_recv_wr {int num_sge; struct ibv_sge* sg_list; void* wr_id; int * next; } ;
struct TYPE_4__ {int qp; } ;
struct TYPE_3__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct rsocket *VAR_2)
{
 struct ibv_recv_wr VAR_3, *VAR_4;
 struct ibv_sge VAR_5;

 VAR_3.next = ((void*)0);
 if (!(VAR_2->opts & VAR_1)) {
  VAR_3.wr_id = FUNC_2(0);
  VAR_3.sg_list = ((void*)0);
  VAR_3.num_sge = 0;
 } else {
  VAR_3.wr_id = FUNC_2(VAR_2->rbuf_msg_index);
  VAR_5.addr = (uintptr_t) VAR_2->rbuf + VAR_2->rbuf_size +
      (VAR_2->rbuf_msg_index * VAR_0);
  VAR_5.length = VAR_0;
  VAR_5.lkey = VAR_2->rmr->lkey;

  VAR_3.sg_list = &VAR_5;
  VAR_3.num_sge = 1;
  if(++VAR_2->rbuf_msg_index == VAR_2->rq_size)
   VAR_2->rbuf_msg_index = 0;
 }

 return FUNC_1(FUNC_0(VAR_2->cm_id->qp, &VAR_3, &VAR_4));
}
