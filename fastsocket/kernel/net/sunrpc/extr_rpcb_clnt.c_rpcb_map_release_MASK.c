
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcbind_args {struct rpcbind_args* r_addr; int r_xprt; int r_status; } ;


 int FUNC_0 (struct rpcbind_args*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct rpcbind_args *VAR_1 = VAR_0;

 FUNC_1(VAR_1->r_xprt, VAR_1->r_status);
 FUNC_2(VAR_1->r_xprt);
 FUNC_0(VAR_1->r_addr);
 FUNC_0(VAR_1);
}
