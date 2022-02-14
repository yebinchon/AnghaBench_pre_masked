
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct rpc_clnt {scalar_t__ cl_server; scalar_t__ cl_inline_name; int cl_xprt; int * cl_metrics; struct rpc_clnt* cl_principal; struct rpc_clnt* cl_parent; TYPE_1__ cl_path; int cl_protname; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct rpc_clnt*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rpc_clnt*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct rpc_clnt *VAR_0)
{
 FUNC_1("RPC:       destroying %s client for %s\n",
   VAR_0->cl_protname, VAR_0->cl_server);
 if (!FUNC_0(VAR_0->cl_path.dentry)) {
  FUNC_6(VAR_0->cl_path.dentry);
  FUNC_4();
 }
 if (VAR_0->cl_parent != VAR_0) {
  FUNC_5(VAR_0->cl_parent);
  goto out_free;
 }
 if (VAR_0->cl_server != VAR_0->cl_inline_name)
  FUNC_2(VAR_0->cl_server);
out_free:
 FUNC_7(VAR_0);
 FUNC_3(VAR_0->cl_metrics);
 FUNC_2(VAR_0->cl_principal);
 VAR_0->cl_metrics = ((void*)0);
 FUNC_9(VAR_0->cl_xprt);
 FUNC_8();
 FUNC_2(VAR_0);
}
