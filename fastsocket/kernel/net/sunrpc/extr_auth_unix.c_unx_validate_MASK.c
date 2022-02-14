
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rpc_task {TYPE_3__* tk_rqstp; } ;
typedef scalar_t__ rpc_authflavor_t ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_2__* rq_cred; } ;
struct TYPE_5__ {TYPE_1__* cr_auth; } ;
struct TYPE_4__ {int au_rslack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static __be32 *
FUNC_2(struct rpc_task *VAR_4, __be32 *VAR_5)
{
 rpc_authflavor_t VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(*VAR_5++);
 if (VAR_6 != VAR_0 &&
     VAR_6 != VAR_2 &&
     VAR_6 != VAR_1) {
  FUNC_1("RPC: bad verf flavor: %u\n", VAR_6);
  return ((void*)0);
 }

 VAR_7 = FUNC_0(*VAR_5++);
 if (VAR_7 > VAR_3) {
  FUNC_1("RPC: giant verf size: %u\n", VAR_7);
  return ((void*)0);
 }
 VAR_4->tk_rqstp->rq_cred->cr_auth->au_rslack = (VAR_7 >> 2) + 2;
 VAR_5 += (VAR_7 >> 2);

 return VAR_5;
}
