
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct rpc_stat* private; } ;
struct rpc_version {unsigned int nrprocs; TYPE_1__* procs; int number; } ;
struct rpc_stat {int rpcauthrefresh; int rpcretrans; int rpccnt; int nettcpconn; int nettcpcnt; int netudpcnt; int netcnt; struct rpc_program* program; } ;
struct rpc_program {unsigned int nrvers; struct rpc_version** version; } ;
struct TYPE_2__ {int p_count; } ;


 int FUNC_0 (struct seq_file*,char*,int ,...) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1) {
 const struct rpc_stat *VAR_2 = VAR_0->private;
 const struct rpc_program *VAR_3 = VAR_2->program;
 unsigned int VAR_4, VAR_5;

 FUNC_0(VAR_0,
  "net %u %u %u %u\n",
   VAR_2->netcnt,
   VAR_2->netudpcnt,
   VAR_2->nettcpcnt,
   VAR_2->nettcpconn);
 FUNC_0(VAR_0,
  "rpc %u %u %u\n",
   VAR_2->rpccnt,
   VAR_2->rpcretrans,
   VAR_2->rpcauthrefresh);

 for (VAR_4 = 0; VAR_4 < VAR_3->nrvers; VAR_4++) {
  const struct rpc_version *VAR_6 = VAR_3->version[VAR_4];
  if (!VAR_6)
   continue;
  FUNC_0(VAR_0, "proc%u %u",
     VAR_6->number, VAR_6->nrprocs);
  for (VAR_5 = 0; VAR_5 < VAR_6->nrprocs; VAR_5++)
   FUNC_0(VAR_0, " %u",
     VAR_6->procs[VAR_5].p_count);
  FUNC_1(VAR_0, '\n');
 }
 return 0;
}
