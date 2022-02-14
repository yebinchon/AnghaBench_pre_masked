
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rpc_version {int number; int nrprocs; int procs; } ;
struct rpc_program {size_t nrvers; int stats; int number; int name; struct rpc_version** version; } ;
struct rpc_clnt {int cl_stats; int cl_vers; int cl_prog; int cl_protname; int cl_maxproc; int cl_procinfo; } ;


 int FUNC_0 (int) ;
 struct rpc_clnt* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rpc_clnt*) ;
 struct rpc_clnt* FUNC_3 (struct rpc_clnt*) ;
 int FUNC_4 (struct rpc_clnt*) ;
 int FUNC_5 (struct rpc_clnt*) ;

struct rpc_clnt *FUNC_6(struct rpc_clnt *VAR_0,
          struct rpc_program *VAR_1,
          u32 VAR_2)
{
 struct rpc_clnt *VAR_3;
 struct rpc_version *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2 >= VAR_1->nrvers || !VAR_1->version[VAR_2]);
 VAR_4 = VAR_1->version[VAR_2];
 VAR_3 = FUNC_3(VAR_0);
 if (FUNC_2(VAR_3))
  goto out;
 VAR_3->cl_procinfo = VAR_4->procs;
 VAR_3->cl_maxproc = VAR_4->nrprocs;
 VAR_3->cl_protname = VAR_1->name;
 VAR_3->cl_prog = VAR_1->number;
 VAR_3->cl_vers = VAR_4->number;
 VAR_3->cl_stats = VAR_1->stats;
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 != 0) {
  FUNC_5(VAR_3);
  VAR_3 = FUNC_1(VAR_5);
 }
out:
 return VAR_3;
}
