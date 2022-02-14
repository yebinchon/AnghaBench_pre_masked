
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_task {TYPE_1__* tk_rqstp; } ;
struct rpc_cred {int cr_flags; } ;
struct TYPE_2__ {struct rpc_cred* rq_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct rpc_task *VAR_3)
{
 struct rpc_cred *VAR_4 = VAR_3->tk_rqstp->rq_cred;
 int VAR_5 = 0;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 if (!FUNC_3(VAR_1, &VAR_4->cr_flags) &&
   !FUNC_3(VAR_2, &VAR_4->cr_flags)) {
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   goto out;
  VAR_4 = VAR_3->tk_rqstp->rq_cred;
 }

 if (FUNC_3(VAR_1, &VAR_4->cr_flags))
  VAR_5 = FUNC_1(VAR_3);
out:
 return VAR_5;
}
