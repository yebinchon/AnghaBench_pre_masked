
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct rpc_clnt* private; } ;
struct rpc_clnt {int cl_vers; int cl_prog; int cl_protname; int cl_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rpc_clnt*,int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 struct rpc_clnt *VAR_5 = VAR_3->private;

 FUNC_1(VAR_3, "RPC server: %s\n", VAR_5->cl_server);
 FUNC_1(VAR_3, "service: %s (%d) version %d\n", VAR_5->cl_protname,
   VAR_5->cl_prog, VAR_5->cl_vers);
 FUNC_1(VAR_3, "address: %s\n", FUNC_0(VAR_5, VAR_0));
 FUNC_1(VAR_3, "protocol: %s\n", FUNC_0(VAR_5, VAR_2));
 FUNC_1(VAR_3, "port: %s\n", FUNC_0(VAR_5, VAR_1));
 return 0;
}
