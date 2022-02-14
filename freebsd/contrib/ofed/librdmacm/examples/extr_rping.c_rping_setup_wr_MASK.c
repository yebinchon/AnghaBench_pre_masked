
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_18__ {int num_sge; TYPE_8__* sg_list; void* send_flags; } ;
struct TYPE_17__ {int lkey; void* addr; } ;
struct TYPE_15__ {int num_sge; TYPE_5__* sg_list; void* send_flags; int opcode; } ;
struct TYPE_14__ {int length; int lkey; void* addr; } ;
struct TYPE_12__ {int num_sge; TYPE_2__* sg_list; } ;
struct TYPE_11__ {int length; int lkey; void* addr; } ;
struct rping_cb {TYPE_9__ rdma_sq_wr; TYPE_8__ rdma_sgl; TYPE_7__* rdma_mr; scalar_t__ rdma_buf; TYPE_6__ sq_wr; TYPE_5__ send_sgl; TYPE_4__* send_mr; int send_buf; TYPE_3__ rq_wr; TYPE_2__ recv_sgl; TYPE_1__* recv_mr; int recv_buf; } ;
struct TYPE_16__ {int lkey; } ;
struct TYPE_13__ {int lkey; } ;
struct TYPE_10__ {int lkey; } ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rping_cb *VAR_2)
{
 VAR_2->recv_sgl.addr = (uint64_t) (unsigned long) &VAR_2->recv_buf;
 VAR_2->recv_sgl.length = sizeof VAR_2->recv_buf;
 VAR_2->recv_sgl.lkey = VAR_2->recv_mr->lkey;
 VAR_2->rq_wr.sg_list = &VAR_2->recv_sgl;
 VAR_2->rq_wr.num_sge = 1;

 VAR_2->send_sgl.addr = (uint64_t) (unsigned long) &VAR_2->send_buf;
 VAR_2->send_sgl.length = sizeof VAR_2->send_buf;
 VAR_2->send_sgl.lkey = VAR_2->send_mr->lkey;

 VAR_2->sq_wr.opcode = VAR_1;
 VAR_2->sq_wr.send_flags = VAR_0;
 VAR_2->sq_wr.sg_list = &VAR_2->send_sgl;
 VAR_2->sq_wr.num_sge = 1;

 VAR_2->rdma_sgl.addr = (uint64_t) (unsigned long) VAR_2->rdma_buf;
 VAR_2->rdma_sgl.lkey = VAR_2->rdma_mr->lkey;
 VAR_2->rdma_sq_wr.send_flags = VAR_0;
 VAR_2->rdma_sq_wr.sg_list = &VAR_2->rdma_sgl;
 VAR_2->rdma_sq_wr.num_sge = 1;
}
