
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_conn_bundle {int usage; int chanwait; int busy_conns; int avail_conns; int unused_conns; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct rxrpc_conn_bundle*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 struct rxrpc_conn_bundle* FUNC_5 (int,int ) ;

__attribute__((used)) static struct rxrpc_conn_bundle *FUNC_6(gfp_t VAR_0)
{
 struct rxrpc_conn_bundle *VAR_1;

 FUNC_1("");

 VAR_1 = FUNC_5(sizeof(struct rxrpc_conn_bundle), VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_1->unused_conns);
  FUNC_0(&VAR_1->avail_conns);
  FUNC_0(&VAR_1->busy_conns);
  FUNC_4(&VAR_1->chanwait);
  FUNC_3(&VAR_1->usage, 1);
 }

 FUNC_2(" = %p", VAR_1);
 return VAR_1;
}
