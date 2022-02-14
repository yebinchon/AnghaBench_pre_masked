
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int dummy; } ;
struct rpc_task {scalar_t__ tk_status; int tk_action; int tk_pid; struct rpc_xprt* tk_xprt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,struct rpc_xprt*,char*) ;
 int FUNC_1 (struct rpc_task*) ;
 scalar_t__ FUNC_2 (struct rpc_xprt*) ;

__attribute__((used)) static void
FUNC_3(struct rpc_task *VAR_2)
{
 struct rpc_xprt *VAR_3 = VAR_2->tk_xprt;

 FUNC_0("RPC: %5u call_connect xprt %p %s connected\n",
   VAR_2->tk_pid, VAR_3,
   (FUNC_2(VAR_3) ? "is" : "is not"));

 VAR_2->tk_action = VAR_1;
 if (!FUNC_2(VAR_3)) {
  VAR_2->tk_action = VAR_0;
  if (VAR_2->tk_status < 0)
   return;
  FUNC_1(VAR_2);
 }
}
