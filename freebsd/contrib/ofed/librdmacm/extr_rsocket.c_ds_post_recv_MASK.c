
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rsocket {scalar_t__ rbuf_size; } ;
struct ibv_sge {int length; int lkey; scalar_t__ addr; } ;
struct ibv_recv_wr {int num_sge; struct ibv_sge* sg_list; int * next; int wr_id; } ;
struct ibv_grh {int dummy; } ;
struct ds_qp {TYPE_2__* cm_id; TYPE_1__* rmr; scalar_t__ rbuf; } ;
struct TYPE_4__ {int qp; } ;
struct TYPE_3__ {int lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ibv_recv_wr*,struct ibv_recv_wr**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct rsocket *VAR_1, struct ds_qp *VAR_2, uint32_t VAR_3)
{
 struct ibv_recv_wr VAR_4, *VAR_5;
 struct ibv_sge VAR_6[2];

 VAR_6[0].addr = (uintptr_t) VAR_2->rbuf + VAR_1->rbuf_size;
 VAR_6[0].length = sizeof(struct ibv_grh);
 VAR_6[0].lkey = VAR_2->rmr->lkey;
 VAR_6[1].addr = (uintptr_t) VAR_2->rbuf + VAR_3;
 VAR_6[1].length = VAR_0;
 VAR_6[1].lkey = VAR_2->rmr->lkey;

 VAR_4.wr_id = FUNC_2(VAR_3);
 VAR_4.next = ((void*)0);
 VAR_4.sg_list = VAR_6;
 VAR_4.num_sge = 2;

 return FUNC_1(FUNC_0(VAR_2->cm_id->qp, &VAR_4, &VAR_5));
}
