
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcrdma_ia {int ri_memreg_strategy; TYPE_1__* ri_bind_mem; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct rpcrdma_mr_seg {int mr_nsegs; int mr_dma; int mr_base; int mr_rkey; } ;
struct TYPE_2__ {int rkey; } ;







 int FUNC_0 (struct rpcrdma_ia*,struct rpcrdma_mr_seg*,int) ;
 int FUNC_1 (struct rpcrdma_mr_seg*,int*,int,struct rpcrdma_ia*) ;
 int FUNC_2 (struct rpcrdma_mr_seg*,int*,int,struct rpcrdma_ia*) ;
 int FUNC_3 (struct rpcrdma_mr_seg*,int*,int,struct rpcrdma_ia*,struct rpcrdma_xprt*) ;
 int FUNC_4 (struct rpcrdma_mr_seg*,int*,int,struct rpcrdma_ia*,struct rpcrdma_xprt*) ;

int
FUNC_5(struct rpcrdma_mr_seg *VAR_0,
   int VAR_1, int VAR_2, struct rpcrdma_xprt *VAR_3)
{
 struct rpcrdma_ia *VAR_4 = &VAR_3->rx_ia;
 int VAR_5 = 0;

 switch (VAR_4->ri_memreg_strategy) {
 case 131:
  VAR_5 = FUNC_3(VAR_0, &VAR_1, VAR_2, VAR_4, VAR_3);
  break;


 case 128:
  VAR_5 = FUNC_2(VAR_0, &VAR_1, VAR_2, VAR_4);
  break;


 case 129:
 case 130:
  VAR_5 = FUNC_4(VAR_0, &VAR_1, VAR_2, VAR_4, VAR_3);
  break;


 default:
  VAR_5 = FUNC_1(VAR_0, &VAR_1, VAR_2, VAR_4);
  break;
 }
 if (VAR_5)
  return -1;

 return VAR_1;
}
