
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_createerr {int dummy; } ;


 int FUNC_0 (struct rpc_createerr*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct rpc_createerr*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rpc_createerr VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,void*) ;

struct rpc_createerr *
FUNC_7(void)
{
 struct rpc_createerr *VAR_5 = ((void*)0);

 if (FUNC_4())
  return (&VAR_4);
 if (FUNC_5(&VAR_3, VAR_2) != 0 || VAR_1 != 0)
  return (&VAR_4);
 VAR_5 = (struct rpc_createerr *)FUNC_3(VAR_0);
 if (!VAR_5) {
  VAR_5 = (struct rpc_createerr *)
   FUNC_1(sizeof (struct rpc_createerr));
  if (FUNC_6(VAR_0, (void *) VAR_5) != 0) {
   FUNC_0(VAR_5);
   return (&VAR_4);
  }
  FUNC_2(VAR_5, 0, sizeof (struct rpc_createerr));
  return (VAR_5);
 }
 return (VAR_5);
}
