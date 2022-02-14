
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpcrdma_req {scalar_t__ rl_nchunks; TYPE_3__* rl_segments; TYPE_1__* rl_reply; scalar_t__ rl_niovs; struct rpcrdma_buffer* rl_buffer; } ;
struct rpcrdma_mw {int mw_list; } ;
struct rpcrdma_ia {int ri_memreg_strategy; } ;
struct rpcrdma_buffer {size_t rb_send_index; size_t rb_recv_index; int rb_lock; int rb_mws; TYPE_1__** rb_recv_bufs; struct rpcrdma_req** rb_send_bufs; } ;
struct TYPE_5__ {struct rpcrdma_mw* rl_mw; } ;
struct TYPE_6__ {TYPE_2__ mr_chunk; } ;
struct TYPE_4__ {int * rr_func; int rr_unbind; } ;


 int FUNC_0 (int) ;

 int VAR_0 ;



 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct rpcrdma_ia* FUNC_3 (struct rpcrdma_buffer*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct rpcrdma_req *VAR_1)
{
 struct rpcrdma_buffer *VAR_2 = VAR_1->rl_buffer;
 struct rpcrdma_ia *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;
 unsigned long VAR_5;

 FUNC_0(VAR_1->rl_nchunks != 0);
 FUNC_4(&VAR_2->rb_lock, VAR_5);
 VAR_2->rb_send_bufs[--VAR_2->rb_send_index] = VAR_1;
 VAR_1->rl_niovs = 0;
 if (VAR_1->rl_reply) {
  VAR_2->rb_recv_bufs[--VAR_2->rb_recv_index] = VAR_1->rl_reply;
  FUNC_1(&VAR_1->rl_reply->rr_unbind);
  VAR_1->rl_reply->rr_func = ((void*)0);
  VAR_1->rl_reply = ((void*)0);
 }
 switch (VAR_3->ri_memreg_strategy) {
 case 131:
 case 128:
 case 129:
 case 130:




  VAR_4 = 1;
  do {
   struct rpcrdma_mw **VAR_6;
   VAR_6 = &VAR_1->rl_segments[VAR_4].mr_chunk.rl_mw;
   FUNC_2(&(*VAR_6)->mw_list, &VAR_2->rb_mws);
   *VAR_6 = ((void*)0);
  } while (++VAR_4 < VAR_0);
  FUNC_2(&VAR_1->rl_segments[0].mr_chunk.rl_mw->mw_list,
     &VAR_2->rb_mws);
  VAR_1->rl_segments[0].mr_chunk.rl_mw = ((void*)0);
  break;
 default:
  break;
 }
 FUNC_5(&VAR_2->rb_lock, VAR_5);
}
