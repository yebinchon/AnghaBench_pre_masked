
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {struct rpc_cred* rq_cred; } ;
struct rpc_cred {TYPE_1__* cr_ops; } ;
struct TYPE_2__ {struct rpc_cred* (* crbind ) (struct rpc_task*,struct rpc_cred*,int) ;} ;


 scalar_t__ FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (struct rpc_cred*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_3 (struct rpc_task*,int) ;
 struct rpc_cred* FUNC_4 (struct rpc_task*,int) ;
 struct rpc_cred* FUNC_5 (struct rpc_task*,struct rpc_cred*,int) ;

__attribute__((used)) static int
FUNC_6(struct rpc_task *VAR_3, struct rpc_cred *VAR_4, int VAR_5)
{
 struct rpc_rqst *VAR_6 = VAR_3->tk_rqstp;
 struct rpc_cred *VAR_7;
 int VAR_8 = 0;

 if (VAR_5 & VAR_1)
  VAR_8 |= VAR_0;
 if (VAR_4 != ((void*)0))
  VAR_7 = VAR_4->cr_ops->crbind(VAR_3, VAR_4, VAR_8);
 else if (VAR_5 & VAR_2)
  VAR_7 = FUNC_4(VAR_3, VAR_8);
 else
  VAR_7 = FUNC_3(VAR_3, VAR_8);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 if (VAR_6->rq_cred != ((void*)0))
  FUNC_2(VAR_6->rq_cred);
 VAR_6->rq_cred = VAR_7;
 return 0;
}
