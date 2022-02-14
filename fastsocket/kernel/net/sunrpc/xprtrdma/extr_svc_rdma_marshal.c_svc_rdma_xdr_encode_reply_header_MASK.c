
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svcxprt_rdma {int sc_max_requests; } ;
struct TYPE_2__ {void** rm_chunks; } ;
struct rpcrdma_msg {int rm_xid; int rm_vers; TYPE_1__ rm_body; void* rm_type; void* rm_credit; } ;
typedef enum rpcrdma_proc { ____Placeholder_rpcrdma_proc } rpcrdma_proc ;


 void* FUNC_0 (int) ;
 void* VAR_0 ;

void FUNC_1(struct svcxprt_rdma *VAR_1,
      struct rpcrdma_msg *VAR_2,
      struct rpcrdma_msg *VAR_3,
      enum rpcrdma_proc VAR_4)
{
 VAR_3->rm_xid = FUNC_0(VAR_2->rm_xid);
 VAR_3->rm_vers = FUNC_0(VAR_2->rm_vers);
 VAR_3->rm_credit = FUNC_0(VAR_1->sc_max_requests);
 VAR_3->rm_type = FUNC_0(VAR_4);


 VAR_3->rm_body.rm_chunks[0] = VAR_0;
 VAR_3->rm_body.rm_chunks[1] = VAR_0;
 VAR_3->rm_body.rm_chunks[2] = VAR_0;
}
