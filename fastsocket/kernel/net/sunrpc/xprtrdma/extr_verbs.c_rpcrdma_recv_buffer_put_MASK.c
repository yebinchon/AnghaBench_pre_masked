
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_rep {int * rr_func; struct rpcrdma_buffer* rr_buffer; } ;
struct rpcrdma_buffer {size_t rb_recv_index; int rb_lock; struct rpcrdma_rep** rb_recv_bufs; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct rpcrdma_rep *VAR_0)
{
 struct rpcrdma_buffer *VAR_1 = VAR_0->rr_buffer;
 unsigned long VAR_2;

 VAR_0->rr_func = ((void*)0);
 FUNC_0(&VAR_1->rb_lock, VAR_2);
 VAR_1->rb_recv_bufs[--VAR_1->rb_recv_index] = VAR_0;
 FUNC_1(&VAR_1->rb_lock, VAR_2);
}
