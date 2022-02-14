
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_version {unsigned int vs_nproc; struct svc_procedure* vs_proc; } ;
struct svc_stat {scalar_t__ rpcbadclnt; scalar_t__ rpcbadauth; scalar_t__ rpcbadfmt; int rpccnt; int nettcpconn; int nettcpcnt; int netudpcnt; int netcnt; struct svc_program* program; } ;
struct svc_program {unsigned int pg_nvers; struct svc_version** pg_vers; } ;
struct svc_procedure {int pc_count; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned int,...) ;
 int FUNC_1 (struct seq_file*,char) ;

void FUNC_2(struct seq_file *VAR_0, const struct svc_stat *VAR_1) {
 const struct svc_program *VAR_2 = VAR_1->program;
 const struct svc_procedure *VAR_3;
 const struct svc_version *VAR_4;
 unsigned int VAR_5, VAR_6;

 FUNC_0(VAR_0,
  "net %u %u %u %u\n",
   VAR_1->netcnt,
   VAR_1->netudpcnt,
   VAR_1->nettcpcnt,
   VAR_1->nettcpconn);
 FUNC_0(VAR_0,
  "rpc %u %u %u %u %u\n",
   VAR_1->rpccnt,
   VAR_1->rpcbadfmt+VAR_1->rpcbadauth+VAR_1->rpcbadclnt,
   VAR_1->rpcbadfmt,
   VAR_1->rpcbadauth,
   VAR_1->rpcbadclnt);

 for (VAR_5 = 0; VAR_5 < VAR_2->pg_nvers; VAR_5++) {
  if (!(VAR_4 = VAR_2->pg_vers[VAR_5]) || !(VAR_3 = VAR_4->vs_proc))
   continue;
  FUNC_0(VAR_0, "proc%d %u", VAR_5, VAR_4->vs_nproc);
  for (VAR_6 = 0; VAR_6 < VAR_4->vs_nproc; VAR_6++, VAR_3++)
   FUNC_0(VAR_0, " %u", VAR_3->pc_count);
  FUNC_1(VAR_0, '\n');
 }
}
