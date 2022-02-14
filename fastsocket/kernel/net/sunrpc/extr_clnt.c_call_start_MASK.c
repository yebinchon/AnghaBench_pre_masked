
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rpc_proc; } ;
struct rpc_task {int tk_action; TYPE_2__ tk_msg; int tk_pid; struct rpc_clnt* tk_client; } ;
struct rpc_clnt {TYPE_3__* cl_stats; int cl_vers; int cl_protname; } ;
struct TYPE_6__ {int rpccnt; } ;
struct TYPE_4__ {int p_count; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ,int ,char*) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void
FUNC_3(struct rpc_task *VAR_1)
{
 struct rpc_clnt *VAR_2 = VAR_1->tk_client;

 FUNC_1("RPC: %5u call_start %s%d proc %s (%s)\n", VAR_1->tk_pid,
   VAR_2->cl_protname, VAR_2->cl_vers,
   FUNC_2(VAR_1),
   (FUNC_0(VAR_1) ? "async" : "sync"));


 VAR_1->tk_msg.rpc_proc->p_count++;
 VAR_2->cl_stats->rpccnt++;
 VAR_1->tk_action = VAR_0;
}
