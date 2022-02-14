
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {int rpc_cred; int * rpc_proc; } ;
struct rpc_clnt {int dummy; } ;
struct TYPE_2__ {int (* lookup_cred ) (int *,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_clnt*,struct rpc_message*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct rpc_clnt *VAR_4)
{
 struct rpc_message VAR_5 = {
  .rpc_proc = &VAR_3,
 };
 int VAR_6;
 VAR_5.rpc_cred = VAR_2.lookup_cred(((void*)0), ((void*)0), 0);
 VAR_6 = FUNC_1(VAR_4, &VAR_5, VAR_0 | VAR_1);
 FUNC_0(VAR_5.rpc_cred);
 return VAR_6;
}
