
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
struct rpcrdma_req {int * rl_reply; struct rpcrdma_buffer* rl_buffer; TYPE_1__ rl_iov; } ;
struct rpcrdma_buffer {size_t rb_recv_index; size_t rb_max_requests; int rb_lock; int ** rb_recv_bufs; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct rpcrdma_req *VAR_0)
{
 struct rpcrdma_buffer *VAR_1 = VAR_0->rl_buffer;
 unsigned long VAR_2;

 if (VAR_0->rl_iov.length == 0)
  VAR_1 = ((struct rpcrdma_req *) VAR_1)->rl_buffer;
 FUNC_0(&VAR_1->rb_lock, VAR_2);
 if (VAR_1->rb_recv_index < VAR_1->rb_max_requests) {
  VAR_0->rl_reply = VAR_1->rb_recv_bufs[VAR_1->rb_recv_index];
  VAR_1->rb_recv_bufs[VAR_1->rb_recv_index++] = ((void*)0);
 }
 FUNC_1(&VAR_1->rb_lock, VAR_2);
}
