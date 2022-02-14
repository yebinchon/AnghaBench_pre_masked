
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;


 int FUNC_0 (struct rpc_clnt*) ;
 int VAR_0 ;
 struct rpc_clnt* VAR_1 ;
 struct rpc_clnt* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
 struct rpc_clnt *VAR_4 = VAR_1;
 struct rpc_clnt *VAR_5 = VAR_2;
 int VAR_6;

 FUNC_1(&VAR_0);
 if (--VAR_3 == 0) {
  VAR_1 = ((void*)0);
  VAR_2 = ((void*)0);
 }
 VAR_6 = !VAR_3;
 FUNC_2(&VAR_0);

 if (VAR_6) {



  if (VAR_5)
   FUNC_0(VAR_5);
  if (VAR_4)
   FUNC_0(VAR_4);
 }
}
