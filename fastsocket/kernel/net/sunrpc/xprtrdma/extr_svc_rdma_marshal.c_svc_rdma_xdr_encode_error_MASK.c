
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svcxprt_rdma {int sc_max_requests; } ;
struct rpcrdma_msg {int rm_xid; int rm_vers; } ;
typedef enum rpcrdma_errcode { ____Placeholder_rpcrdma_errcode } rpcrdma_errcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

int FUNC_1(struct svcxprt_rdma *VAR_3,
         struct rpcrdma_msg *VAR_4,
         enum rpcrdma_errcode VAR_5, u32 *VAR_6)
{
 u32 *VAR_7 = VAR_6;

 *VAR_6++ = FUNC_0(VAR_4->rm_xid);
 *VAR_6++ = FUNC_0(VAR_4->rm_vers);
 *VAR_6++ = FUNC_0(VAR_3->sc_max_requests);
 *VAR_6++ = FUNC_0(VAR_1);
 *VAR_6++ = FUNC_0(VAR_5);
 if (VAR_5 == VAR_0) {
  *VAR_6++ = FUNC_0(VAR_2);
  *VAR_6++ = FUNC_0(VAR_2);
 }

 return (int)((unsigned long)VAR_6 - (unsigned long)VAR_7);
}
