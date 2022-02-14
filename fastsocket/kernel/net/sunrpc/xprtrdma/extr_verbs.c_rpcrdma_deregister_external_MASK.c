
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_ia {int ri_memreg_strategy; } ;
struct rpcrdma_xprt {struct rpcrdma_ia rx_ia; } ;
struct rpcrdma_rep {void (* rr_func ) (struct rpcrdma_rep*) ;} ;
struct rpcrdma_mr_seg {int mr_nsegs; } ;


 int FUNC_0 (int) ;





 int FUNC_1 (struct rpcrdma_mr_seg*,struct rpcrdma_ia*) ;
 int FUNC_2 (struct rpcrdma_mr_seg*,struct rpcrdma_ia*) ;
 int FUNC_3 (struct rpcrdma_mr_seg*,struct rpcrdma_ia*,struct rpcrdma_xprt*) ;
 int FUNC_4 (struct rpcrdma_mr_seg*,struct rpcrdma_ia*,struct rpcrdma_xprt*,void**) ;
 int FUNC_5 (struct rpcrdma_ia*,struct rpcrdma_mr_seg*) ;

int
FUNC_6(struct rpcrdma_mr_seg *VAR_0,
  struct rpcrdma_xprt *VAR_1, void *VAR_2)
{
 struct rpcrdma_ia *VAR_3 = &VAR_1->rx_ia;
 int VAR_4 = VAR_0->mr_nsegs, VAR_5;

 switch (VAR_3->ri_memreg_strategy) {
 case 131:
  VAR_5 = FUNC_3(VAR_0, VAR_3, VAR_1);
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_0, VAR_3);
  break;

 case 129:
 case 130:
  VAR_5 = FUNC_4(VAR_0, VAR_3, VAR_1, &VAR_2);
  break;

 default:
  VAR_5 = FUNC_1(VAR_0, VAR_3);
  break;
 }
 if (VAR_2) {
  struct rpcrdma_rep *VAR_6 = VAR_2;
  void (*VAR_7)(struct rpcrdma_rep *) = VAR_6->rr_func;
  VAR_6->rr_func = ((void*)0);
  VAR_7(VAR_6);
 }
 return VAR_4;
}
